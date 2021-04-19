#include "iostream"
#include "vector"
#include "list"
using namespace std;
bool compare(list<int> &l1, vector<int> &vec1);
int main()
{
    vector<int> vec1 = {1, 2, 3, 4};
    vector<int> vec2 = {1, 2, 3, 4, 5};
    list<int> l1 = {1, 2, 5, 7, 8};
    if (vec1 == vec2) cout << true;
    else cout << false;
    bool flag = compare(l1, vec1);
    cout << flag;
    return 0;
}
bool compare(list<int> &l1, vector<int> &vec1)
{
    auto begin1 = vec1.begin();
    auto begin2 = l1.begin();
    for (;begin1 != vec1.end() && begin2 != l1.end(); ++begin1, ++begin2) {
        if (*begin1 < *begin2) {
            cout << "l1 > vec1";
            return true;
        } else {
            cout << "vec1 < l1";
            return false;
        }
    }
    if (begin1 != vec1.end()) return false;
    if (begin2 != l1.end()) return true;
}