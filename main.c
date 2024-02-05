#include "fractol.h"

void init(t_fract *fract)
{
    fract -> mlx = mlx_init();
    // malloc error;
    fract -> win = mlx_new_window(fract -> mlx, W, H, fract -> name);
    // malloc error;
    fract -> img.img = mlx_new_image(fract -> mlx, W, H);
   // fract ->img.pxls = mlx_get_data_addr(fract->img.img, fract->img.bpp, fract->img.line_len, fract->img.endian);
    // malloc error;
    fract ->img.pxls =mlx_get_data_addr(fract -> img.img, &fract ->img.bpp, &fract -> img.line_len, &fract ->img.endian);
}

/*void draw_pixel(int x, int y, t_img *img, int color)
{
    int i;

    i = (img->line_len * y) + (x * (img->bpp / 8));
    printf("%d\n", i);
    *(unsigned int *)(img -> pxls +i) = color;
    //printf("*%d, %d*", x, y);
}*/

static void	draw_pixel(int x, int y, t_img *img, int color)
{
	int	offset;

	offset = (y * img->line_len) + (x * (img->bpp / 8));
	*(unsigned int *)(img->pxls + offset) = color;
}


void pixel(int x, int y, t_fract *fract)
{
    t_complex z;
    t_complex c;
    int iter = 42; //////////////////

    z.x = 0.0;
    z.y = 0.0;
    c.x = scale((double)x, -2, 2, W);
    c.y = scale((double)y, 2, -2, H);
    //printf("0\n");
    while (iter > 0)
    {
        z = sum_z(power2(z), c);
        if ((z.x * z.x) + (z.y * z.y) > 4)
        {
            draw_pixel(x, y, fract ->img.img, 0x000000);
            printf("0\n");
            return ;
        }
        iter--;
    }
    
    draw_pixel(x, y, fract ->img.img, 0xFF00FF);
    printf("1\n");
    return ;
    //printf("[%d, %d]  ->  [%f, %f]\n", x, y, scale((double)x, -2, 2, W), scale((double)y, 2, -2, H));
}

void draw(t_fract *fract)
{
    int x;
    int y;

    y = 0;
    while (y < H)
    {
        x = 0;
        while (x < W)
        {
            pixel(x, y, fract);
            x++;
        }
        y++;
    }
} 

int main(int ac, char **av)
{
    //printf("building mandelbrot\n");
    if (ac == 2 )//&& ft_strncmp(av[1], "mandelbrot", 10))
    {
        //ft_putstr_fd("building mandelbrot", 1);
        printf("building mandelbrot\n");

    }

    t_fract fract;

    fract.name = av[1];
    printf("before initialized\n");
    init(&fract);
    printf("initialized\n");
    draw(&fract);
    //printf("draw done");
    //mlx_put_image_to_window(fract.mlx, fract.win, fract.img.img, 0,0);
    /*while (1)
    {
        //printf("x");
        usleep(1000);
        //pause();
    }*/
    mlx_loop(fract.mlx);
    /*
    void	*mlx;
    void *window;

	
    mlx = mlx_init();
    if (mlx == NULL)
        return (0);
    window = mlx_new_window(mlx, 666, 666, "so_long");
    mlx_loop(mlx);
    mlx_destroy_display(mlx);
    free(mlx);
    return (0);*/
}