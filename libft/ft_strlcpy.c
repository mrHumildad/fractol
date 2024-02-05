/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnotaro <mnotaro@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:29:01 by mnotaro           #+#    #+#             */
/*   Updated: 2023/09/24 13:02:51 by mnotaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	if (size < 1)
		return (len);
	while (src[i] != '\0' && i < size -1)
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (len);
}
/*
int main(void)
{
	int res = 0;
	int resx = 0;
	char src[] = "123456789";
	char dst[] = "";
	char srcx[] = "123456789";
	char dstx[] = "";
	res = strlcpy(dst, src, 0);
	resx = ft_strlcpy(dstx, srcx, 0);
	printf("original res : %d , dest : %s\n", res, dst);
	printf("myft_res res : %d , dest : %s\n", resx, dstx);
}*/
