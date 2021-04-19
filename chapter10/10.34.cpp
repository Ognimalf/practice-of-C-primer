#include "iostream"
#include "fstream"
#include "iterator"
#include "stack"
#include "vector"
#include "list"
#include "functional"
#include "algorithm"
using namespace std;
using namespace placeholders;
int main()
{
    ifstream file("D://draft/odd.txt");
    istream_iterator<int> in(file), eof;
    ostream_iterator<int> out(cout, " ");
    vector<int> vec(in, eof);
    for (auto rbegin = vec.crbegin(); rbegin != vec.crend(); ++rbegin)
        out = *rbegin;
    cout << endl;
    return 0;
}