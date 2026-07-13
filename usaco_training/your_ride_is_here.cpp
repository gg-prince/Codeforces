/*
ID: princeg2
TASK: ride
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    ifstream fin("ride.in");
    ofstream fout("ride.out");

    string comet, group;

    fin >> comet >> group;

    int comet_product = 1;
    int group_product = 1;

    for(char c : comet){
        comet_product = (c - 'A' + 1) * comet_product;
    }

    for(char g : group){
        group_product = (g - 'A' + 1) * group_product;
    }

    if (comet_product % 47 == group_product % 47){
        fout << "GO" << "\n";
    }else{
        fout << "STAY" << "\n";
    }

    return 0;
}