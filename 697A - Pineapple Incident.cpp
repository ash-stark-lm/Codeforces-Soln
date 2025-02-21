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

  int t, s, x;
  cin >> t >> s >> x;
  // At time t (in seconds) it barks for the first time. Then every s seconds
  // after it, it barks twice with 1 second interval. Thus it barks at times t,
  // t + s, t + s + 1, t + 2s, t + 2s + 1

  if (x < t) {
    cout << "NO" << endl;

  } else if (x == t) {
    cout << "YES" << endl;

  } else if ((x - t) % s == 0 && x >= t + s) { // t t+s t+2s=> x-t %s ==0
    cout << "YES" << endl;
  } else if ((x - t - 1) % s == 0 && x >= t + s + 1) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
