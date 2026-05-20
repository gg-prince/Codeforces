#include <iostream>
using namespace std;

int main(){

int n;
cin >> n;

int lines[n][3];

for (int i=0; i<n; i++){
  for (int j=0; j<3; j++){
  cin >> lines[i][j];
  }
}

int canSolve=0;
int questions=0;

for (int i=0; i<n; i++){
  for (int j=0; j<3; j++){

    if (lines[i][j] == 1){
     canSolve = canSolve + 1;
    }else{
     canSolve = canSolve + 0;
    }

  }

  if(canSolve>1){
  questions = questions + 1;
  }else{
  questions = questions + 0;
  }
  
  canSolve = 0;


}

cout << questions;

return 0;
}
