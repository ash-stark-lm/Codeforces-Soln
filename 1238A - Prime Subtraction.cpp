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

void solve(int d) {
  if (d == 1) {
    cout << "NO" << endl;
    return;
  }

  for (int i = 2; i * i <= d; i++) {
    if (d % i == 0) {
      cout << "YES" << endl;
      return;
    }
  }

  // if d is itself prime still its possible

  cout << "YES" << endl;
}

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--) {

    int x, y;
    cin >> x >> y;
    int d = x - y;
    solve(d);
  }

  return 0;
}