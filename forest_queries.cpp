#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, q;

    cin >> n >> q;

    vector<vector<int>> frpx(n+1, vector<int>(n+1, 0));

    char tree;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> tree;

            if(tree == '*'){
                frpx[i][j] = 1 + frpx[i-1][j] + frpx[i][j-1] - frpx[i-1][j-1];
            }else{
                frpx[i][j] = frpx[i-1][j] + frpx[i][j-1] - frpx[i-1][j-1];
            }
        }
    }

    vector<vector<int>> query(q, vector<int>(4, 0));

    for(int i = 0; i < q; i++){
        for(int j = 0; j < 4; j++){
            cin >> query[i][j];
        }
    }

    for(int i = 0; i < q; i++){

        int y1 = query[i][0];
        int x1 = query[i][1];
        int y2 = query[i][2];
        int x2 = query[i][3];

        int topleft = frpx[y1-1][x1-1];
        int target = frpx[y2][x2];
        int leftminus = frpx[y2][x1-1];
        int topminus = frpx[y1-1][x2];

        cout << target - leftminus - topminus + topleft << "\n";
    }

    return 0;
}