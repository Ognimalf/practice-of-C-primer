#include <iostream>
#include <string>
using namespace std;
int main() {
    string text1;
    int i = 0;
    cin >> text1;
    while (i < text1.size())
        text1[i++] = 'x';
    cout << text1;
    return 0;
}
