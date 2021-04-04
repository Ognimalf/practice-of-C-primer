#include <iostream>
#include <string>
using namespace std;
int main() {
    string text1, result;
    int i = 0;
    while (getline(cin, text1))
        result += text1;
    cout << result;
    result = "";
    getline(cin, text1);
    result += text1;
    while (getline(cin, text1) && ++i <= 3)
        result = result + " " + text1;
    cout << result;
    return 0;
}
