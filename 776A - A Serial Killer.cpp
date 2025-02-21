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
  string a, b;
  cin >> a >> b;

  int n;
  cin >> n;

  vector<pair<string, string>> changes;
  for (int i = 0; i < n; i++) {
    string murdered, replaced;
    cin >> murdered >> replaced;
    changes.push_back({murdered, replaced});
  }
  vector<pair<string, string>> ans;
  ans.pb({a, b});
  for (auto x : changes) {
    if (x.first == a)
      a = x.second;
    if (x.first == b)
      b = x.second;
    ans.push_back({a, b});
  }
  for (auto x : ans) {
    cout << x.first << " " << x.second << endl;
  }

  return 0;
}
