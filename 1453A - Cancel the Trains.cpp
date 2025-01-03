#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];

#define endl "\n"
#define pb push_back
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define int long long
#define vi(n)                                                                  \
  vector<int> v(n);                                                            \
  inputarr(v, n);

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;

    vector<int> t1(n);
    vector<int> t2(m);
    inputarr(t1, n);
    inputarr(t2, m);

    // if any two train in t1 and t2 have same value then one need to be
    // cancelled
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
      mp[t1[i]]++;
    }
    for (int i = 0; i < m; i++) {
      mp[t2[i]]++;
    }
    int ans = 0;
    for (auto x : mp) {
      if (x.second == 2) {
        ans++;
      }
    }
    cout << ans << endl;
  }

  return 0;
}