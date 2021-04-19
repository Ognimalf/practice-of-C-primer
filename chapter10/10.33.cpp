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
void read(ifstream &fileIn, ofstream &fileOut1, ofstream &fileOut2)
{
    istream_iterator<int> in(fileIn);
    istream_iterator<int> eof;
    ostream_iterator<int> out1(fileOut1, " ");
    ostream_iterator<int> out2(fileOut2, "\n");
    while (in != eof) {
        if (*in % 2) out1 = *in;
        else out2 = *in;
        ++in;
    }
}
int main()
{
    ifstream file("D://draft/a.txt");
    ofstream out1("D://draft/odd.txt"), out2("D://draft/even.txt");
    read(file, out1, out2);
    return 0;
}

