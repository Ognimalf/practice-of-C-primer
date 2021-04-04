#include "iostream"
#include "vector"
#include "string"
using namespace std;
int main()
{
    vector<int> box1 = {0, 1, 1, 2}, box2 = {0, 1, 1, 2, 3, 5, 8};
    bool flag = true;
    for (auto iter1 = box1.begin(), iter2 = box2.begin();
        iter1 != box1.end() && iter2 != box2.end(); ++iter1, ++iter2)
        if (*iter1 != *iter2) {
            flag = false;
            break;
        }
    flag ? cout << "true" : cout << "false";
    return 0;
}