#include <iostream>
#include <string>
using namespace std;

int main(){

string s;
cin >> s;
cin.ignore();

if(s.length() > 2){

 for(int j=0; j<s.length(); j++){

  for(int i=0; i<=s.length()-2; i++){

   if(s[i] != '+'){
     int num1 = stoi(s.substr(i, 1));
     int num2 = stoi(s.substr(i+2, 1));

     if(num1 > num2){
       swap(s[i], s[i+2]);
     }
   }
  }

 }

}

cout << s;

return 0;
}
