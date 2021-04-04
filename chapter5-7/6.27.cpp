int sum(initializer_list<int> list)
{
    int sum = 0;
    for (int begin : list)
        sum += begin;
    return sum;
}