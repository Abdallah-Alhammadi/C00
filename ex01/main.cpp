#include "phoneBook.hpp"

int	main(void)
{
	phoneBook 	PL;
	std::string	str;

	while (str != "EXIT")
	{
		std::cout << "Enter a command > ";
		std::getline(std::cin, str);
		if (str == "ADD")
			PL.add();
		else if (str == "SEARCH")
			PL.search();
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
	}
	return (0);
}
