#include <iostream>
#include <string>
using namespace std;
int main() {
    string text1;
    getline(cin, text1);
    for (auto &c : text1)
        if (ispunct(c))
            c = '\0';
    cout << text1 << endl;
    return 0;
}
