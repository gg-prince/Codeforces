#include <iostream>
#include <string>
using namespace std;

int main(){

int n;
cin >> n;
cin.ignore();

string statement[n];

for(int i=0; i<n; i++){
cin >> statement[i];
}

int value = 0;

for(int i=0; i<n; i++){

  if(statement[i] == "X++" || statement[i] == "++X"){
      value = value + 1;
    }else{
      value = value - 1;
    }
  }

cout << value;

return 0;
}
