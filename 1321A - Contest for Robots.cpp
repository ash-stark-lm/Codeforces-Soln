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
  vector<int> a(n), b(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  fo(i, n) { cin >> b[i]; }

  // if a problem is solved by both then just give 1 point to it
  // suppose x problem solved by a and not by b and y by b not a
  // so xp>y; so ans is y+1/x rounded up to nearest integer
  int x = 0, y = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] == 1 && b[i] == 0)
      x++;
    else if (a[i] == 0 && b[i] == 1)
      y++;
  }
  if (x == 0) {
    cout << -1 << endl;
    return 0;
  }
  double f = (double)(y + 1) / x;
  cout << ceil(f) << endl;

  return 0;
}
