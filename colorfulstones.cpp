#include<iostream>
#include<string>

using namespace std;

int main(){

    int x = 0;
    string s, c;

    cin >> s;
    cin >> c;

    for(int i = 0; i < c.size(); ++i){
        if(c[i] == s[x]){
            x++;
        }
    }

    cout << x + 1 << "\n";

    return 0;
}