void biggies2(vector<string> &words, vector<string>::size_type sz)
{
    elimDups(words);
    stable_sort(words.begin(), words.end(),
                [] (const string &a, const string &b) { return a.size() < b.size(); });
    auto checkSz = bind(check, std::placeholders::_1, 6);
    auto wc = find_if(words.begin(), words.end(),checkSz);
    for_each(wc, words.end(), [] (const string &s) { cout << s << " "; });
}