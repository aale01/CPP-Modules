//
// Created by alebe on 06/05/2026.
//

#include <iostream>
#include <cctype>

int	main (int argc, char **argv)
{
	if (argc != 1)
	{
		for(int i = 1; argv[i]; i++)
		{
			std::string str = argv[i];
			for (size_t j = 0; j < str.size(); j++)
				std::cout << static_cast<char>(std::toupper(str[j]));
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return 0;
}
