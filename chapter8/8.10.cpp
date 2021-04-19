#include "iostream"
#include <sstream>
#include <fstream>
#include "vector"

using namespace std;
istringstream &output(istringstream &is);
int main()
{
    ifstream in{};
    ofstream out{};
    vector<string> text;
    string s;
    in.open(file);
    while(getline(in, s)) text.push_back(s);
    for (auto begin = text.begin(); begin != text.end(); ++begin) {
        istringstream iss(*begin);
        output(iss);
    }
    return 0;
}

istringstream &output(istringstream &is)
{
    string s;
    while (is >> s) cout << s << endl;
    is.clear();
    return is;
}