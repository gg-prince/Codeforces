#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector<long long> sections(n + 1, (0));

        long long maxrun = 1, currrun = 1;

        for(int i = 1; i <= n; ++i){

            cin >> sections[i];

            if(sections[i] == sections[i-1]){
                currrun++;
            }else{

                long long npos = sections[i] - currrun;
                if(npos == (sections[i - 1] + 1)){
                    currrun++;
                }else{
                    currrun = 1;
                }

            }

            maxrun = max(currrun, maxrun);


        }

        cout << maxrun << "\n";

    }

    return 0;
}