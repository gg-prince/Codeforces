#include <iostream>
using namespace std;

int main(){

long n, m, a;
cin >> n >> m >> a;
cin.ignore();

unsigned long long stone;
unsigned long topstone = 1;
unsigned long leftstone = 1;

  while(a<m){
    topstone = topstone + 1;
    m = m-a;
  };

  while(a<n){
    leftstone = leftstone + 1;
    n = n-a;
  };

  stone = topstone * leftstone;

cout << stone;

return 0;
}
