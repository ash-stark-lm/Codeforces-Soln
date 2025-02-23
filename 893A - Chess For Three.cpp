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

  vi(n);
  int p1 = 1, p2 = 2, spec = 3;
  bool possible = true;

  for (int i = 0; i < n; i++) {
    int winner = v[i];
    if (winner == spec) {
      possible = false;
      break;
    }
    if (winner == p1) {
      swap(p2, spec);
    } else {
      swap(p1, spec);
    }
  }
  if (possible) {
    YES;
  } else {
    NO;
  }
  return 0;
}