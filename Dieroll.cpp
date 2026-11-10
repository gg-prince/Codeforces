#include<iostream>

using namespace std;

int main(){

    int y, w;

    cin >> y >> w;

    if(6 % (6 - max(y, w) + 1) == 0){
        cout << "1/" << 6 / (6 - max(y, w) + 1) << "\n";
    }else if((6 - max(y, w) + 1) == 4){
        cout << "2/3\n";
    }else{
        cout << (6 - max(y, w) + 1) << "/6\n";
    }

    return 0;
}