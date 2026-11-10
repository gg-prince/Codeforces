#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;
        bool turned = false;

        if(n % 2 != 0){
            n += 1;
            turned = true;
        }

        vector<int> cols(n, 0);

        for(int i = 0; i < 2; ++i){

            string s;
            cin >> s;

            if(turned){
                s += 'o';
            }

            for(int j = 0; j < n; ++j){
                
                if(s[j] == 'f'){
                    cols[j]++;
                }

                if

            }

        }

        int i = 0, k = 0;

        while(i < cols.size()){

            if((cols[i] + cols[i+1]) % 2 != 0){
                k++;
            }

            i += 2;
        }

        cout << k << "\n";

    }

    return 0;
}