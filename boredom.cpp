#include<iostream>
#include<map>

using namespace std;

int main(){

    int n;
    cin >> n;

    map<int, int> ints;

    for(int i = 0; i < n; ++i){

        int num;
        cin >> num;

        ints[num]++;

    }

    long long maxpts = 0;

    for(auto num : ints){

        num.second = num.first * num.second;
        long long currpts = num.second;

        maxpts = max(maxpts, currpts);

    }

    cout << maxpts;

    return 0;
}