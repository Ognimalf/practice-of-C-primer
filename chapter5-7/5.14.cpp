#include "iostream"
#include "vector"
#include "string"
using namespace std;
int main()
{
    string str, result, front;
    int length = 1, max_length = 1, i = 1;
    cin >> str;
    front = str;
    while (cin >> str && i++ <= 7) {
        if (str == front)
            ++length;
        else {
            if (length > max_length) {
                max_length = length;
                length = 1;
                result = front;
                front = str;
            }
        }
    }
    cout << result;
    return 0;
}
