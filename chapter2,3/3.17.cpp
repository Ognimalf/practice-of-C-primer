#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    vector<string> words;
    string word;
    int i = 0;
    while (cin >> word && ++i <= 5)
        words.push_back(word);
    for (auto &a : words)
        for (auto &c : a)
            c = toupper(c);
    for (auto &a : words)
        cout << a << endl;
    return 0;
}
