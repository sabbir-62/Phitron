#include <iostream>
#include <string>
#include <queue>
using namespace std;

struct Student
{
    string name;
    int roll;
    int marks;

    // Custom comparison operator for the max heap
    bool operator<(const Student& other) const
    {
        if (marks != other.marks)
        {
            return marks < other.marks;
        }
        else
        {
            return roll > other.roll;
        }
    }
};

int main()
{
    int N;
    cin >> N;

    priority_queue<Student> maxHeap;

    for (int i = 0; i < N; ++i)
    {
        Student student;
        cin >> student.name >> student.roll >> student.marks;
        maxHeap.push(student);
    }

    int Q;
    cin >> Q;

    while (Q--)
    {
        int command;
        cin >> command;

        if (command == 0)
        {
            Student student;
            cin >> student.name >> student.roll >> student.marks;
            maxHeap.push(student);
            cout << maxHeap.top().name << " " << maxHeap.top().roll << " " << maxHeap.top().marks << endl;
        }
        else if (command == 1)
        {
            if (maxHeap.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << maxHeap.top().name << " " << maxHeap.top().roll << " " << maxHeap.top().marks << endl;
            }
        }
        else if (command == 2)
        {
            if (maxHeap.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                maxHeap.pop();
                if (maxHeap.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    cout << maxHeap.top().name << " " << maxHeap.top().roll << " " << maxHeap.top().marks << endl;
                }
            }
        }
    }

    return 0;
}
