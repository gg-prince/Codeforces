#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){

    vector<int> l1 = {2,4,3};

    vector<int> l2 = {5,6,4};

    int l1l = floor(size(l1)/2);

    for(int i = 0; i <=l1l; ++i){

        int sub = l1[i];

        int fnl1l = l1.size() - (i+1);

        l1[i] = l1[fnl1l];

        l1[fnl1l] = sub;

    }

    int l2l = floor(size(l2)/2);

    for(int i = 0; i <=l2l; ++i){

        int sub = l2[i];

        int fnl2l = l2.size() - (i+1);

        l2[i] = l2[fnl2l];

        l2[fnl2l] = sub;

    }

    int fnl1;

    for(int i = 0; i < size(l1); ++i){

        cout << l2[i];

    }

    return 0;
}