#include "iostream"
#include "vector"
#include "string"
using namespace std;
int main()
{
    int num1, num2;
    while (cin >> num1 >> num2) {
        try {
            if (!num2) throw range_error("invalid == 0");
            cout << num1 / num2 << endl;
        } catch (range_error err) {
            cout << err.what() << "\nplease in put the numbers again." << endl;
        }
    }
    return 0;
}