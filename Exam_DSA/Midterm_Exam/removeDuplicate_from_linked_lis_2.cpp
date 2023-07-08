#include<bits/stdc++.h>
using namespace std;

void removeDuplicateValues(list<int> &myList) {
  unordered_set<int> list2;
  list<int>::iterator it = myList.begin();
  while(it != myList.end()) {
    if(list2.count(*it) == 0) {
      list2.insert(*it);
      ++it;
    }
    else{
      it = myList.erase(it);
    }
  }

  myList.sort();
}

int main() {
  list<int> myList;
  int val;
  cin >> val;
  while(val != -1) {
    myList.push_back(val);
    cin >> val;
  }
  removeDuplicateValues(myList);
  for(int val : myList) {
    cout << val << " ";
  }
  cout << endl;
  return 0;
}
