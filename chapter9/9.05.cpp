#include "iostream"
#include "vector"
using namespace std;
vector<int>::iterator find(vector<int>::iterator &begin, vector<int>::iterator &end, int element);
int main()
{
    vector<int> box = {1,2,3,4,5,6};
    bool flag;
    auto begin = box.begin(), end = box.end();
    auto result = find(begin, end, 2);
    cout << *begin;
    return 0;
}
vector<int>::iterator find(vector<int>::iterator &begin, vector<int>::iterator &end, int element)
{
    while (begin != end) {
        if (*begin == element) return begin;
        ++begin;
    }
    return end;
}