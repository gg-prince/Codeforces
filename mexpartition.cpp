#include <iostream>
#include <set>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        set<int> nums;

        for(int i = 0; i < n; ++i){

            int num;
            cin >> num;

            nums.insert(num);

        }

        int score = 102;

        for(int i = 0; i < n; ++i){

            if(!nums.count(i)){
                score = i;
                break;
            }

        }

        if(score == 102){

            score = *nums.rbegin() + 1;

        }

        cout  << score << "\n";

    }

    return 0;
}