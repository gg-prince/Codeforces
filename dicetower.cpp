#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n, t, b, f = 0;

    cin >> n;
    cin >> t;

    b = 7 - t;

    vector<vector<int>> ss(n, vector<int>(2));

    for(int i = 0; i < n; ++i){
        cin >> ss[i][0] >> ss[i][1];
    }

    for(int i = 0; i < n; ++i){

        if(ss[i][0] == t || ss[i][1] == t){
            f = 1;
            break;
        }else if(ss[i][0] == b || ss[i][1] == b){
            f = 1;
            break;
        }

    }

    if(!f){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }

    return 0;
}