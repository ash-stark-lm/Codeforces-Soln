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

  string s;
  cin >> s;
  int n = s.length();
  bool possible = false;
  for (int i = 0; i < n - 2; i++) {
    if (s.substr(i, 3).find('A') != string::npos &&
        s.substr(i, 3).find('B') != string::npos &&
        s.substr(i, 3).find('C') != string::npos) {
      possible = true;
      break;
    }
    /*
     if (s[i] != s[i + 1] && s[i + 1] != s[i + 2] && s[i] != s[i + 2] &&
        s[i] != '.' && s[i + 1] != '.' && s[i + 2] != '.') {
      possible = true;
      break;
    }
    */
  }
  if (possible)
    YES;
  else
    NO;

  return 0;
}
