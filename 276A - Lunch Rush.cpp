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

  int n, k;
  cin >> n >> k;

  vector<pair<int, int>> v;
  for (int i = 0; i < n; i++) {
    int f, t;
    cin >> f >> t;
    v.pb({f, t});
  }
  int mx_joy = INT_MIN;

  for (auto x : v) {
    int t = x.second;
    int f = x.first;
    if (t > k) {
      int joy = f - (t - k);
      mx_joy = max(mx_joy, joy);
    } else
      mx_joy = max(mx_joy, f);
  }
  cout << mx_joy << endl;

  return 0;
}