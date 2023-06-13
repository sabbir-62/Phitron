#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    int math_marks;
    int eng_marks;
};

int main()
{
    int n;
    cin >> n;

    Student s[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i].name >> s[i].cls >> s[i].section >> s[i].math_marks >> s[i].eng_marks;
    }

    for (int i = n - 1; i >= 0; i--) {
        cout << s[i].name << " " << s[i].cls << " " << s[i].section << " " << s[i].math_marks << " " << s[i].eng_marks << endl;
    }
    return 0;
}
