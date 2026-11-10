#include<iostream>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){

        int n, odd = 0, four = 0, two = 0;
        cin >> n;

        for(int i = 0; i < n; ++i){

            int arrn;
            cin >> arrn;

            if(arrn % 2 != 0){
                odd++;
            }else if(arrn % 4 == 0){
                four++;
            }else{
                two++;
            }

        }

        cout << max(odd, max(four, two)) << "\n";

    }

    return 0;
}