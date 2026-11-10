#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9; // Represents an impossible sum
vector<int> coins;

// This function will cause a TLE because it lacks memoization
int solve(int x) {
    // Base cases
    if (x < 0) return INF;   // Negative sums are invalid
    if (x == 0) return 0;    // 0 coins needed to make a sum of 0
    
    int best = INF;
    
    // Try every single coin for the current sum 'x'
    for (int c : coins) {
        best = min(best, solve(x - c) + 1);
    }
    
    return best;
}

int main() {
    int n = 3, target = 100; #include <bits/stdc++.h>
using namespace std;

const int INF = 1e9; // Represents an impossible sum
vector<int> coins;

// This function will cause a TLE because it lacks memoization
int solve(int x) {
    // Base cases
    if (x < 0) return INF;   // Negative sums are invalid
    if (x == 0) return 0;    // 0 coins needed to make a sum of 0
    
    int best = INF;
    
    // Try every single coin for the current sum 'x'
    for (int c : coins) {
        best = min(best, solve(x - c) + 1);
    }
    
    return best;
}

int main() {
    // A small target like 11 works instantly, 
    // but try changing this to 100 or 1000 and it will freeze.
    int n = 3, target = 100; 
    coins = {1, 5, 7};
    
    int ans = solve(target);
    
    if (ans >= INF) cout << -1 << "\n";
    else cout << ans << "\n";
    
    return 0;
}
    coins = {1, 5, 7};
    
    int ans = solve(target);
    
    if (ans >= INF) cout << -1 << "\n";
    else cout << ans << "\n";
    
    return 0;
}
