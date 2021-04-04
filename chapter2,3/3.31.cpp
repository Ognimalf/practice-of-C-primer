#include "iostream"
using namespace std;
int main()
{
    int a[10], k = 0;
    for (int & i : a)
        i = k++;
    for (int & i : a)
        cout << i << endl;
    return 0;
}