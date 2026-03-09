#include <iostream>
#include "Fixed.hpp"

#define GREEN  "\033[1;32m"
#define CYAN   "\033[1;36m"
#define RESET  "\033[0m"

int main(void)
{
    std::cout << GREEN;
    std::cout << "  ______  __  ___          ___      _ " << std::endl;
    std::cout << " /  ____| \\ \\/  /         / _ \\    / |" << std::endl;
    std::cout << "|  |__     \\  /   ______ | | | |   | |" << std::endl;
    std::cout << "|   __|    /  \\  |______|| | | |   | |" << std::endl;
    std::cout << "|  |____  / /\\  \\        | |_| |   | |" << std::endl;
    std::cout << " \\______|/_/  \\__\\        \\___/    |_|" << std::endl;
    std::cout << RESET << std::endl;

    std::cout << CYAN << "\n--- CONSTRUCTORS CALLED ---" << RESET << std::endl;
    Fixed       a;
    Fixed const b(10);
    Fixed const c(42.42f);
    Fixed const d(b);

    std::cout << CYAN << "\n--- ASSIGNMENT OPERATOR CALLED ---" << RESET << std::endl;
    a = Fixed(1234.4321f);

    std::cout << CYAN << "\n--- VALUES AS FIXED-POINT ---" << RESET << std::endl;
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << CYAN << "\n--- VALUES AS INTEGER ---" << RESET << std::endl;
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;

    std::cout << CYAN << "\n--- DESTRUCTORS CALLED ---" << RESET << std::endl;

    return (0);
}