#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        string s;
        cin >> s;

        float maxline = 0, currline = 0;

        for(int i = 0; i < n; ++i){

            if(s[i] == '*'){
                currline = 0;
            }else{
                currline++;
            }

            maxline = max(currline, maxline);

        }

        cout << ceil(maxline / 2) << "\n";

    }

    return 0;
}