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

  vector<pair<int, int>> v(m);
  for (int i = 0; i < m; i++) {
    cin >> v[i].first >> v[i].second;
  }
  // sort on basis of second element

  sort(v.rbegin(), v.rend(), [](pair<int, int> &a, pair<int, int> &b) {
    return a.second < b.second;
  });

  int ans = 0;
  int cnt = 0;
  for (int i = 0; i < m && cnt < n; i++) {
    int take =
        min(n - cnt, v[i].first); // Take as many as possible within the limit
    ans += take * v[i].second;    // Add to the answer
    cnt += take;                  // Increase count
  }
  cout << ans << endl;

  return 0;
}
