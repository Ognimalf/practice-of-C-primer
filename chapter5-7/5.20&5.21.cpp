#include "iostream"
#include "vector"
#include "string"
using namespace std;
int main()
{
    string str1, str2;
    int count = 0;
    cin >> str1;
    while (count++ < 6 && cin >> str2) {
        if (str1 == str2 && isupper(str1[0]))
            break;
        else
            str1 = str2;
    }
    str1 == str2 ? cout << str1 << endl : cout << "no same words";
    return 0;
}