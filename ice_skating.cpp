#include <iostream>
using namespace std;

int main(){

int n;
cin >> n;
cin.ignore();

int cdts[n][2];

for(int i=0; i<n; i++){
  for(int j=0; j<2; j++){
    cin >> cdts[i][j];
  }
}



return 0;
}
