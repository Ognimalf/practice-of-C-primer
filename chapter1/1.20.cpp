#include "iostream"
#include "Sales_item.h"
int main()
{
    Sales_item record;
    while (std::cin >> record)
        std::cout << record << std::endl;
    return 0;
}