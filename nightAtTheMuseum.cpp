#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int minMoves = 0;

    for(int i = 0; i < s.size(); ++i){

        int currmoves, clkws, aclkws;

        if(i == 0){

            clkws = s[i] - 'a';
            aclkws = ('z' - s[i]) + 1;
            currmoves = min(clkws, aclkws);

        }else{

            if(s[i-1] < s[i]){
                clkws = ('z' - s[i]) + (s[i-1] - 'a') + 1;
                aclkws = s[i] - s[i-1];
            }else if(s[i-1] > s[i]){
                aclkws = s[i-1] - s[i];
                clkws = (s[i] - 'a') + ('z' - s[i-1]) + 1;
            }else{
                clkws = 0;
                aclkws = 0;
            }

        }
        currmoves = min(clkws, aclkws);
        minMoves += currmoves;
    }

    cout << minMoves << "\n";

    return 0;
}