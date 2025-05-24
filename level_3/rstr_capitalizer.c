#include <unistd.h>

void	capitalizer(char *str)
{
	int	i = 0;

	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i + 1] == ' ' || str[i + 1] == '\t' || !str[i + 1])
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		int i = 0;
		while (argc > ++i)
		{
			capitalizer(argv[i]);
			write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
}
