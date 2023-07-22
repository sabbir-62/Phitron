#include<bits/stdc++.h>
using namespace std;

struct Student
{
    string name;
    int roll;
    int marks;

    bool operator<(const Student& next_student) const
    {
        if (marks != next_student.marks)
        {
            return marks < next_student.marks;
        }
        return roll > next_student.roll;
    }
};

int main()
{
    int n;
    cin >> n;

    priority_queue<Student> pq;

    for(int i = 0; i < n; ++i)
    {
        Student student;
        cin >> student.name >> student.roll >> student.marks;
        pq.push(student);
    }

    int q;
    cin >> q;

    while(q--)
    {
        int c;
        cin >> c;

        if(c == 0)
        {
            Student student;
            cin >> student.name >> student.roll >> student.marks;
            pq.push(student);

            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
        else if(c == 1)
        {
            if(!pq.empty())
            {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if(c == 2)
        {
            if(!pq.empty())
            {
                pq.pop();

                if (!pq.empty())
                {
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}
