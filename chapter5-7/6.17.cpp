#include "iostream"
#include "string"
#include "vector"
using std::string;
bool upperDigit(const string &str)
{
    for (auto begin = str.begin(), end = str.end(); begin != end; ++begin)
        if (isupper(*begin))
            return true;
    return false;
}
void changeToLower(string &str)
{
    for (auto begin = str.begin(), end = str.end(); begin != end; ++begin)
        *begin = tolower(*begin);
}
bool compare(matrix &matrix1, matrix &matrix2);
vector<int>::iterator change_val(int n, vector<int>begin);