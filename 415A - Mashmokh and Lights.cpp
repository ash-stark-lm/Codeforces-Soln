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
  int n, m;
  cin >> n >> m;

  vi(m);
  vector<bool> a(n + 1, true);
  vector<int> ans;
  for (int i = 0; i < m; i++) {
    int x = v[i];
    for (int j = x; j <= n; j++) {
      if (a[j] == false)
        continue;
      a[j] = false;
      ans.pb(x);
    }
  }
  reverse(ans.begin(), ans.end());
  for (int x : ans) {
    cout << x << " ";
  }

  return 0;
}