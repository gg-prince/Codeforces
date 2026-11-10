#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int x, y, z;
        cin >> x >> y >> z;

        if(max(max(x, y), z) == x){

            for(int i = 0; i < (x+y+z); ++i){
                cout << "P";
            }

        }else if(max(max(x, y), z) == y){

            for(int i = 0; i < (x+y+z); ++i){
                cout << "R";
            }

        }else{

            for(int i = 0; i < (x+y+z); ++i){
                cout << "S";
            }

        }
        cout << "\n";

    }

    return 0;
}