#include <iostream>
using namespace std;

int main(){

int n;

cin >> n;
cin.ignore();

int people[n][2];

for(int i=0; i<n; i++){
  for(int j=0; j<2; j++){
    cin >> people[i][j];
  }
}

int max = 0;
int current;

for(int i=0; i<n-1; i++){

  for(int j=1; j<2; j++){

    if(i == 0){
      current = people[i][j];
    }else{
      current = (current - people[i][j-1]) + people[i][j];
    }

    if(current > max){
      max = current;
    }

  }

}

cout << max;

return 0;
}
