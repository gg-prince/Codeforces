#include <iostream>
#include <stack>
using namespace std;

int main() {

    int a[8] = {2, 5, 1, 4, 8, 3, 2, 5};
    int n = 8;

    int answer[9];

    stack<int> st;

    for (int i = 1; i <= n; ++i) {

        while (!st.empty() && st.top() >= a[i]) {
            st.pop();
        }

        if (st.empty()) {
            answer[i] = i;
        }
        else {
            answer[i] = st.top();
        }

        
        st.push(a[i]);
    }

    
    for (int i = 0; i < n; i++) {
        cout << answer[i] << " ";
    }

    return 0;
}