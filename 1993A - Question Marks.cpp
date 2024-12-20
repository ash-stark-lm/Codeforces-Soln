#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];

int main() {

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int len = s.length();
    vector<int> f(4, 0);
    for (auto &ch : s) {
      if (ch == '?')
        continue;
      else
        f[ch - 'A']++;
    }

    int ans = 0;
    for (auto x : f) {
      ans += min(x, n);
    }

    cout << ans << endl;
  }
  return 0;
}