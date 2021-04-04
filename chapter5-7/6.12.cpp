#include "iostream"
#include "vector"
#include "string"
using namespace std;
void swap(int &num1, int &num2);
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    swap(num1, num2);
    cout << num1 << " " << num2 << endl;
    return 0;
}
void swap(int &num1, int &num2)
{
    int k = num1;
    num1 = num2;
    num2 = k;
}