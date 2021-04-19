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
    ifstream file("D://draft/a.txt");
    istream_iterator<string> in(file);
    istream_iterator<string> eof;
    vector<string> vec(in, eof);
//    copy(in, eof, back_inserter(vec));
    ostream_iterator<string> out(cout, " ");
    copy(vec.begin(), vec.end(), out);
    cout << endl;
    return 0;
}
