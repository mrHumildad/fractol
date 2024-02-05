all :
	gcc -g main.c calc.c minilibx-linux/libmlx_Linux.a -L minilibx-linux -lXext -lX11 -Llibft -lft -o fractol