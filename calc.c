#include "fractol.h"


double scale(double n, double min, double max, double old_max)
{
    return ((max - min) * n / old_max + min); 
}

t_complex power2(t_complex z)
{
    t_complex res;
    res.x = (z.x * z.x) - (z.y * z.y);
    res.y = 2 * z.x * z.y;
    return(res);
}

t_complex sum_z(t_complex z1, t_complex z2)
{
    t_complex res;
    res.x = z1.x + z2.x;
    res.y = z1.y + z2.y;
    return (res);
}
