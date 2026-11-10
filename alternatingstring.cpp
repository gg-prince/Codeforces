#include<iostream>
#include<string>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){

        string s;
        cin >> s;

        int count = 0;

        for(int i = 0; i < (int)s.size() - 1; ++i){

            count += (s[i] == s[i+1]);

            if(count > 2){
                break;
            }

        }

        if(count <= 2){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }

    }

    return 0;
}