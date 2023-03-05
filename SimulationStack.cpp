#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    stack<int> st;
    int x;
    string dk;

    for (;;)
    {
        cin >> dk;
        if (dk.compare("PUSH") == 0)
        {
            cin >> x;
            st.push(x);
        }
        else if (dk.compare("POP") == 0)
        {
            if (st.empty())
            {
                printf("NULL\n");
            }
            else
            {
                cout << st.top() << endl;
                st.pop();
            }
        }
        else
            break;
    }

    return 0;
}