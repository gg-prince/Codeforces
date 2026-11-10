#include <iostream>
#include <set>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        set<int> beauties;

        while(n--){

            int num;
            cin >> num;

            beauties.insert(num);

        }

        cout << beauties.size() << "\n";

    }


    return 0;
}