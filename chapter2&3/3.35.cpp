#include "iostream"
#include "vector"
using namespace std;
int main()
{
    int a[10], *p = a, i = 0;
    while (i++ < 10) {
        *p = 0;
        p++;
    }
    for (int & i : a)
        cout << i;
    return 0;
}