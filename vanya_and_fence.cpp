#include <iostream>
using namespace std;

int main(){

int n,h;
cin >> n >> h;
cin.ignore();

int height[n];

for(int i= 0; i<n; i++){
  cin >> height[i];
}

int maxWidth = n;

for(int i=0; i<n; i++){
  if(height[i] > h){
    maxWidth++;
  }
}

cout << maxWidth;

return 0;
}
