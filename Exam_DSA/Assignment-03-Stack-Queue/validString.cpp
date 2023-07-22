#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string s, result;
    cin >> t;

    while(t--)
    {
        cin >> s;

        stack<char> st;

        for(char c : s)
        {
            if(!st.empty() && st.top() != c)
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }
        if(st.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }

    return 0;
}

