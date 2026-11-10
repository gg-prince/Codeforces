#include<bits/stdc++.h>
using namespace std;

int main(){

    ifstream fin("tttt.in");
    ofstream fout("tttt.out");

    vector<vector<char>> grid(3, vector<char>(3, 'X'));

    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            fin >> grid[i][j];
        }
    }

    set<char> ind;
    set<string> teams;

    for(int i = 0; i < 3; ++i){

        if(grid[i][0] == grid[i][1] && grid[i][0] == grid [i][2] && grid[i][1] == grid[i][2]){

                if(!ind.count(grid[i][1])){
                    ind.insert(grid[i][1]);
                }

        }else if(grid[i][0] == grid[i][1] || grid[i][0] == grid [i][2] || grid[i][1] == grid[i][2]){
            
            string team1 = "";
            string team2 = "";

            if(grid[i][0] == grid[i][1]){
                team1 += grid[i][0] + grid [i][2];
                team2 += grid [i][2] + grid[i][0];
            }else{
                team1 += grid[i][1] + grid [i][0];
                team2 += grid [i][0] + grid[i][1];
            }

            if(!teams.count(team1) || !teams.count(team2)){
                teams.insert(team1);
                teams.insert(team2);
            }

        }

        if(grid[0][i] == grid[1][i] && grid[0][i] == grid [2][i] && grid[1][i] == grid[2][i]){

            if(!ind.count(grid[1][i])){
                    ind.insert(grid[1][i]);
                }

        }else if(grid[0][i] == grid[1][i] || grid[0][i] == grid [2][i] || grid[1][i] == grid[2][i]){

            string team1 = "";
            string team2 = "";

            if(grid[0][i] == grid[1][i]){
                team1 += grid[0][i] + grid [2][i];
                team2 += grid [2][i] + grid[0][i];
            }else{
                team1 += grid[1][i] + grid [0][i];
                team2 += grid [0][i] + grid[1][i];
            }

            if(!teams.count(team1) || !teams.count(team2)){
                teams.insert(team1);
                teams.insert(team2);
            }
        }

    }

    if(grid[0][0] == grid[1][1] && grid[0][0] == grid [2][2] && grid[1][1] == grid[2][2]){
        if(!ind.count(grid[1][1])){
                    ind.insert(grid[1][1]);
                }
    }else if(grid[0][0] == grid[1][1] || grid[0][0] == grid [2][2] || grid[1][1] == grid[2][2]){

        string team1 = "";
        string team2 = "";

        if(grid[0][0] == grid[1][1]){
            team1 += grid[0][0] + grid [2][2];
            team2 += grid [2][2] + grid[0][0];
        }else{
            team1 += grid[1][1] + grid [0][0];
            team2 += grid [0][0] + grid[1][1];
        }

        if(!teams.count(team1) || !teams.count(team2)){
            teams.insert(team1);
            teams.insert(team2);
        }
    }

    if(grid[0][2] == grid[1][1] && grid[0][2] == grid [2][0] && grid[1][1] == grid[2][0]){
        if(!ind.count(grid[0][2])){
            ind.insert(grid[0][2]);
        }
    }else if(grid[0][2] == grid[1][1] || grid[0][2] == grid [2][0] || grid[1][1] == grid[2][0]){

        string team1 = "";
        string team2 = "";

        if(grid[0][2] == grid[1][1]){
            team1 += grid[0][2] + grid [2][0];
            team2 += grid [2][0] + grid[0][2];
        }else{
            team1 = grid[1][1] + grid [0][2];
            team2 = grid [0][2] + grid[1][1];
        }

        if(!teams.count(team1) || !teams.count(team2)){
            teams.insert(team1);
            teams.insert(team2);
        }
    }

    for(auto item : teams){
        cout << item << "\n";
    }

    fout << ind.size() << "\n" << teams.size() << "\n";

    return 0;
}