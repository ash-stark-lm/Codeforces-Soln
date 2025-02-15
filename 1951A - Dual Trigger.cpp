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
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> v;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] == '1') {
        cnt++;
        v.pb(i);
      }
    }
    if (cnt % 2 == 1) {
      cout << "NO" << endl;
    } else {
      if (cnt == 2) {
        if (v[0] + 1 == v[1]) {
          cout << "NO" << endl;
        } else {
          cout << "YES" << endl;
        }
      } else
        cout << "YES" << endl;
    }
  }

  return 0;
}