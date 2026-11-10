#include<iostream>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        int configs = 0;

        // cout << (n % 2);

        if((n % 2) == 0){

            if(n == 2){
                configs = 1;
            }else{
                configs ++;
                while(n / 4 > 0){
                    configs++;
                    n -= 4;
                }
            }

            cout << configs << "\n";

        }else{
            cout << configs << "\n";
        }

    }

    return 0;
}