#include <iostream>
#include <string>
using namespace std;
int main() {
    string text1, text2;
    getline(cin, text1);
    getline(cin, text2);
    text1.size() > text2.size() ? cout << text1 << endl : cout << text2 << endl;
    if (text1 == text2)
        cout << "text1 == text2" << endl;
    else
        text1 > text2 ? cout << text1 << endl : cout << text2 << endl;
    return 0;
}
