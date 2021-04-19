#include "iostream"
#include "stack"
#include "vector"
#include "numeric"
#include "algorithm"
using namespace std;
void elimDups(vector<string> &words);
int main()
{
    vector<string> words;
    string str;
    while (cin >> str)
        words.push_back(str);
    elimDups(words);
    for (auto &word : words)
        cout << word;
    return 0;
}

void elimDups(vector<string> &words)
{
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}