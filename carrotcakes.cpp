#include<iostream>
#include<cmath>

using namespace std;

int main(){

    float n, t, k, d;

    cin >> n >> t >> k >> d;

    if(ceil(n/k) * t <= d){
        cout << "NO\n";
    }else{

        int ft = 0, fnd = 0, nn = n;

        while(nn > 0){

            if(ft < d){
                ft += t;
                nn -= k;
            }
            else{
                
                if(!fnd){
                    fnd = 1;
                    ft = d;
                }

                ft += t;
                nn -= (k * 2);

            }

            // cout << ft << " " << ceil(n/k) * t << "\n";

        }

        if(ft < (ceil(n/k) * t)){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }

    }

    return 0;
}