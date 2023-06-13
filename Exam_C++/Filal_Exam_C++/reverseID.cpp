#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
};

int main()
{
    int n, temp;
    cin >> n;

    Student s[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i].name >> s[i].cls >> s[i].section >> s[i].id;
    }

    int j = n-1;
    for(int i=0; i < n/2; i++)
    {
        temp = s[i].id;
        s[i].id = s[j].id;
        s[j].id = temp;
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << s[i].name << " " << s[i].cls << " " << s[i].section << " " << s[i].id << endl;
    }
    return 0;
}
