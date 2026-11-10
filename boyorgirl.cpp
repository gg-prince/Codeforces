#include<iostream>
#include<string>
#include<set>

using namespace std;

int main(){

    string s;
    cin >> s;

    set<char> cs;

    for(int i = 0; i < s.size(); ++i){
        cs.insert(s[i]);
    }

    if(cs.size() % 2 == 0){
        cout << "CHAT WITH HER!\n";
    }else{
        cout << "IGNORE HIM!\n";
    }

    return 0;
}