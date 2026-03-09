#include "Fixed.hpp"

#define GREEN  "\033[1;32m"
#define CYAN   "\033[1;36m"
#define RESET  "\033[0m"

int main(void)
{
    std::cout << GREEN;
    std::cout << "  ______  __  ___          ___    ___  " << std::endl;
    std::cout << " /  ____| \\ \\/  /         / _ \\  |__ \\ " << std::endl;
    std::cout << "|  |__     \\  /   ______ | | | |    ) |" << std::endl;
    std::cout << "|   __|    /  \\  |______|| | | |   / / " << std::endl;
    std::cout << "|  |____  / /\\  \\        | |_| |  / /_ " << std::endl;
    std::cout << " \\______|/_/  \\__\\        \\___/  |____|" << std::endl;
    std::cout << RESET << std::endl;

    std::cout << CYAN << "\n--- CREATION ---" << RESET << std::endl;
    Fixed       a;
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << CYAN << "\n--- INCREMENT & PRINT TESTS ---" << RESET << std::endl;
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << CYAN << "\n--- CONST MULTIPLICATION RESULT ---" << RESET << std::endl;
    std::cout << b << std::endl;

    std::cout << CYAN << "\n--- MAX FUNCTION TEST ---" << RESET << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;

    std::cout << CYAN << "\n--- DESTRUCTORS CALLED ---" << RESET << std::endl;

    return (0);
}