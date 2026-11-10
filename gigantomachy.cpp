#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long n, m;
        cin >> n >> m;

        long long a1 = 0, b1 = 0, x;

        for (long long i = 0; i < n; ++i) {
            cin >> x;
            if (i == 0) a1 = x;
        }
        for (long long i = 0; i < m; ++i) {
            cin >> x;
            if (i == 0) b1 = x;
        }

        cout << ((b1 + m <= a1 + n) ? 1 : 2) << "\n";
    }

    return 0;
}