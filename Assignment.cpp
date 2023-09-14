#include <bits/stdc++.h>

using namespace std;

bool canWin(vector<int> &a) {
  int n = a.size();
  vector<bool> dp(n + 1, true);
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j < i; j++) {
      if (a[j] <= a[i] - (i - j)) {
        dp[i] = false;
        break;
      }
    }
  }
  return dp[n];
}

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int j = 0; j < n; j++) {
      cin >> a[j];
    }
    if (canWin(a)) {
      cout << "First\n";
    } else {
      cout << "Second\n";
    }
  }
  return 0;
}
