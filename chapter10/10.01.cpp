#include "iostream"
#include "stack"
#include "vector"
#include "algorithm"
using namespace std;
int main()
{
    vector<int> vec;
    int data;
    while (cin >> data)
        vec.push_back(data);
    auto times = count(vec.cbegin(), vec.cend(), 2);
    cout << times;
    return 0;
}
