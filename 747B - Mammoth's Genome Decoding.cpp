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
  string s;
  cin >> s;

  if (n % 4 != 0) {
    cout << "===" << endl;
    return 0;
  }

  vector<int> f(4, 0);
  for (int i = 0; i < n; i++) {
    if (s[i] == 'A')
      f[0]++;
    if (s[i] == 'C')
      f[1]++;
    if (s[i] == 'G')
      f[2]++;
    if (s[i] == 'T')
      f[3]++;
  }
  int m = n / 4;
  for (int i = 0; i < 4; i++) {
    if (f[i] > m) {
      cout << "===" << endl;
      return 0;
    }
  }

  for (int i = 0; i < n; i++) {
    if (s[i] == '?') {
      for (int j = 0; j < 4; j++) {
        if (f[j] < m) {
          s[i] = "ACGT"[j];
          f[j]++;
          break;
        }
      }
    }
  }
  cout << s << endl;

  return 0;
}