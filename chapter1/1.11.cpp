#include "iostream"
int main()
{
    int start, end;
    std::cout << "please input the start place.";
    std::cin >> start;
    std::cout << "please input the end place.";
    std::cin >> end;
    for(int i=start; i <= end;i++)
        std::cout << i << "\n";
    return 0;
}