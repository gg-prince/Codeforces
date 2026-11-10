#include <iostream>
#include <string>

using namespace std;

int main(){

    string dna;

    cin >> dna;

    int maxr = 1, currr = 1;

    for(int i = 1; i < dna.size(); ++i){

        if(dna[i] == dna[i-1]){
            currr += 1;
            maxr = max(maxr, currr);
        }else{
            
            currr = 1;
        }

    }

    cout << maxr;

    return 0;
}