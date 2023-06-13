
/*
#include<bits/stdc++.h>
using namespace std;

string findRatul(string s) {
    stringstream ss(s);
    string word;
    while (ss >> word) {
        if (word == "Ratul")
            return "YES";
    }
    return "NO";
}

int main() {
    string s;
    getline(cin, s);

    string result = findRatul(s);
    cout << result << endl;

    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
void fun(int *&p){
    p = NULL;
}
int main() {
    int val = 10;
    int *ptr = &val;
    fun(ptr);
    cout << *ptr << endl;
    return 0;
}

