#include <iostream>
#include <cmath>
using namespace std;

int main(){

int matrix[5][5];
int ti, tj;
ti = 0;
tj = 0;
int turn;

for(int i=0; i<5; i++){
  for(int j=0; j<5; j++){
    cin >>  matrix[i][j];
    if(matrix[i][j] == 1){
      ti=i;
      tj=j;
    }
  }
}

  turn = abs(ti-2) + abs(tj-2);


cout << turn << ti << tj;

return 0;
}
