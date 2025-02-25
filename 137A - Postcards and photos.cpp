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
  int ans = 0;

  for (int i = 0; i < n; i++) {
    int curr = 1;
    while (s[i] == s[i + 1] && curr < 5 && i < n) {
      i++;
      curr++;
    }
    ans++;
  }
  cout << ans << endl;

  return 0;
}