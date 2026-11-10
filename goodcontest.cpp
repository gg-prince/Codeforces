#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        int a, b, c;
        cin >> a >> b >> c;

        cout << n - min(min(a, b), c) << "\n";

    }

    return 0;
}