#include<iostream>
#include<vector>
#include<string>

using namespace std;

int ships(int &ship, int &track, vector<vector<char>> grid, vector<vector<int>> &visited, int n, int i, int j){

    visited[i][j] = 1;

    int arr[4][2] = {{-1,0},{0,1},{1,0},{0,-1}};

    

    for(int m = 0; m < 4; ++m){

        int posi = i + arr[m][0];
        int posj = j + arr[m][1];

        if((grid[posi][posj] == 'x' && !visited[posi][posj])){

            ++track;
            ships(ship, track, grid, visited, n, posi, posj);
            --track;

            if(track == 0){
                ship++;
            }

        }else if((grid[posi][posj] == '@' && !visited[posi][posj])){

            ++track;
            ships(ship, track, grid, visited, n, posi, posj);
            --track;

            if(track == 0){
                ship++;
            }

        }
    }

    if(!(i == n && j == n)){

            if(i <= n && j == n){
                ++i;
                j = 1;
                ships(ship, track, grid, visited, n, i, j);
            }else if(i <= n && j < n){
                ++j;
                ships(ship, track, grid, visited, n, i, j);
            }

    }
    
    return ship;        

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, v;
    cin >> t;
    v = t;

    while(t--){

        int n;
        cin >> n;

        vector<vector<char>> grid(n+2, vector<char>(n + 2, '.'));
        vector<vector<int>> visited(n+2, vector<int>(n + 2, 0));

        for(int i = 1; i <= n; ++i){

            string s;
            cin >> s;

            for(int j = 1; j <= n; ++j){
                grid[i][j] = s[j];
            }

        }
        int ship = 0;
        int track = 0, i = 1, j = 1;

        cout << "Case " << v - t << ": " << ships(ship, track, grid, visited, n, i, j) << "\n";

    }

    return 0;
}