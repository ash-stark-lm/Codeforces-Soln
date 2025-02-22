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

  vector<pair<int, int>> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i].first >> v[i].second;
  }
  float totaL_dist = 0;
  int start_x = v[0].first;
  int start_y = v[0].second;

  for (int i = 1; i < n; i++) {
    int x = v[i].first;
    int y = v[i].second;
    float dist =
        sqrt((x - start_x) * (x - start_x) + (y - start_y) * (y - start_y));
    totaL_dist += dist;
    start_x = x;
    start_y = y;
  }

  cout << fixed << setprecision(9) << totaL_dist * k / 50 << endl;

  return 0;
}