#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
       
        int n;
        cin >> n;
        
        vector<int> stndrds(n);

        for(int i = 0; i < n; ++i){

            cin >> stndrds[i];

        }

        sort(stndrds.begin(), stndrds.end());

        int maxd = 0;

        for(int i = 1; i < n; i += 2){

            int currd = stndrds[i] - stndrds[i-1];

            maxd = max(currd, maxd);

        }

        cout << maxd << "\n";
        
    }

    return 0;
}