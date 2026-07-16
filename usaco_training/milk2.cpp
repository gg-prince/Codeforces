/*
ID: princeg2
TASK: milk2
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    ifstream fin("milk2.in");
    ofstream fout("milk2.out");

    int n;
    fin >> n;

    vector<int> start(n+1);
    vector<int> end(n+1);

    int maxmilking = 0;
    int maxidle = 0;
    int currentmilking = 0;
    int currentidle = 0;

    for(int i = 1; i <= n; ++i){
        fin >> start[i] >> end[i];
    }

    int swap, swapend;

    for(int i = 0; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            if(start[j] < start[j-1]){
                swap = start[j];
                start[j] = start[j-1];
                start[j-1] = swap;

                swapend = end[j];
                end[j] = end[j-1];
                end[j-1] = swapend;
            }
        }
    }

    int startit = 0;

    int streak = 0;

    int maxend = 0;

    for(int i = 1; i <=n; ++i){
        currentmilking = end[i] - start[i];

        if(start[i] <= maxend && i > 1){
            streak++;
            if(streak == 1){
                startit = i-1;
                maxend = max(end[i-1], end[i]);
            }else{
                maxend = max(end[i], maxend);
            }
        }else{
            streak = 0;

            if(i > 1){
                currentidle = start[i] - maxend;
                maxidle = max(maxidle, currentidle);
                // fout << max(maxidle, currentidle) << "\n";
            }

            startit = i;
            maxend = end[i];
            // fout << "\n";
        }


        currentmilking = maxend - start[startit];

        maxmilking = max(maxmilking, currentmilking);

        // fout << start[i] << " " << end[i] << " " << " " << maxidle << "\n";
 
    }

    fout << maxmilking << " " << maxidle << "\n";

    return 0;
}