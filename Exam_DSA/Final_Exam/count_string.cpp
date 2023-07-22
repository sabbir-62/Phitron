#include<bits/stdc++.h>
using namespace std;

bool compare(const pair<string, int>& a, const pair<string, int>& b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main() {
    string inputString;
    cout << "Enter the string: ";
    getline(cin, inputString);

    stringstream ss(inputString);
    map<string, int> wordCount;
    string word;

    while (ss >> word) {
        wordCount[word]++;
    }

    vector<pair<string, int>> sortedWords(wordCount.begin(), wordCount.end());
    sort(sortedWords.begin(), sortedWords.end(), compare);

    cout << "Word Count:" << endl;
    for (const auto& pair : sortedWords) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
