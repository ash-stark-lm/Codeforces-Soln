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

  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    int n = s.length();
    // observation whenever first and last character same then number of ab = ba
    // in substring

    if (s[0] == s[n - 1]) {
      cout << s << endl;
    } else {
      s[0] = s[n - 1]; // make first and last character equal
      cout << s << endl;
    }
  }

  return 0;
}