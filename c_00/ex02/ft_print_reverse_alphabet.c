#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letra;

	letra = 122;
	while (letra <= 122 && letra >= 97)
	{
		write(1, &letra, 1);
		letra--;
	}
}
