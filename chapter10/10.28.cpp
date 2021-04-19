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
    vector<int> vec = {1,2,3,4,5,6,7,8,9}, vec1, vec2;
    list<int> vec3;
    copy(vec.begin(), vec.end(), inserter(vec1, vec1.begin()));
    copy(vec.begin(), vec.end(), back_inserter(vec2));
    copy(vec.begin(), vec.end(), front_inserter(vec3));
    for (auto &i : vec1)
        cout << i;
    for (auto &i : vec2)
        cout << i;
    for (auto &i : vec3)
        cout << i;
    return 0;
}