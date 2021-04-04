#include "iostream"
int main()
{
    int sum = 0;
    int num = 0;
    while ((std::cin >> num))
        sum += num;
    std::cout << sum;
    return 0;
}