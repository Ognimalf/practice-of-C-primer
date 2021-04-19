forward_list<string> &insertString(forward_list<string> &list, string &str1, string &str2)
{
    auto begin = list.begin(), before = list.before_begin();
    for (; begin != list.end(); ++begin, ++before)
        if (*begin == str1) { list.insert_after(begin, str2); return list;}
    list.insert_after(before, str2);
    return list;
}