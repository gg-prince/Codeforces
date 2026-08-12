/*
ID: princeg2
TASK: transform
LANG: C++                 
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ifstream fin("transform.in");
    ofstream fout("transform.out");

    int n;

    fin >> n;

    vector<vector<char>> square(n, vector<char>(n));

    vector<vector<char>> trans_square(n, vector<char>(n));

    for(int i = 0; i<n; ++i){
        for(int j = 0; j<n; ++j){
            fin >> square[i][j];
        }
    }

    bool nochange, ninety, one80, two70, ref, comb90, comb180, comb270, invalid;

    nochange = ninety = one80 = two70 = ref = comb90 = comb180 = comb270 = invalid = true;

    for(int i = 0; i<n; ++i){
        for(int j = 0; j<n; ++j){
            fin >> trans_square[i][j];

            if(trans_square[i][j] != square[i][j]){
                nochange = false;
            }
        }
    }

    vector<vector<char>> ninenty_square(n, vector<char>(n));

    for(int i = 0; i<n; ++i){
        for(int j = 0; j<n; ++j){
            ninenty_square[i][j] = square[n-1-j][i];

            if(ninenty_square[i][j] != trans_square[i][j]){
                ninety = false;
                nochange = false;
            }
        }
    }

    vector<vector<char>> one80_square(n, vector<char>(n));

    for(int i = 0; i<n; ++i){
        for(int j = 0; j<n; ++j){
            one80_square[i][j] = square[n-1-i][n-1-j];

            if(one80_square[i][j] != trans_square[i][j]){
                one80 = false;
                nochange = false;
            }
        }
    }

    vector<vector<char>> two70_square(n, vector<char>(n));

    for(int i = 0; i<n; ++i){
        for(int j = 0; j<n; ++j){
            two70_square[i][j] = square[j][n-1-i];

            if(two70_square[i][j] != trans_square[i][j]){
                two70 = false;
                nochange = false;
            }
        }
    }

    vector<vector<char>> ref_square(n, vector<char>(n));

    for(int i = 0; i<n; ++i){
        for(int j = 0; j<n; ++j){
            ref_square[i][j] = square[i][n-1-j];

            if(ref_square[i][j] != trans_square[i][j]){
                ref = false;
                nochange = false;
            }
        }
    }

    vector<vector<char>> ref_ninenty_square(n, vector<char>(n));

    for(int i = 0; i<n; ++i){
        for(int j = 0; j<n; ++j){
            ref_ninenty_square[i][j] = ref_square[n-1-j][i];

            if(ref_ninenty_square[i][j] != trans_square[i][j]){
                comb90 = false;
                nochange = false;
            }
        }
    }

    vector<vector<char>> ref_one80_square(n, vector<char>(n));

    for(int i = 0; i<n; ++i){
        for(int j = 0; j<n; ++j){
            ref_one80_square[i][j] = ref_square[n-1-i][n-1-j];

            if(ref_one80_square[i][j] != trans_square[i][j]){
                comb180 = false;
                nochange = false;
            }
        }
    }

    vector<vector<char>> ref_two70_square(n, vector<char>(n));

    for(int i = 0; i<n; ++i){
        for(int j = 0; j<n; ++j){
            ref_two70_square[i][j] = ref_square[j][n-1-i];

            if(ref_two70_square[i][j] != trans_square[i][j]){
                comb270 = false;
                nochange = false;
            }
        }
    }

    if(nochange){
        fout << "6\n";
    }else if(ninety){
        fout << "1\n";
    }else if(one80){
        fout << "2\n";
    }else if(two70){
        fout << "3\n";
    }else if(ref){
        fout << "4\n";
    }else if(comb90){
        fout << "5\n";
    }else if(comb180){
        fout << "5\n";
    }else if(comb270){
        fout << "5\n";
    }else{
        fout << "7\n";
    }


    return 0;
}
