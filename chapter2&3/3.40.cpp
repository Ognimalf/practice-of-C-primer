#include "iostream"
#include "vector"
#include "string.h"
using namespace std;
int main()
{
    char str1[20] = "hello", str2[20] = "apple";
    char str3[20];
    strcpy(str3, str1);
    strcat(str3, str2);
    cout << str3;
    return 0;
}