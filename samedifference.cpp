#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        cin.ignore();

        string text;
        getline(cin, text);

        map<char, int> chars;

        for(const char ch : text){
            chars[ch]++;
        }

        cout << n - chars[text[n-1]] << "\n";

    }

    return 0;
}