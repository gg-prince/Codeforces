#include <bits/stdc++.h>
using namespace std;

string core(const string& s) {
    string st;
    for (char c : s) {
        if (!st.empty() && st.back() == c) st.pop_back();
        else st.push_back(c);
    }
    return st;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string a, b;
        cin >> n >> a >> b;

        bool ok = count(a.begin(), a.end(), '1') == count(b.begin(), b.end(), '1')
                  && core(a) == core(b);
        cout << (ok ? "YES" : "NO") << "\n";
    }
    return 0;
}