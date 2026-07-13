#include <iostream>
using namespace std;

int main(){

    int s[4];

    for(int i=0; i<4; i++){
        cin >> s[i];
    }

    int nshoe = 0;

    int inner = 0;

    int dir[3] = {-1, -2, -3};

    for(int i=3; i>0; i--){
        for(int j = i-1; j>=0; j--){
            int shoe_comp = s[i+dir[j]];
            if(s[i] == shoe_comp){
                nshoe++;
                shoe_comp += j+i;
            }
            cout << shoe_comp;
        }
        cout << endl;
    }

    cout << nshoe << " " << inner;

    return 0;
}