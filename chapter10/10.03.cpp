#include "iostream"
#include "stack"
#include "vector"
#include "numeric"
#include "algorithm"
using namespace std;
int main()
{
    vector<int> vec = {1,2,3,4,5,6,7,8,9,10};
    cout << accumulate(vec.cbegin(), vec.cend(), 0);
    return 0;
}