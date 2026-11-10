#include <iostream>

using namespace std;

int main(){

    int arr[8] = {1, 3, 2, 5, 1, 1, 2, 3};

    int left = 0, right = 1;

    int tar;

    cin >> tar;    

    while(left < tar && right < tar){
        int currsum = 0;
        for(int i = left; i <= right; ++i){
            currsum += arr[i];
        }
        cout << left << " " << right << "= " << currsum << "\n";
        if(currsum == tar){
            break;
        }else{

            int nextrsum = 0;

            for(int i = left; i <= right; ++i){
                nextrsum += arr[i];
            }

            if(nextrsum > tar){
                left++;
            }else{
                right++;
            }

        }

    }

    cout << left << " " << right;

    return 0;
}