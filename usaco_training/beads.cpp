/*
ID: princeg2
TASK: beads
LANG: C++                 
*/
#include <fstream>
#include <string>
using namespace std;

int globalstreak(string text, int n, int &gstreak, int &i){
    int pair = 1;
    int currentstreak = 0;

    while(i < n){
        currentstreak++;

        if(text[i] != text[i+1]){
            if(text[i+1] == 'w' || text[i] == 'w'){
                if(text[i+1] == 'w'){
                    text[i+1] = text[i];
                }
            }else{
            pair++;
            }
        }

        gstreak = max(currentstreak, gstreak);

        if(pair > 2){
            i++;
            globalstreak(text, n, gstreak, i);
        }
        else{
        i++;
        }
    }
    return gstreak;
}

int main(){
    ifstream fin("beads.in");
    ofstream fout("beads.out");

    int n;
    string beads;

    fin >> n;
    fin >> beads;

    int gstreak = 3;


    for(int j = 0; j < n; ++j){

        int i = 0;
        string newbeads = beads.substr(j) + beads.substr(0, j) + 'w';

        gstreak = globalstreak(newbeads, n, gstreak, i);
    }

    fout << gstreak << "\n";
    

return 0;
}