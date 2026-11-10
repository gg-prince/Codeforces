#include <iostream>
#include <vector>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;

    for(int i = 0; i < n; ++i){

        int x, y;
    
        cin >> x >> y;

        cout << min(x, y) << " " << max(x, y) << "\n";


    }

    return 0;
}