#include "iostream"
istream &output(istream &is)
{
    string s;
    while (is >> s && is.eof()) cout << s << endl;
    is.clear();
    return is;
}
