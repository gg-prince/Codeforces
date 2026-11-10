#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n, m, pn = 0, qm = 0;
        cin >> n >> m;

        string p, q;

        cin >> p;
        cin >> q;

        q += "six";

        sort(p.begin(), p.end());
        sort(q.begin(), q.end());

        if(p == q){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
        

    }

    return 0;
}