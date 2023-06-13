
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int div = n/2;
    div += 1;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i == div && j == div)
            {
                cout << "X";
            }
            else if(i==j)
            {
                cout << "\\";
            }

            else if(i+j == n+1)
            {
                cout << "/";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

/*

\   /
 \ /
  X
 / \
/   \

*/
