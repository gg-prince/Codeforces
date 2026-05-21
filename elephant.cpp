#include <iostream>
using namespace std;

int main(){

int x;
cin >> x;

int steps=0;

while(x>5){
steps++;
x = x-5;
}

steps++;

cout << steps;

return 0;
}
