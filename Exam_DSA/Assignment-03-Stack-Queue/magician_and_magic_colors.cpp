#include<bits/stdc++.h>
using namespace std;

string mixColors(const string& colors) {
    string result;

    for(char color : colors) {
        if(!result.empty() && result.back() == color) {
            result.pop_back();
        }
        else if(!result.empty()) {
            if ((result.back() == 'R' && color == 'G') || (result.back() == 'G' && color == 'R')) {
                result.pop_back();
                result += 'Y';
            }
            else if((result.back() == 'R' && color == 'B') || (result.back() == 'B' && color == 'R')) {
                result.pop_back();
                result += 'P';
            }
            else if((result.back() == 'B' && color == 'G') || (result.back() == 'G' && color == 'B')) {
                result.pop_back();
                result += 'C';
            }
            else{
                result += color;
            }
        }
        else{
            result += color;
        }
    }

    return result;
}

int main() {
    int t;
    string colors, result;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        cin >> colors;

        result = mixColors(colors);
        cout << result << endl;
    }

    return 0;
}
