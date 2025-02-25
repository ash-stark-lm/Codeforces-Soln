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

  int n, a, b, c;
  cin >> n >> a >> b >> c;
  if (n == 1) {
    cout << 0 << endl;
    return 0;
  }
  if (n == 2) {
    cout << min(a, b) << endl;
    return 0;
  }
  // take min dist available at each instance;
  int x = min(a, b);
  bool ataken = false;
  bool btaken = false;
  if (x == a)
    ataken = true;
  if (x == b)
    btaken = true;
  int dist = 0;
  dist += x;
  // 2 meals done

  if (ataken) {
    // means at owl house so can go to rabbit that is a or to eeyore that is c
    int y = min(a, c);
    dist += y * (n - 2);
  }
  if (btaken && !ataken) {
    int y = min(b, c);
    dist += y * (n - 2);
  }
  cout << dist << endl;

  return 0;
}