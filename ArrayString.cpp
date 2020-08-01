#include <string>
#include <iostream>
#include <unordered_map>

using namespace std;

//determine if the string has unique characters
bool isUnique(string s){

    unordered_map<char, int> map;
    for (char& c : s){

      if (map.find(c) == map.end()) {
        pair<char,int> letter (c,0);
        map.insert(letter);
      }
      else{
        return false;
      }
    }
    return true;
}
/* ------------------------------------------------------------------------------------ */
void sortString(string &str) {
   sort(str.begin(), str.end());
}

bool checkPermutation(string s1, string s2){
  //Basecase
  if (s1.length() == 0 || s2.length() == 0){
    return false;
  }
  sortString(s1);
  sortString(s2);

  //find which string is shorter bc only the smaller word can be the permutation
  string shorter = s1, longer = s2;
  if (s1.length() > s2.length()) {
    shorter = s2;
    longer = s1;
  }

  //create a hashtable to keep track of duplicates
  unordered_map<char, int> map;
  for (char& c : longer) {
    if (map.find(c) == map.end()) {
      pair<char,int> letter (c,1);
      map.insert(letter);
    } else {
      map.at(c) += 1;
    }
  }

  //for every letter in the shorter one
  for (char& c : shorter){
    //we find a matching letter
    if (map.find(c) != map.end() && map.at(c) > 0) {
      map.at(c) -= 1;
    } else return false;
  }
  return true;
}

/* ------------------------------------------------------------------------------------ */
vector<string> tokenize(string str){
  string word = "":
  for (char c : str){
    if (c == ' ')
  }
}
void URLify(string str){
    string answer;
    vector<string> tokens;

    char *tok = strtok(str, " ");
    while (tok != NULL){
      tokens.push_back(tok);
      tokens.push_back("%20");
      tok = strtok(NULL, " ");
    }

    for (string& word : tokens){
      answer += word;
    }
    cout << answer << endl;
}

/* ------------------------------------------------------------------------------------ */

int main(){
  cout << "Printing solutions of questions" << endl;
  //cout << isUnique("abcdef") << endl;
  //cout << checkPermutation("aabbccddeeff", "abcgef") << endl;
  cout << URLify("wow i love coding");
  return 0;
}
