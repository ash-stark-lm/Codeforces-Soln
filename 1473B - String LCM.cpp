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

string f_lcm(string s1, string s2) {
  string x = s1, y = s2;
  while (x.length() != y.length()) {
    if (x.length() < y.length()) {
      x += s1;
    } else
      y += s2;
  }

  return (x == y) ? x : "";
}

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    string a, b;
    cin >> a >> b;

    string ans = f_lcm(a, b);
    if (ans == "")
      cout << -1 << endl;
    else
      cout << ans << endl;
  }
  return 0;
}