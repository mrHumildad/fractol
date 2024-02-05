#ifndef FRACTOL_H
# define FRACTOL_H
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <math.h>
# include <stdio.h>
# include "minilibx-linux/mlx.h"
# include "libft/libft.h"

# define H 100
# define W 100

typedef struct s_complex
{
    double x;
    double y;

} t_complex;

typedef struct s_img
{
    void *img;
    char *pxls;
    int bpp;
    int endian;
    int line_len;
} t_img;

typedef struct s_fract
{
    char *name;
    void *mlx;
    void *win;
    t_img img;   
} t_fract;

double scale(double n, double min, double max, double old_max);
t_complex power2(t_complex z);
t_complex sum_z(t_complex z1, t_complex z2);


#endif
//# define BUFFER_SIZE 100