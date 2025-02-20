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

  int a, b;
  cin >> a >> b;
  int n;
  cin >> n;
  double mintime = 1e8;
  for (int i = 0; i < n; i++) {
    int x, y, t;
    cin >> x >> y >> t;

    int p = abs(y - b);
    int q = abs(x - a);
    double dist = sqrt(p * p + q * q);
    double time = dist / t;
    if (time < mintime)
      mintime = time;
  }
  cout << fixed << setprecision(10) << mintime << endl;

  return 0;
}
