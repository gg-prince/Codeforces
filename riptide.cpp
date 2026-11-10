#include<bits/stdc++.h>
using namespace std;

 int main(){

    int n;

    cin >> n;

    vector<int> rounds(n, 0);

    for(int i = 0; i < n; ++i){

        int a, b, c;

        cin >> a >> b >> c;
        
        int biggest = max({a, b, c});
        int smallest = min({a, b, c});

        int middle;

        if(a == b || a == c || b == c){
            rounds[i] = 0;
        }else{
            if(a != biggest && a != smallest){
                middle = a;
            }else if(b != biggest && b != smallest){
                middle = b;
            }else{
                middle = c;
            }
            rounds[i] = min((biggest - middle), (middle - smallest));
        }

    }

    for(int i = 0; i < n; ++i){
        cout << rounds[i] << "\n";
    }

    return 0;
 }