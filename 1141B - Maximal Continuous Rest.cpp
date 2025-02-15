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

  int mx_rest = 0, cur_rest = 0;
  for (int i = 0; i < 2 * n; i++) {
    mx_rest = max(mx_rest, cur_rest);
    if (v[i % n] == 1) {
      cur_rest++;

    } else {
      cur_rest = 0; // Reset streak
    }
  }
  cout << mx_rest << endl;

  return 0;
}