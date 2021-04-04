#include "iostream"
#include "vector"
#include "string"
using namespace std;
int main()
{
    string str1, str2;
    do {
        cout << "input two strings." << endl;
        str1.size() > str2.size() ? cout << str1 << endl : cout << str2 << endl;
    } while (cin >> str1 >> str2);
    return 0;
}