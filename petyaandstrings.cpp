#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;

    cin >> a;
    cin >> b;

    int diff = 0;
    bool found = false;

    for(int i = 0; i < a.size(); ++i){
        
        if(tolower(a[i]) != tolower(b[i])){

            if(tolower(a[i]) > tolower(b[i])){
                cout << 1;
            }else{
                cout << -1;
            }

            found = true;
            break;           

        }

    }

    if(!found){
        cout << 0;
    }


    return 0;
}