#include <fstream>
#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;
struct Information {
  string college_;
  string age_;
};
void PrintMap(map<string,Information> &member ,string& name);

int main() {
  fstream input("words.txt");
  map<string, Information> member;
  string a;
  while (getline(input,a)){
    string name;
    string college;  
    string age;   
    Information information;
    string::iterator name_end;
    string::iterator college_end;
    for (auto it = a.begin(); it != a.end(); ++it) {
      if (*it == ',') {
        name_end = it;
        break;
      }
      
    }
    for (auto it = name_end + 1; it != a.end(); ++it) {
      if (*it == ',') {
        college_end = it;
        break;
      }
    }
    for (auto it = a.begin(); it != name_end; ++it) {
      name.push_back(*it);
    }
    for (auto it = name_end + 1; it != college_end; ++it) {
      college.push_back(*it);
    }
    for (auto it = college_end + 1; it != a.end(); ++it) {
      age.push_back(*it);
    }
    information.age_ = age;
    information.college_ = college;
    member.insert(make_pair(name,information));
  }
  string name_find;
  cout << "press the name whose information you want to find\n" << endl;
  getline(cin,name_find);
  PrintMap(member,name_find);
  
}


void PrintMap(map<string, Information>& member, string& name) {
  map<string, Information>::iterator it;
  it = member.find(name);
  if (it != member.end()) {
    cout << "The collegae of " << name << "is " << (it->second).college_ << "\n"
         << endl;
    ;
    cout << "The age of " << name << "is " << (it->second).age_ << "\n"<< endl;
   }
}