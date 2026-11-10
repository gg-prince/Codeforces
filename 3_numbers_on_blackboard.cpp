#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;

    cin >> n;

    vector<vector<int>> cases(n, vector<int>(3));
    vector<int> ranges(n);

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < 3; ++j){
            cin >> cases[i][j];
            if(j == 2){
                int range1 = max({cases[i][0], cases[i][1], cases[i][2]}) - min({cases[i][0], cases[i][1], cases[i][2]});

                int range2 = max({(cases[i][1] + cases[i][2]), cases[i][1], cases[i][2]}) - min({(cases[i][1] + cases[i][2]), cases[i][1], cases[i][2]});

                int range3 = max({cases[i][0], (cases[i][0] + cases[i][2]), cases[i][2]}) - min({cases[i][0], (cases[i][0] + cases[i][2]), cases[i][2]});

                int range4 = max({cases[i][0], cases[i][1], (cases[i][0] + cases[i][1])}) - min({cases[i][0], cases[i][1], (cases[i][0] + cases[i][1])});

                ranges[i] = min({range1, range2, range3, range4});
            }
        }
    }

    for(int i = 0; i < n; ++i){
        cout << ranges[i] << "\n";
    }

    return 0;
}