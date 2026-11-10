#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m;

    cin >> n >> m;

    vector<vector<long long>> rangen(n, vector<long long>(2));

    for(int i = 0; i < n; ++i){
        cin >> rangen[i][0] >> rangen[i][1];
    }

    vector<vector<long long>> rangem(m, vector<long long>(3));

    for(int i = 0; i < m; ++i){
        cin >> rangem[i][0] >> rangem[i][1] >> rangem[i][2];
    }

    long long maxm = 0, maxc = 0, ni, mi;

    for(int i = 0; i < m; ++i){

        for(int j = 0; j < n; ++j){

            long long diff, currm;

            if((rangen[j][1] <= rangem[i][1] && rangen[j][1] > rangem[i][0]) 
            && (rangen[j][0] >= rangem[i][0] && rangen[j][0] < rangem[i][1])){

                diff = rangen[j][1] - rangen[j][0];

                currm = diff * rangem[i][2];

                if(currm > maxm){
                    maxc = rangem[i][2];

                    ni = j + 1;
                    mi = i + 1;

                }

                maxm = max(currm, maxm);

            }else if((rangen[j][1] <= rangem[i][1] && rangen[j][1] > rangem[i][0]) 
                && !(rangen[j][0] >= rangem[i][0])){

                diff = rangen[j][1] - rangem[i][0];

                currm = diff * rangem[i][2];

                if(currm > maxm){
                    maxc = rangem[i][2];

                    ni = j + 1;
                    mi = i + 1;

                }

                maxm = max(currm, maxm);

            }else if((rangen[j][0] >= rangem[i][0] && rangen[j][0] < rangem[i][1]) 
                && !(rangen[j][1] <= rangem[i][1])){

                diff = rangem[i][1] - rangen[j][0];

                currm = diff * rangem[i][2];

                if(currm > maxm){
                    maxc = rangem[i][2];

                    ni = j + 1;
                    mi = i + 1;

                }

                maxm = max(currm, maxm);

            }else if(rangen[j][0] <= rangem[i][0] && rangen[j][1] >= rangem[i][1]){

                diff = rangem[i][1] - rangem[i][0];

                currm = diff * rangem[i][2];

                if(currm > maxm){

                    maxc = rangem[i][2];

                    ni = j + 1;
                    mi = i + 1;

                }

                maxm = max(currm, maxm);

            }else{

                continue;

            }

        }

    }

    cout << maxm << "\n";

    if(maxm > 0){
        cout << ni << " " << mi;
    }

    return 0;
}