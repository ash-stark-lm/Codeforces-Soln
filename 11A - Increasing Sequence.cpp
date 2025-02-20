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

  int n, d;
  cin >> n >> d;
  vi(n);
  int moves = 0;
  for (int i = 1; i < n; i++) {
    if (v[i] > v[i - 1])
      continue;
    else {
      int diff = v[i - 1] - v[i];

      moves += diff / d;
      v[i] += (diff / d) * d;
      if (v[i] <= v[i - 1]) {
        moves++;
        v[i] += d;
      }
    }
  }
  cout << moves << endl;

  return 0;
}
