void	*memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == src || n == 0)
		return (dest);
	if(dest < src)
	{
		while(i < n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			((char *)dest)[n - 1] = ((char *)src)[n - 1];
			n--;		}
	}
	return (dest);
}

#include <stdio.h>
int main() {
    char str[20] = "Hello, World!";
    char buffer[20];

    // Utilisation de la fonction memmove pour copier une partie de la chaîne
    ft_memmove(buffer, str + 7, 5);

    // Affichage de la chaîne copiée
    printf("Chaine copiée : %s\n", buffer);

    return 0;
}

