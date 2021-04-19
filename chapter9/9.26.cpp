#include "iostream"
#include "vector"
#include "list"
#include "deque"
using namespace std;
int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    vector<int> vec;
    list<int> li;
    for (auto &i : ia) {
        vec.push_back(i);
        li.push_back(i);
    }
    for (auto begin = vec.begin(); begin != vec.end();) {
        if (*begin % 2 == 0)    begin = vec.erase(begin);
        else ++begin;
    }
    for (auto begin = li.begin(); begin != li.end();) {
        if (*begin % 2 == 1)    begin = li.erase(begin);
        else ++begin;
    }
    for (auto begin = vec.begin(); begin != vec.end(); ++begin)
        cout << *begin << " ";
    cout << "\n";
    for (auto begin = li.begin(); begin != li.end(); ++begin)
        cout << *begin << " ";
    return 0;
}
