#include <string>
#include <iostream>
#include <unordered_map>

using namespace std;

//determine if the string has unique characters
bool isUnique(string s){

    unordered_map<char, int> map;
    for (char& c : s){

      if (map.find(c) != map.end()) {
        pair<char,int> letter (c,0);
        map.insert(letter);
      }
      else {
        return false;
      }
    }
    return true;

}

int main(){
  cout << "Printing solutions of questions" << endl;

  cout << isUnique("rawfdk") << endl;
  return 0;
}
