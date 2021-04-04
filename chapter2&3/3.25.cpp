#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<unsigned> scores(11, 0);
    unsigned grade;
    while (cin >> grade) {
        auto b = scores.begin();
        ++*(b + grade / 10);
    }
    for (auto &n : scores)
        cout << n << " ";
    return 0;
}
