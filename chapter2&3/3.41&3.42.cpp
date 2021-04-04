#include "iostream"
#include "vector"
using namespace std;
int main()
{
    int num[3] = {1, 2, 3};
    vector<int> box(begin(num), end(num));
    for (int & i : box)
        cout << i;
    vector<int> box2 = {1, 2, 3};
    int num2[3], k = 0;
    for (int & i : box2)
        num2[k++] = i;
    return 0;
}