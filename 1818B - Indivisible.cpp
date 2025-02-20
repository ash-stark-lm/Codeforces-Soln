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
    int n;
    cin >> n;
    if (n == 1)
      cout << 1 << endl;
    else if (n % 2 != 0) {
      cout << -1 << endl;
    } else {
      vector<int> ans;
      int i = 2, j = 1;
      while (i <= n && j <= n) {
        ans.pb(i);
        ans.pb(j);
        i += 2;
        j += 2;
      }
      for (int x : ans)
        cout << x << " ";
      cout << endl;
    }
  }
  return 0;
}
