#include "iostream"
#include "fstream"
#include "iterator"
#include <sstream>
#include "stack"
#include "vector"
#include "list"
#include "functional"
#include "algorithm"
using namespace std;
using namespace placeholders;
int main()
{
    istream_iterator<int> in(cin);
    istream_iterator<int> eof;
    vector<int> vec(in, eof);
    ostream_iterator<int> out(cout, " ");
    sort(vec.begin(), vec.end());
    copy(vec.begin(), vec.end(), out);
    cout << endl;
    return 0;
}
