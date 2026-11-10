#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main(){

    int n;
    cin >> n;

    map<int, int> guests;
    vector<int> home(n);

    int riz = 0;


    for(int i = 0; i < n; ++i){

        int g;
        cin >> home[i] >> g;

        guests[g]++;

    }

    for(int i = 0; i < n; ++i){

        auto it = guests.find(home[i]);

        if(it != guests.end()){

            riz += it->second;

        }

    }

    cout << riz << "\n";

    return 0;
}