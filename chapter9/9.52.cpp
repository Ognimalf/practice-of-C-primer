//计算中缀表达式
#include "iostream"
#include "stack"
#include "vector"
using namespace std;
void readNumber(string::iterator &begin, stack<double, vector<double>> &data);
int main()
{
    stack<char, vector<char>> expression;
    stack<double, vector<double>> data;
    string str;
    getline(cin ,str);
    for (auto begin = str.begin(); begin != str.end(); ++begin) {
        if (isdigit(*begin))
            readNumber(begin, data);
        if (*begin == '(')
            expression.push(*begin);
        if (*begin == '*' || *begin == '/') expression.push(*begin);
        if (*begin == '+' || *begin == '-') {
            while (!expression.empty() && expression.top() != '('
                    && expression.top() != '+'  && expression.top() != '-') {
                double p1, p2;
                p1 = data.top(); data.pop(); p2 = data.top(); data.pop();
                if (expression.top() == '*') data.push(p1*p2);
                if (expression.top() == '/') data.push(p2/p1);
                expression.pop();
            }
            expression.push(*begin);
        }
        if (*begin == ')') {
            while (expression.top() != '(') {
                double p1, p2;
                p1 = data.top(); data.pop(); p2 = data.top(); data.pop();
                if (expression.top() == '+') data.push(p1+p2);
                if (expression.top() == '-') data.push(p2-p1);
                if (expression.top() == '*') data.push(p1*p2);
                if (expression.top() == '/') data.push(p2/p1);
                expression.pop();
            }
            expression.pop();
        }
    }
    while (!expression.empty()) {
        double p1, p2;
        p1 = data.top(); data.pop(); p2 = data.top(); data.pop();
        if (expression.top() == '+') data.push(p1+p2);
        if (expression.top() == '-') data.push(p2-p1);
        if (expression.top() == '*') data.push(p1*p2);
        if (expression.top() == '/') data.push(p2/p1);
        expression.pop();
    }
    cout << data.top();
    return 0;
}

void readNumber(string::iterator &begin, stack<double, vector<double>> &data)
{
    double p = *begin - '0';
    while (isdigit(*(++begin)))
        p = p * 10 + *begin - '0';
    if (*begin != '.')
        data.push(p);
    else {
        double fraction = 1;
        while (isdigit(*(++begin)))
            p = p + (*begin - '0') * (fraction /= 10);
        data.push(p);
    }
    --begin;
}