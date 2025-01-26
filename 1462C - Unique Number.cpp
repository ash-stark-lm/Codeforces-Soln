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
    int x;
    cin >> x;

    string s = "987654321";
    int n = s.size();

    if (x > 45) {
      cout << -1 << endl;
      continue;
    }

    string ans = "";
    int sum = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] - '0' <= x) {
        sum += s[i] - '0';
        ans += s[i];
        x -= s[i] - '0';
      }
    }
    reverse(ans.begin(), ans.end());
    int num = stoi(ans);
    cout << num << endl;
  }

  return 0;
}