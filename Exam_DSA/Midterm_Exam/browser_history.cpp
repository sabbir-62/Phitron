#include<bits/stdc++.h>
using namespace std;

int main()
{
    string txt, str, query;
    int q;
    list<string> addresses;

    while(true)
    {
        cin >> str;
        if(str == "end")
        {
            break;
        }
        else
        {
            addresses.push_back(str);
        }
    }

    cin >> q;

    auto curr = addresses.begin();
    for(int i = 0; i < q; i++)
    {
        cin >> txt;

        if(txt == "visit")
        {
            cin >> query;

            auto it = find(addresses.begin(), addresses.end(), query);
            if(it != addresses.end())
            {
                curr = it;
                cout << *curr << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }

        else if(txt == "next")
        {
            ++curr;

            if(curr == addresses.end())
            {
                cout << "Not Available" << endl;
                --curr;
            }
            else
            {
                cout << *curr << endl;
            }
        }
        else if(txt == "prev")
        {
            if(curr == addresses.begin())
            {
                cout << "Not Available" << endl;
            }
            else
            {
                --curr;
                cout << *curr << endl;
            }
        }
    }

    return 0;
}
