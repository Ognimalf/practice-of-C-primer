#include "iostream"
#include <sstream>
#include "stack"
#include "vector"
#include "numeric"
#include "algorithm"
using namespace std;
void elimDups(vector<string> &words);
void biggies1(vector<string> &words, vector<string>::size_type sz);
void biggies2(vector<string> &words, vector<string>::size_type sz);
int main()
{
    vector<string> words;
    string s, word;
    getline(cin, s);
    istringstream line(s);
    while (line >> word) 
        words.push_back(word);
    int a = 6;
    cout << count_if(words.begin(), words.end(), [a] (const string &s) { return s.size() >= a; });
    return 0;
}