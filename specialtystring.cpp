#include<bits/stdc++.h>

using namespace std;

int fni(string& s){

    bool fnd = 0;

    for(int i = 0; i < s.size(); ++i){

        if(s[i] == s[i+1]){
            s.erase(i, 2);
            fnd = 1;
            break;
        }

    }

    if(fnd){
        fni(s);
    }

    return s.size();
   
}

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        string s;
        cin >> s;

        if(s.size() % 2 == 0){

            if(fni(s) == 0){
                cout << "YES\n";
            }else{
                cout << "NO\n";
            }

        }else{

            cout << "NO\n";

        }



    }

    return 0;
}