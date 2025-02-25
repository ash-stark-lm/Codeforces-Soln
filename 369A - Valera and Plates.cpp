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

  int n, m, k;
  cin >> n >> m >> k;
  vector<int> dishes(n);
  for (int i = 0; i < n; i++) {
    cin >> dishes[i];
  }

  int washes = 0;

  for (int i = 0; i < n; i++) {
    if (dishes[i] == 1) {
      // Type 1 dish (must use a bowl)
      if (m > 0) {
        m--;
      } else {
        washes++;
      }
    } else {
      // Type 2 dish (prefer using a plate, otherwise use a bowl)
      if (k > 0) {
        k--;
      } else if (m > 0) {
        m--; // if no plate left use bowl
      } else {
        washes++;
      }
    }
  }

  cout << washes << endl;

  return 0;
}