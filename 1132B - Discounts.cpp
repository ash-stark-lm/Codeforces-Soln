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
  fo(i, n) cin >> a[i];
  int m;
  cin >> m;
  vector<int> b(m);

  fo(i, m) cin >> b[i];
  sort(a.begin(), a.end());

  int sum = 0;
  for (int x : a)
    sum += x;
  for (int i = 0; i < m; i++) {
    cout << sum - a[n - b[i]] << endl;
  }

  return 0;
}
