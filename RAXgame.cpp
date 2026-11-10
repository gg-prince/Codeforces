#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector<int> aji;
        vector<int> mai;

        int aji1 = 0, mai1 = 0;

        for(int i = 0; i < n; ++i){

            int nn;
            cin >> nn;

            aji.push_back(nn);

            if(nn == 1){
                aji1++;
            }
        }


        for(int i = 0; i < n; ++i){
            int nn;
            cin >> nn;

            mai.push_back(nn);

            if(nn == 1){
                mai1++;
            }
            
        }

        for(int i = 0; i < n; ++i){

            if(i % 2 == 0){

                if(aji1 % 2 == 0){
                    if(mai[i] == 1 && aji[i] != 1){
                        mai1--;
                        aji1++;
                    }else if(mai[i] != 1 && aji[i] == 1){
                        mai1++;
                        aji1--;
                    }
                }

            }else{

                if(mai1 % 2 == 0){
                    if(aji[i] == 1 && mai[i] != 1){
                        aji1--;
                        mai1++;
                    }else if(aji[i] != 1 && mai[i] == 1){
                        aji1++;
                        mai1--;
                    }
                }

            }

            // cout << i << " " << aji1 << " " << mai1 << "\n";

        }

        if((aji1 % 2 != 0) && (mai1 % 2 == 0)){
            cout << "Ajisai" << "\n";
        }else if((mai1 % 2 != 0) && (aji1 % 2 == 0)){
            cout << "Mai" << "\n";
        }
        else{
            cout << "Tie" << "\n";
        }

    }

    return 0;

}