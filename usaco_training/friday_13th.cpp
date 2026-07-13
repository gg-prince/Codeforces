/*
ID: princeg2
TASK: friday
LANG: C++                 
*/
#include <bits/stdc++.h>
using namespace std;

bool lyear(int i){
    if (i % 400 == 0) return true;
    if (i % 100 == 0) return false;
    if (i % 4 == 0) return true;
    return false;
}

int main(){

    ifstream fin("friday.in");
    ofstream fout("friday.out");

    int n;
    fin >> n;

    int daysofmonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int frequency[7] = {0};

    int currentday = 0;

    for(int i = 1900; i < 1900 + n; ++i){
        for(int j = 0; j < 12; ++j){
            frequency[currentday]++;
            
            int days = daysofmonth[j];
            if(j == 1 && lyear(i)){
                days = 29;
            }

            currentday = (currentday + days) % 7;
        }
    }

    fout << frequency[0];

    for(int i = 1; i < 7; ++i){
        fout << " " << frequency[i];
    }
    fout << "\n";

    return 0;
}