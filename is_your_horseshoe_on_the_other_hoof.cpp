#include<iostream>
#include<set>

using namespace std;

int main(){

    set<int> shoes;

    for(int i = 0; i < 4; ++i){

        int shoe;
        cin >> shoe;

        shoes.insert(shoe);

    }

    cout << 4 - shoes.size() << "\n";

    return 0;
}