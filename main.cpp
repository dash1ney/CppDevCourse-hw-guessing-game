#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(0));
    const unsigned short random = rand() % 10;
    unsigned short number = 10;

    while (true) {
        std::cout << "Guess a number from 0 to 9: ";
        std::cin >> number;

        if (number == random) { break; }
        std::cout << "Wrong!" << std::endl;
    }

    std::cout << "Correct!" << std::endl;
    return 0;
}
