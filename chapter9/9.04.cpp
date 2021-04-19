#include "iostream"
#include "vector"
using namespace std;
bool find(vector<int>::iterator &begin, vector<int>::iterator &end, int element);
int main()
{
    vector<int> box = {1,2,3,4,5,6};
    bool flag;
    auto begin = box.begin(), end = box.end();
    flag = find(begin, end, 7);
    cout << flag;
    return 0;
}
bool find(vector<int>::iterator &begin, vector<int>::iterator &end, int element)
{
    while (begin != end)
        if (*begin++ == element) return true;
    return false;
}
