#include <iostream>

std::string toUpperCase(std::string str)
{
	std::string copystr = "";
	for (size_t i = 0; i < str.size(); i++)
	{
		copystr += toupper(str[i]);
	}
	return copystr;
}

int main(int ac, char **av)
{
	if (ac > 1)
	{
		std::string str(av[1]);
		std :: cout << toUpperCase(str) << std::endl;
	}
	else
		std::cout<< "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}