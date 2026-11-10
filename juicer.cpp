#include<iostream>
#include<cmath>

using namespace std;

int main(){

    int n, b, d, x = 0, fnx = 0;

    cin >> n >> b >> d;

    for(int i = 0; i < n; ++i){

        int o;
        cin >> o;

        if(o <= b){
            x += o;
        }

        if(x > d){
            fnx++;
            x = 0;
        }

    }

    cout << fnx << "\n";

    return 0;
}