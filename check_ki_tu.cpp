#include <bits/stdc++.h>
using namespace std;

stack<char> st;
bool check(string s)
{
    /*
    std::string s = "hello";
    for(char c : s) {
        std::cout << c << " ";
    }
    */
    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            st.push(c);
        }
        else if (!st.empty() && ((c == ')') && st.top() == '(') || ((c == '}') && st.top() == '{') || ((c == ']') && st.top() == '['))
        {
            st.pop();
        }
        else
            return false;
    }
    return st.empty();
}
int main()
{

    string s;
    getline(cin, s);
    s = s.substr(0, s.size() - 1); // loại bỏ dấu ngoặc vuông cuối cùng

    if (check(s) == false)
        printf("1");
    else
        printf("0");
    st.

        return 0;
}