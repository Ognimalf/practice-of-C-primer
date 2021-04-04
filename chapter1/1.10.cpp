#include "iostream"
int main()
{
    int number = 10;
    while (number >= 0)
        std::cout << number-- << '\n';
    return 0;
}