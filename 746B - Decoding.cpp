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

  string ans = "";

  for (int i = 0; i < n; i++) {
    if (ans.size() % 2 == 0) {
      ans = s[i] + ans;
    } else {
      ans = ans + s[i];
    }
  }
  if (n & 1)
    reverse(ans.begin(), ans.end());
  cout << ans << endl;
  return 0;
}