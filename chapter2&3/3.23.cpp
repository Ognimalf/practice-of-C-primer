#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> box;
    int num;
    for (int i = 0; i < 10; ++i) {
        cin >> num;
        box.push_back(num);
    }
    for (auto &n : box)
        n *= 2;
    for (auto &n : box)
        cout << n << " ";
    return 0;
}
