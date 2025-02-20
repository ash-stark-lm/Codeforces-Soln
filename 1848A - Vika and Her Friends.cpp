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
    int n, m, k;
    cin >> n >> m >> k;
    int x, y;
    cin >> x >> y;
    vector<pair<int, int>> v;
    for (int i = 0; i < k; i++) {
      int a, b;
      cin >> a >> b;
      v.push_back({a, b});
    }
    // if differnce between vika and her friend is even then not possible
    bool possible = true;
    for (int i = 0; i < k; i++) {
      int dist = abs(x - v[i].first) + abs(y - v[i].second);
      if (dist % 2 == 0) {
        possible = false;
        break;
      }
    }
    if (possible)
      YES;
    else
      NO;
  }
  return 0;
}