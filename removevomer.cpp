#include<iostream>
#include<string>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        string s;
        cin >> s;

        int count = 0;

        for(int i = 1; i < n; ++i){
            if(s[i] != s[i-1]){
                count++;
            }
        }

        if(count != 1){
            cout << 1 << "\n";
        }else{
            cout << 2 << "\n";
        }

    }

    return 0;
}