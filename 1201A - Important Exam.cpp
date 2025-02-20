#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  int n, m;
  cin >> n >> m;

  // Input strings
  vector<string> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }

  // Input column scores
  vector<int> v(m);
  for (int i = 0; i < m; i++) {
    cin >> v[i];
  }

  // Frequency map: pair of (character, index) -> frequency
  map<pair<char, int>, int> mp;

  // Count character frequencies for each index
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      mp[{s[i][j], j}]++;
    }
  }

  int max_score = 0;

  for (int i = 0; i < m; i++) {
    int max_freq = 0;

    for (auto &p : mp) {
      if (p.first.second == i) {
        max_freq = max(max_freq, p.second);
      }
    }

    max_score += max_freq * v[i];
  }

  cout << max_score << endl;

  return 0;
}
