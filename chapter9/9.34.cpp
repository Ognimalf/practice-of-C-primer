#include "iostream"
#include "vector"
#include "forward_list"
#include "deque"
using namespace std;
int main()
{
    vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto begin = v.begin();
    while (begin != v.end()) {
        if (*begin % 2) {
            begin = v.insert(begin, *begin);
            begin += 2;
        } else ++begin;
    }
    for (auto &i : v)
        cout << i;
    return 0;
}