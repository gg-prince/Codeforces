#include <iostream>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;

    cin >> n;

    if(n == 2 || n == 3){

        cout << "NO SOLUTION";
        return 0;

    }else{

        int nn = 2;

        while(nn <= n){

            cout << nn << " ";

            nn = nn + 2;

        }

        nn = 1;

        while(nn <= n){

            cout << nn << " ";

            nn = nn + 2;

        }

        return 0;

    }

}