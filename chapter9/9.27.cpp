#include "iostream"
#include "vector"
#include "forward_list"
#include "deque"
using namespace std;
int main()
{
    forward_list<int> l1 = {1, 2, 3, 4, 5, 6};
    for (auto begin = l1.begin(), after = l1.before_begin(); begin != l1.end();) {
        if (*begin % 2 == 1) begin = l1.erase_after(after);
        else after = begin++;
    }
    for (auto begin = l1.begin(); begin != l1.end(); ++begin)
        cout << *begin;
    return 0;
}
