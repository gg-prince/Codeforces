#include<iostream>
#include<vector>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector<int> nums(n);

        

        for(int i = 0; i < n; ++i){
            cin >> nums[i];
        }

        
        vector<int> results;
        int count = 0;

        for(int i = n-1; i >= 0; --i){
        
            if(count % 2 == 0 && nums[i] > 0){
                results.push_back(i+1);
                count++;
            }else if(count % 2 != 0 && nums[i] < 0){
                results.push_back(i+1);
                count++;
            }

        }

        cout << count << "\n";

        for(int i = 0; i < size(results); ++i){
            cout << results[i] << " ";
        }

        cout << "\n";

    }

    return 0;
}