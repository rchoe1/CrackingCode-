#include <string>
#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
  cout << "Printing solutions of questions" << endl;

  isunique("cata");
  return 0;
}

//determine if the string has unique characters
bool isUnique(string s){
    //unordered_map<string, int> stringkey;

    for (char& c : s){
      cout << c << endl;
    }
    return true;

}
