#include<bits/stdc++.h>
using namespace std;

void fun(int *p)
{
    cout<<"fun "<<&p<<endl;
}

int main()
{
    int val = 10;
    int *ptr = &val;
    fun(ptr);
    cout<<"main "<<&ptr<<" "<<*ptr<<endl;
        return 0;
}
