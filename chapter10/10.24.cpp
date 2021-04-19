#include "iostream"
#include <sstream>
#include "stack"
#include "vector"
#include "numeric"
#include "functional"
#include "algorithm"
using namespace std;
using namespace placeholders;
bool check(int &s, string::size_type sz);

int main()
{
    string s = "jsrgh";
    vector<int> vec = {1,2,3,4,5,6,7,8,9};
    string::size_type _length = s.size();
    cout << count_if(vec.begin(), vec.end(), bind(check, _1, _length));
    return 0;
}



bool check(int &s, string::size_type sz)
{
    return s >= sz;
}

