#include<iostream>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        int odd = 0, even = 0;

        for(int i = 0; i < n; ++i){

            int nn;
            cin >> nn;

            if(nn % 2 != 0){
                odd++;
            }else{
                even++;
            }

        }

        if(even > 0){

            if(odd % 2 == 0){
                cout << "YES" << "\n";
            }else{
                cout << "NO" << "\n";
            }

        }else{

            if(odd % 2 == 0){
                cout << "YES" << "\n";
            }else{
                cout << "NO" << "\n";
            }

        }

    }

    return 0;
}