#include "iostream"
#include "vector"
using namespace std;
int main()
{
    int a[10], b[10], k = 0;
    for (int & i : a)
        i = k++;
    for (int & i : a)
        b[k++] = i;
    vector<int> num, num1;
    for (int i=0; i < 10; ++i)
        num.push_back(i);
    num1 = num;
    for (int & i : num1)
        cout << i << endl;
    return 0;
}