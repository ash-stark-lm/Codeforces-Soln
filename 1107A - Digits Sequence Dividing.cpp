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

  int q;
  cin >> q;
  while (q--) {
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n == 2) {
      if (s[0] - '0' >= s[1] - '0') {
        cout << "NO" << endl;
      } else {
        cout << "YES" << endl;
        cout << 2 << endl;
        cout << s[0] << " " << s[1] << endl;
      }
    } else {
      cout << "YES" << endl;
      cout << 2 << endl;
      cout << s[0] << " " << s.substr(1) << endl;
    }
  }

  return 0;
}
