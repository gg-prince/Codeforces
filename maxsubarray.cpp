#include<iostream>
#include<vector>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    vector<long long> nums(n);

    for(int i = 0; i < n; ++i){

        cin >> nums[i];

    }

    long long currsum = nums[0], maxsum = nums[0];

    for(int i = 1; i < n; ++i){

        currsum = max(nums[i], nums[i] + currsum);
        maxsum = max(maxsum, currsum);

    }

    cout << maxsum << "\n";

    return 0;
}