#include "iostream"
#include "vector"
#include "forward_list"
#include "deque"
using namespace std;
int main()
{
    forward_list<int> l1 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = l1.before_begin(), begin = l1.begin();
    while (begin != l1.end()) {
        if (*begin % 2) {
            iter = l1.insert_after(begin, *begin);
            auto iter1 = iter;
            begin = ++iter1;
        }
        else begin = l1.erase_after(iter);
    }
    for (begin = l1.begin(); begin != l1.end(); ++begin)
        cout << *begin;
    return 0;
}