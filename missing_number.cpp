#include <iostream>
#include <set>

using namespace std;

int main(){

    int n;

    cin >> n;

    set<int> nums;

    for(int i = 1; i < n; ++i){

        int num;
        cin >> num;

        nums.insert(num);

    }

    for(int i = 1; i <= n; ++i){

        if(!nums.count(i)){
            
            cout << i;
            break;

        }

    }

    return 0;
}