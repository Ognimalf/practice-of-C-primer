#include "iostream"
#include "Sales_item.h"
int main()
{
    Sales_item record1, record2;
    std::cin >> record1 >> record2;
    if (compareIsbn(record1, record2))
        std::cout << record1 + record2 << std::endl;
    return 0;
}