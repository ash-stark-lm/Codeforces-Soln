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
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int m;
  cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; i++)
    cin >> b[i];
  int mx = 0;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (b[i] % a[j] == 0) {
        int x = b[i] / a[j];
        if (x > mx)
          mx = x;
      }
    }
  }
  int cnt = 0;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (b[i] % a[j] == 0) {
        int x = b[i] / a[j];
        if (x == mx)
          cnt++;
      }
    }
  }
  cout << cnt << endl;

  return 0;
}
