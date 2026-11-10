#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;

    cin >> t;

    for(int i = 0; i < t; ++i){

        int n;

        cin >> n;

        string password;

        cin >> password;

        int checker = 1;

        string correct = "YES";

        bool letter = false;

        set<char> chars;

        if(n > 1){

            for(int i = 0; i < n; ++i){

                chars.insert(password[i]);

                if(password[i] - '0' > 9){
                    letter = true;    
                }
                
                if(letter && password[i] - '0' <= 9){
                    correct = "NO";
                    break;
                }
                
                if(*prev(chars.end()) != password[i]){
                    correct = "NO";
                    break;
                }

            }

        }

        cout << correct << "\n";
        
    }

    return 0;
    
}