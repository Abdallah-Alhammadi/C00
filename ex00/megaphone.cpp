
#include <iostream>

int	main(int argc, char **argv)
{
	int		i;
	int		y;

	y = -1;
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (argc > 1 && argv && argv[++y])
	{
		i = -1;
		while (y > 0 && argv[y][++i])
			std::cout << (char)std::toupper(argv[y][i]);
	}
	std::cout << std::endl;
	return (0);
}
