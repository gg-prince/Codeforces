#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n, k, diff;
        cin >> n >> k;

        diff = n - (k - 1);

        long long result = 2 * (k - 1) + pow(2, diff);

        cout << result << "\n";

    }

    return 0;
}