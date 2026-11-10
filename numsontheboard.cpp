#include<iostream>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int l, r, riz;
        cin >> l >> r;

        if((l < 0 && r < 0) || (l > 0 && r > 0)){
            cout << abs(abs(r) - abs(l)) << "\n";
        }else{

            if(abs(abs(r) - abs(l)) != 0){
                cout << abs(abs(r) - abs(l)) - 1 << "\n";
            }else{
                cout << abs(abs(r) - abs(l)) << "\n";
            }

        }

    }
    return 0;
}