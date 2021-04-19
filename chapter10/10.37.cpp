#include "iostream"
#include "fstream"
#include "iterator"
#include "stack"
#include "vector"
#include "list"
#include "functional"
#include "algorithm"
using namespace std;
using namespace placeholders;
int main()
{
    vector<int> vec = {0,1,2,3,4,5,6,7,8,9};
    list<int> l1(vec.crbegin()+3, vec.crbegin()+8);
    for (auto &i :l1)
        cout << i << " ";
    return 0;
}

