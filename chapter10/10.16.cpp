#include "iostream"
#include "stack"
#include "vector"
#include "numeric"
#include "algorithm"
using namespace std;
void elimDups(vector<string> &words);
void biggies(vector<string> &words, vector<string>::size_type sz);
int main()
{

    return 0;
}

void elimDups(vector<string> &words)
{
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
    elimDups(words);
    stable_sort(words.begin(), words.end(), 
                [] (const string &a, const string &b) { return a.size() < b.size(); });
    auto wc = find_if(words.begin(), words.end(), 
                      [sz] (const string &s) { return s.size() >= sz; });
    for_each(wc, words.end(), [] (const string &s) { cout << s << " "; });
}

void biggies2(vector<string> &words, vector<string>::size_type sz)
{
    elimDups(words);
    stable_sort(words.begin(), words.end(),
                [] (const string &a, const string &b) { return a.size() < b.size(); });
    auto wc = partition(words.begin(), words.end(), [sz] (const string &s) { return s.size() >= 5; });
    for_each(wc, words.end(), [] (const string &s) { cout << s << " "; });
}