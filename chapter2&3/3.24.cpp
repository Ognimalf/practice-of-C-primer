#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> ivec;
    int i = 0, num;
    while (cin >> num && ++i <= 5)
        ivec.push_back(num);
    for (auto b = ivec.begin(), e = ivec.end(); b < e;)
        cout << *b + *(++b) << endl;
    for (auto b = ivec.begin(), e = --ivec.end(); b < e; ++b, --e)
        cout << *b + *e << endl;
    return 0;
}
