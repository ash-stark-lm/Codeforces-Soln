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

  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  sort(s.begin(), s.end());
  // value of each char is s[i]-'a'+1

  // take first char and then take greedily
  string ans = "";
  int len = 0;
  int wt = 0;
  for (int i = 0; i < s.length(); i++) {
    if (len == k) {
      break;
    }
    if (ans.empty() || abs(ans[len - 1] - s[i]) > 1) {
      ans += s[i];
      len++;
      wt += s[i] - 'a' + 1;
    }
  }
  if (len == k) {
    cout << wt << endl;
  } else {
    cout << -1 << endl;
  }

  return 0;
}
