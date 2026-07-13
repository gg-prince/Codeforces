#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n;
        cin >> n;

        vector<int> testcase(n);

        for(int i = 0; i < n; i++) {
            cin >> testcase[i];
        }

        sort(testcase.begin(), testcase.end());

        int answer = n;

        int i = 0;

        while(i < n) {

            int j = i;

            while(j < n && testcase[j] == testcase[i]) {
                j++;
            }

            int left = i;
            int right = n - j;

            answer = min(answer, max(left, right));

            i = j;
        }

        cout << answer << endl;
    }

    return 0;
}