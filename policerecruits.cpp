#include<iostream>

using namespace std;

int main(){

    int n, rcrts = 0, cases = 0;
    cin >> n;

    for(int i = 0; i < n; ++i){

        int k;
        cin >> k;

        if(k > -1){
            rcrts += k;
        }else if(k == -1 && rcrts == 0){
            cases++;
        }else if(k == -1 && rcrts > 0){
            rcrts--;
        }

    }

    cout << cases << "\n";

    return 0;
}