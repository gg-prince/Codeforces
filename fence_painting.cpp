#include <bits/stdc++.h>
using namespace std;

int main(){

    int a, b, c, d;

    cin >> a >> b >> c >> d;

    bool paint[101] = {};

    for(int i = a; i < b; i++){
        paint[i] = 1;
    }

    for(int i = c; i < d; i++){
        paint[i] = 1;
    }

    int paintlen = 0;

    for(int i = 0; i < 101; i++){
        if(paint[i] == 1){
            paintlen++;
        }
    }

    cout << paintlen;
    return 0;
}