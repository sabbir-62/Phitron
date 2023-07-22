#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while(t--)
    {
        string s;
        getline(cin, s);

        stringstream ss(s);
        unordered_map<string, int> count;
        string word;

        while(ss >> word)
        {
            count[word]++;
        }

        int maxCount = 0;
        string words;

        for(const auto& pair : count)
        {
            if(pair.second > maxCount)
            {
                maxCount = pair.second;
                words = pair.first;
            }
            else if(pair.second == maxCount && pair.first < words)
            {
                words = pair.first;
            }
        }

        cout << words << " " << maxCount << endl;
    }

    return 0;
}
