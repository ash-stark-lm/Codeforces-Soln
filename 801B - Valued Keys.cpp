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
  string s, t;
  cin >> s >> t;
  int n = s.length();

  // given min(x[i],z[i])=y[i]-> this means y[i]<=x[i]

  string z = "";

  for (int i = 0; i < n; i++) {
    if (t[i] > s[i]) {
      cout << -1 << endl;
      return 0;
    }
    z += t[i];
  }

  cout << z << endl;

  return 0;
}