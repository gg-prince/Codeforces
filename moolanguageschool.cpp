#include<iostream>
#include<string>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){

        int n,k;
        cin >> n >> k;

        string s;
        cin >> s;

        int i = 0, fnj = 0;
        while(i < n){

            int j = i, found = 0;

            while(j < i + k){
                if(s[j] == '0'){
                    found = 1;
                    break;
                }
                j++;

            }

            if(!found){
                fnj++;
            }

            i += k;
        }

        cout << fnj << "\n";

    }

    return 0;
}