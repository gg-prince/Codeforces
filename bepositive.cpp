#include <iostream>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        int nums[n], negs = 0, zeros = 0;

        for(int i = 0; i < n; ++i){

            cin >> nums[i];

            if(nums[i] < 0){
                negs++;
            }else if(nums[i] == 0){
                zeros++;
            }

        }

        cout << ((negs % 2) * 2) + zeros << "\n";

    }

    return 0;
}