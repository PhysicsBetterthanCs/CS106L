#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ifstream input("words.txt");
  vector<pair<string, int>> getwords(0);
  string word;
  auto it = getwords.begin();
  while (input >> word) {
    for (it = getwords.begin(); it != getwords.end(); ++it) {
      if ((*it).first == word) {
        (*it).second++;
        break;
      }
    }
    if (it == getwords.end()) getwords.push_back(make_pair(word, 1));
  }
  for (it = getwords.begin(); it != getwords.end(); ++it) {
    cout << (*it).first << ' ' << ":" << (*it).second << endl;
  }
}