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
  int m = t.length();

  int i = 0, j = 0;
  string a, b;

  while (s[i] == '0' && i < n)
    i++;
  while (t[j] == '0' && j < m)
    j++;
  if (i == n) {
    a = '0';
  } else
    a = s.substr(i, n);
  if (j == m) {
    b = '0';
  } else
    b = t.substr(j, m);

  if (a.length() > b.length()) {
    cout << ">";
  } else if (b.length() > a.length()) {
    cout << "<";
  } else {
    i = 0;
    while (i < a.length()) {
      if (a[i] > b[i]) {
        cout << ">";
        return 0;
      }
      if (a[i] < b[i]) {
        cout << "<";
        return 0;
      }
      i++;
    }
    cout << "=";
  }
  return 0;
}