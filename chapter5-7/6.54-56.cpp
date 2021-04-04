#include "iostream"
#include "vector"

using namespace std;
typedef int (*p) (int a, int b);
int add(int a, int b) {return a + b;}
int decrease(int a, int b) {return a - b;}
int multiply(int a, int b) {return a * b;}
int division(int a, int b) {if (b) return a / b; return 0;}
int main()
{
    vector<p> box = {add, decrease, multiply, division};
    return 0;
}