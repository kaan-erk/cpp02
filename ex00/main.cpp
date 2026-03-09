#include "Fixed.hpp"

#define GREEN  "\033[1;32m"
#define CYAN   "\033[1;36m"
#define RESET  "\033[0m"

int main(void)
{
    std::cout << GREEN;
    std::cout << "  ______  __  ___          ___     ___  " << std::endl;
    std::cout << " /  ____| \\ \\/  /         / _ \\   / _ \\ " << std::endl;
    std::cout << "|  |__     \\  /   ______ | | | | | | | |" << std::endl;
    std::cout << "|   __|    /  \\  |______|| | | | | | | |" << std::endl;
    std::cout << "|  |____  / /\\  \\        | |_| | | |_| |" << std::endl;
    std::cout << " \\______|/_/  \\__\\        \\___/   \\___/ " << std::endl;
    std::cout << RESET << std::endl;

    std::cout << CYAN << "\nCONSTRUCTORS CALLED" << RESET << std::endl;

    Fixed   a;
    Fixed   b(a);
    Fixed   c;

    std::cout << CYAN << "\nCOPY ASSINGMENT OPERATOR CALLED" << RESET << std::endl;

    c = b;

    std::cout << CYAN << "\nMEMBER FUNCTIONS CALLED" << RESET << std::endl;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    return (0);
}