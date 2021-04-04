#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    vector<int> ivec;
    int i = 0, num, j;
    while (cin >> num && ++i <= 5)
        ivec.push_back(num);
    for (i = 0; i < ivec.size(); ++i)
        cout << ivec[i] + ivec[i+1] << endl;
    for (i = 0, j = ivec.size(); i < j; ++i, --j)
        cout << ivec[i] + ivec[j] << endl;
    return 0;
}
