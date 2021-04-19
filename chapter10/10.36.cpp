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
    list<int> box = {0,0,0,1,2,3,4,5,8,0,3,6,0,5,0,4,0,9,5,0,4,6,9,5,7,8,7,2,0,1,2};
    cout << *find(box.crbegin(), box.crend(), 0);
    return 0;
}

