#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student a, Student b)
{
    int sum1 = a.math_marks+a.eng_marks;
    int sum2 = b.math_marks+b.eng_marks;
    if(sum1 > sum2) return true;
    else if(sum1 == sum2){
        if(a.id > b.id){
            return false;
        }
        else return true;
    }
    else return false;
}

int main()
{
    int n, temp;
    cin >> n;

    Student s[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i].name >> s[i].cls >> s[i].section >> s[i].id >> s[i].math_marks >> s[i].eng_marks;
    }

    sort(s, s+n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << s[i].name << " " << s[i].cls << " " << s[i].section << " " << s[i].id << " " << s[i].math_marks << " " << s[i].eng_marks << endl;
    }
    return 0;
}
