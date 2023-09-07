#include "Harl.hpp"

void    Harl::compline(std::string str)
{
    std::string cmp[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*fc[4])() = {
        fc[0] = &Harl::debug,
        fc[1] = &Harl::info,
        fc[2] = &Harl::warning,
        fc[3] = &Harl::error,
    };
    int i;

    i = 0;
    while (!(str == cmp[i]) && i < 4)
        i++;
    switch (i)
    {
    case 0:
        (this->*fc[i])();
        break;
    case 1:
        (this->*fc[i])();
        break;
    case 2:
        (this->*fc[i])();
        break;
    case 3:
        (this->*fc[i])();
        break;
    default:
        std::cout << "I am not sure how tired I am today...\n"
					"[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    }
}

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my"
			"XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put"
			"enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for"
			"years whereas you started working here since last month." << std::endl;

}

void Harl::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}