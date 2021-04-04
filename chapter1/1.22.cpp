#include "iostream"
#include "Sales_item.h"
int main()
{
    Sales_item total;
    if (std::cin >> total) { 
        Sales_item trans;
        while (std::cin >> trans) 
                total += trans;
        std::cout << total << std::endl;
    } else {
        std::cout << "error";
    }
    return 0;
}