#include "iostream"
#include "vector"
#include "list"
#include "deque"
using namespace std;
int main()
{
    list<int> l1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    deque<int> odd, even;
    for (auto &i : l1) {
        if (i % 2 == 0) even.push_back(i);
        else odd.push_back(i);
    }
    return 0;
}
