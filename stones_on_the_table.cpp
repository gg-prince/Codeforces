#include <iostream>
#include <string>

using namespace std;

int main(){

    int n;
    cin >> n;
    cin.ignore();

    int rm = 0;

    char stone[n];
    for(int i=0; i<n; i++){
    cin >> stone[i];
    }

    for(int i=0; i<n; i++){
        char ln = (i==0) ? 'X' : stone[i-1];

        if(stone[i] == ln){
            rm++;
        }
    }

    cout << rm;

return 0;
}