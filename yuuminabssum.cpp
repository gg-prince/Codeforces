#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector<long long> nums(n);

        for(int i = 0; i < n; ++i){
            cin >> nums[i];
        }

        int nowsum;

        if(nums[0] == -1){
            nums[0] = 0;
        }
        nowsum = nums[0];

        for(int i = 1; i < n; ++i){

            if(nums[i] != -1){
                nums[i] = (nums[i] - nums[i-1]) + nowsum;
                nowsum = nums[i];
            }else{
                int currsum = 0;
                long long j = 0;
                while(j <= 1e9){
                    if(abs(j - nums[i-1]) > currsum){
                        break;
                    }
                    currsum = j - nums[i-1];
                    j++;
                }
                nums[i] = (j - nums[i-1]) + nowsum;
                nowsum = nums[i];

            }
            cout << nums[i] << " " << nowsum << "\n";

        }

        cout << nums[n-1];

    }

    return 0;
}