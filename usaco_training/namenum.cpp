/*ID: princeg2
TASK: namenum
LANG: C++ 
*/
#include<bits/stdc++.h>
using namespace std;

char getchar(char c){
    if(c == 'A' || c == 'B' || c == 'C'){
        return '2';
    }else if(c == 'D' || c == 'E' || c == 'F'){
        return '3';
    }else if(c == 'G' || c == 'H' || c == 'I'){
        return '4';
    }else if(c == 'J' || c == 'K' || c == 'L'){
        return '5';
    }else if(c == 'M' || c == 'N' || c == 'O'){
        return '6';
    }else if(c == 'P' || c == 'R' || c == 'S'){
        return '7';
    }else if(c == 'T' || c == 'U' || c == 'V'){
        return '8';
    }else if(c == 'W' || c == 'X' || c == 'Y'){
        return '9';
    }
    return '0';
}

int main(){

    ifstream fin("namenum.in");
    ofstream fout("namenum.out");
    ifstream file("dict.txt");

    string serialnum;

    fin >> serialnum;

    string onename;

    bool foundmatch = false;

    while(file >> onename){
        if(serialnum.length() != onename.length()){
            continue;
        }

        string trialname = "";

        for(char c : onename){
            trialname += getchar(c);
        }
        if(trialname == serialnum){
            fout << onename << "\n";
            foundmatch = true;
        }

    }

    if(!foundmatch){
        fout << "NONE" << "\n";
    }

    return 0;
}


