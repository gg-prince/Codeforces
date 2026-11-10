#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n;

    cin >> n;
    
    int prevn = 0;

    long long sum = 0;

    for(int i = 1; i <= n; ++i){

        int nn;

        cin >> nn;

        if(nn < prevn){

            int diff = prevn - nn;
            sum += diff;
            prevn = nn + diff;

        }else{
            prevn = nn;
        }

    }

    cout << sum;

    return 0;
}