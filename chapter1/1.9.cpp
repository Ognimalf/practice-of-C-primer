#include "iostream"
int main()
{
    int number = 50;
    int result = 0;
    while (number <= 100)
        result += number++;
    std::cout << result;
    return 0;
}