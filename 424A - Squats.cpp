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
  int stand = 0;
  for (char c : s) {
    if (c == 'X')
      stand++;
  }
  int ans = n / 2 - stand;
  cout << abs(ans) << endl;
  if (ans < 0) {
    // we need to make sit
    int cnt = 0;
    for (int i = 0; i < n; i++) {
      if (cnt == abs(ans))
        break;
      if (s[i] == 'X') {
        s[i] = 'x';
        cnt++;
      }
    }
  } else {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
      if (cnt == ans)
        break;
      if (s[i] == 'x') {
        s[i] = 'X';
        cnt++;
      }
    }
  }
  cout << s << endl;

  return 0;
}