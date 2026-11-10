#include <iostream>
#include <set>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;

    set<int> nums;

    for(int i = 0; i < n; ++i){

        int nn;
        cin >> nn;

        nums.insert(nn);

    }

    auto fnit = nums.begin();

    if(nums.size() > 1){
        ++fnit;
        cout << *fnit;
    }else{
        cout << "NO";
    }

    return 0;
}