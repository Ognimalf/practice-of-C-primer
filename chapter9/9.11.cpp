#include "iostream"
#include "vector"
using namespace std;
int main()
{
    vector<int> a1;
    vector<int> a2(10, 2);
    vector<int> a3{10, 2};
    vector<int> a4(a3);
    vector<int> a5(a4.begin(), a4.end());
    vector<int> a6(10);
    return 0;
}
