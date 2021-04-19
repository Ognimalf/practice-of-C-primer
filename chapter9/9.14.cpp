#include "iostream"
#include "vector"
#include "list"
using namespace std;
int main()
{
    list<char*> str;
    vector<string> vec;
    vec.assign(str.cbegin(), str.cend());
    return 0;
}