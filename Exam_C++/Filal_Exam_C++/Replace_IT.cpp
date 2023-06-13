#include<bits/stdc++.h>
using namespace std;

string replaceString(string str, string x) {
    int pos = 0;
    while ((pos = str.find(x, pos)) != string::npos) {
        str.replace(pos, x.length(), "$");
        pos += 1;
    }
    return str;
}

int main() {
    int n;
    string str, x, result;
    cin >> n;
    cin.ignore();

    while (n--) {
        getline(cin, str, ' ');
        getline(cin, x);

        result = replaceString(str, x);
        cout << result << endl;
    }

    return 0;
}
