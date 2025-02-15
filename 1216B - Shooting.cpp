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

  int n;
  cin >> n;
  vi(n);

  vector<pair<int, int>> p;
  for (int i = 0; i < n; i++) {
    p.pb({v[i], i + 1});
  }

  sort(p.rbegin(), p.rend());
  int x = 0;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    ans += p[i].first * x + 1;
    x++;
  }
  cout << ans << endl;
  for (auto x : p) {
    cout << x.second << " ";
  }
  cout << endl;
  return 0;
}
