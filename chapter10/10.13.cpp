#include "iostream"
#include "stack"
#include "vector"
#include "numeric"
#include "algorithm"
using namespace std;
void elimDups(vector<string> &words);
bool lengthCheck(const string &s);
int main()
{
    vector<string> words;
    string str;
    while (cin >> str)
        words.push_back(str);
    auto end = partition(words.begin(), words.end(), lengthCheck);
    for (auto begin = words.begin(); begin != end; ++begin)
        cout << *begin;
    return 0;
}

bool lengthCheck(const string &s)
{
    return s.size() >= 5;
}

void elimDups(vector<string> &words)
{
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}