#include "iostream"
#include "vector"
#include "list"
#include "deque"
using namespace std;
int main()
{
    deque<string> text;
    string str;
    while (cin >> str) text.push_back(str);
    for (auto begin = text.begin(); begin != text.end(); ++begin)
        cout << *begin << " ";
    return 0;
}
