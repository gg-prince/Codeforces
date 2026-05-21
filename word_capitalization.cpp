#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){

string word;
getline(cin, word);

for (int i=0; i<word.length(); i++){
  if(i == 0){
    char c = word[i];
    char upper = c & '_';
    cout << upper;
  }else{
    cout << word[i];
  }
}

return 0;
}
