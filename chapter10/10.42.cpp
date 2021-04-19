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
void elimDups(list<string> &words)
{
    words.sort();
    words.unique();
}
int main()
{
    ifstream file("D://draft/a.txt");
    istream_iterator<string> in(file), eof;
    list<string> words(in, eof);
    elimDups(words);
    ostream_iterator<string> os(cout, " ");
    for (auto &word : words)
        os = word;
    cout << endl;
    return 0;
}

