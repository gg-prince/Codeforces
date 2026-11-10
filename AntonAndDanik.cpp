#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s;
    cin >> s;

    unordered_map<char, int> fqc;

    for(char c : s){
        fqc[c]++;
    }
    
    if(fqc['D'] > fqc['A']){
        cout << "Danik\n";
    }else if(fqc['A'] > fqc['D']){
        cout << "Anton\n";
    }else{
        cout << "Friendship\n";
    }

    return 0;
}