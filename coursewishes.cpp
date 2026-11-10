#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){

        int n, k;
        cin >> n >> k;

        vector<int> wishes(k);

        for(int i = 0; i < k; ++i){
            cin >> wishes[i];
        }

        vector<pair<int, int>> courses(n);

        int moves = 0;

        for(int i = 0; i < n; ++i){
            cin >> courses[i].first;
            courses[i].second = i + 1;

            if(courses[i].first <= k){
                moves += (k+1) - courses[i].first;
            }

            

        }

        sort(courses.begin(), courses.end(), greater<pair<int, int>>());

        cout << moves << "\n";

        for(int i = 0; i < n; ++i){

            if(courses[i].first <= k){
                while(courses[i].first <= k){
                    cout << courses[i].second << " ";
                    courses[i].first++;
                }
            }
            

        }

        cout << "\n";
        
    }

    return 0;
}