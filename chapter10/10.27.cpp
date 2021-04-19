#include "iostream"
#include <sstream>
#include "stack"
#include "vector"
#include "list"
#include "functional"
#include "algorithm"
using namespace std;
using namespace placeholders;
int main()
{
    vector<int> vec = {1,1,1,1,2,2,3,4,5,4,3,5,6,7,6,4,5,7};
    list<int> l1;
    unique_copy(vec.cbegin(), vec.cend(), back_inserter(l1));
    for (auto &i : l1)
        cout << i;
    return 0;
}
