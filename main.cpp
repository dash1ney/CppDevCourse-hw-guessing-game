#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(0));
    int random = rand() % 10;
    int number;

    while (number != random)
    {
        std::cout << "Guess a number from 0 to 9: ";
        std::cin >> number;

        number == random
            ? std::cout << "Correct!" << std::endl
            : std::cout << "Wrong!" << std::endl;
    }

    return 0;
}
