#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        long long blocks = 1;
        for (int i = 1; i < n; i++)
            if (s[i] != s[i - 1]) blocks++;

        int reduction = 0;
        for (int i = 1; i + 1 < n; i++) {
            if (s[i] != s[i - 1] && s[i] != s[i + 1]) {
                if (s[i - 1] == s[i + 1]) { reduction = 2; break; }
                reduction = 1;
            }
        }

        cout << blocks - reduction << "\n";
    }
    return 0;
}