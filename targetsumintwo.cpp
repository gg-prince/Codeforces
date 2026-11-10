#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    vector<int> arr = {1, 5, 4, 6, 7, 9, 9, 10};

    sort(arr.begin(), arr.end());

    int left = 0, right = 7;

    int tar;

    cin >> tar;    

    while(left != right){

        int currsum = arr[left] + arr[right];

        cout << left << " " << right << "= " << currsum << "\n";

        if(currsum == tar){
            break;
        }else{

            if(currsum > tar){
                right--;
            }else{
                left++;
            }

        }

    }

    cout << left << " " << right;

    return 0;
}