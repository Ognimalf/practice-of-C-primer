#include "iostream"
#include "stack"
#include "vector"
#include "list"
#include "algorithm"
using namespace std;
int main()
{
    list<string> vec;
    string s, s1 = "adcb";
    while (cin >> s)
        vec.push_back(s);
    auto times = count(vec.cbegin(), vec.cend(), s1);
    cout << times;
    return 0;
}