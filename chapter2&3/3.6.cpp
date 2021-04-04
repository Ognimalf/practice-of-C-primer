#include <iostream>
#include <string>
using namespace std;
int main() {
    string text1;
    cin >> text1;
    for (auto &c : text1)
        c = 'x';
    cout << text1;
    return 0;
}
