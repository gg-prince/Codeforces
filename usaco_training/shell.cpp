#include<bits/stdc++.h>
using namespace std;

int main(){

    ifstream fin("shell.in");
    ofstream fout("shell.out");

    int n;
    fin >> n;

    vector<vector<int>> bowls(n + 1, vector<int>(3, 0));

    vector<vector<int>> swaps(1, vector<int>(3, 0));

    bowls[0][0] = 1;
    bowls[0][1] = 2;
    bowls[0][2] = 3;

    for(int i = 1; i <= n; ++i){

        int a, b, g;

        fin >> a >> b >> g;

        int swap = bowls[i-1][b-1];

        bowls[i][b-1] = bowls[i-1][a-1];
        bowls[i][a-1] = swap;

        for(int j = 0; j < 3; ++j){

            if(bowls[i][j] == 0){
                bowls[i][j] = bowls[i-1][j];
            }


            if(g - 1 == j){

                int guess = bowls[i][g-1];

                swaps[0][guess - 1] += 1;
            }else{
                continue;
            }
        }


    }

    fout << max({swaps[0][0], swaps[0][1], swaps[0][2]}) << "\n";

    return 0;
}