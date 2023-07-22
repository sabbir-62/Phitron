#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q, c;
    string name, fPerson;
    cin >> q;

    queue<string> person;

    while(q--)
    {
        cin >> c;
        if(c == 0)
        {
            cin >> name;
            person.push(name);
        }
        else if(c == 1)
        {
            if(!person.empty())
            {
                fPerson = person.front();
                person.pop();
                cout << fPerson << endl;
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}
