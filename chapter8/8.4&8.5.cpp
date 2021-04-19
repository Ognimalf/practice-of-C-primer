#include <fstream>
#include "iostream"
#include "fstream"
#include "vector"

using namespace std;
ifstream &read(ifstream &is, vector<string> &text);
int main()
{
    ifstream in{};
    ofstream out{};
    string s;
    vector<string> text;
    in.open(file);
    if (!in) return -1;
    while(getline(in, s)) text.push_back(s);
    while(in >> s) text.push_back(s);
    in.close();
    return 0;
}
ifstream &output(ifstream &is, vector<string> &text)
{
    string s;
    while (getline(is, s)) text.push_back(s);
    is.clear();
    return is;
}