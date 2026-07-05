#include <iostream>
#include <vector>
using namespace std;

int n, m, k;
int tpath = 0;
int validv;

vector<vector<char>> grid;
vector<vector<bool>> visited;

int dn[4] = {-1, 0, 1, 0};
int dm[4] = {0, 1, 0, -1};

void dfs(int xn, int ym){

  visited[xn][ym] = true;
  validv--;

  int turn = 0;

  for(int i=0; i<4; i++){

    int nn = xn + dn[i];
    int nm = ym + dm[i];

    if(nn>=0 && nn<n && nm>=0 && nm<m && grid[nn][nm] == '.' && !visited[nn][nm] && validv > 0){
      dfs(nn,nm);
    }
  }
}

int main(){

  cin >> n >> m >> k;
  cin.ignore();


  grid.resize(n, vector<char>(m));
  visited.resize(n, vector<bool>(m, false));
  
  int npath, mpath;

  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cin >> grid[i][j];
      if(grid[i][j] == '.'){
        tpath++;
        npath = i;
        mpath = j;
      }
    }
  }

  validv = tpath-k;

  dfs(npath,mpath);
  
  int currk = 0;

  for(int x=0; x<n; x++){
    for(int y=0; y<m; y++){
       if(grid[x][y] == '.' && !visited[x][y]){
          grid[x][y] = 'X';
          currk = currk + 1;
        }
    }
  }

  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cout << grid[i][j];
    }
    cout << endl;
  }

return 0;
}