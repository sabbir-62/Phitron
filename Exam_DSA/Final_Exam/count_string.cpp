#include <iostream>
#include <sstream>
#include <unordered_map>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    cin.ignore(); // Ignore the remaining newline character after reading test_cases

    for (int t = 0; t < test_cases; ++t) {
        string s;
        getline(cin, s);

        // Convert the string to lowercase for case-insensitive comparison
        for (char& c : s) {
            c = tolower(c);
        }

        const char delimiter = ' ';
        stringstream ss(s);
        unordered_map<string, int> word_count;

        while (getline(ss, s, delimiter)) {
            word_count[s]++;
        }

        int max_count = 0;
        string max_word;

        for (const auto& entry : word_count) {
            if (entry.second > max_count) {
                max_count = entry.second;
                max_word = entry.first;
            }
        }

        cout << max_word << " " << max_count << endl;
    }

    return 0;
}
