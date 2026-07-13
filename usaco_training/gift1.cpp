/*
ID: princeg2
TASK: gift1
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    ifstream fin("gift1.in");
    ofstream fout("gift1.out");

    int np;
    fin >> np;

    vector<string> members(np);

    for(int i = 0; i < np; i++){
        fin >> members[i];
    }

    vector<int> cash(np, 0);
    string member, giftee;
    int money, giftees, share, modulo, index;

    for(int i = 0; i < np; i++){

        fin >> member;
        fin >> money >> giftees;

        if(giftees > 0){

            share = money / giftees;
            modulo = money % giftees;

            for(int j = 0; j < giftees; j++){
                fin >> giftee;
                index = find(members.begin(), members.end(), giftee) - members.begin();
                cash[index] += share;
            }

            index = find(members.begin(), members.end(), member) - members.begin();

            cash[index] = cash[index] + modulo - (money);

        }

    }

    for(int i = 0; i < np; i++){
        fout << members[i] << " " << cash[i] << "\n";
    }

    return 0;
}