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
    vi(n);
    int maxi = *max_element(v.begin(), v.end());
    vector<int> ans;

    for (int i = 0; i < m; i++) {
      char c;
      cin >> c;
      int x, y;
      cin >> x >> y;
      if (c == '+' && x <= maxi && y >= maxi) {
        maxi = maxi + 1;
      } else if (c == '-' && x <= maxi && y >= maxi) {
        maxi--;
      }
      ans.push_back(maxi);
    }
    for (int x : ans) {
      cout << x << " ";
    }
    cout << endl;
  }

  return 0;
}