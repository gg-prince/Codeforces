#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <cctype>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    set<char> available_letters;
    for (int i = 0; i < n; ++i) {
        string word;
        cin >> word;
        available_letters.insert(toupper(word[0]));
    }

    vector<string> abbreviations(m);
    for (int i = 0; i < m; ++i) {
        cin >> abbreviations[i];
    }

    vector<bool> formed(m, false);
    int formed_count = 0;
    bool progress = true;

    while (progress && formed_count < m) {
        progress = false;

        for (int i = 0; i < m; ++i) {
            if (formed[i]) continue;

            bool can_form = true;
            for (char c : abbreviations[i]) {
                if (available_letters.find(c) == available_letters.end()) {
                    can_form = false;
                    break;
                }
            }

            if (can_form) {
                formed[i] = true;
                formed_count++;
                available_letters.insert(abbreviations[i][0]);
                progress = true;
            }
        }
    }

    if (formed_count == m) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
