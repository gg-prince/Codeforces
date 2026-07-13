#include <bits/stdc++.h>
using namespace std;

vector<long long> psum(const vector<int> &arr) {

    vector<long long> psums(arr.size() + 1);

    for (int i = 1; i < arr.size(); i++){
                    for(int j = i-1; j >= 0; j--){
                        if(arr[i] == arr[j] || arr[j] == 0){
                            psums[i] = psums[j] + 1;
                            break;
                        }
                    }
    }

    return psums;

}

int main(){

    int n, q;

    cin >> n >> q;
    n++;

    vector<int> cows(n);

    cows[0] = 0;

    for (int i = 1; i < n; i++){
        cin >> cows[i];
    }

    vector<long long> prefix_arr = psum(cows);

    int b1, b2, b3;
    b1 = b2 = b3 = 0;

    for(int i = 0; i < q; i++){
        int l, r;
        cin >> l >> r;

        bool b1off, b2off, b3off;
        b1off = b2off = b3off = true;

        for (int i = r; i >= l; i--){

                    for(int j = l - 1; j >= 0; j--){

                        if(cows[i] == cows[j] || cows[j] == 0){

                            if(cows[i] == 1 && b1off){

                                b1 = prefix_arr[i] - prefix_arr[j];
                                b1off = false;

                            }else if(cows[i] == 2 && b2off){

                                b2 = prefix_arr[i] - prefix_arr[j];
                                b2off = false;

                            }else if(cows[i] == 3 && b3off){
                                
                                b3 = prefix_arr[i] - prefix_arr[j];
                                b3off = false;

                            }

                        }

                    }

        }

    }

    cout << b1 << " " << b2 << " " << b3;

    return 0;
}