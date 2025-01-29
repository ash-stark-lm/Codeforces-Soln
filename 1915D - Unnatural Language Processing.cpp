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

bool isCon(char ch) { return ch == 'b' || ch == 'c' || ch == 'd'; }

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
    vector<string> ans;

    for (int i = 0; i < n; i++) {
      if (isCon(s[i]) && i + 1 < n && !isCon(s[i + 1])) {
        string word = "";
        word += s[i];
        word += s[i + 1];
        ans.pb(word);
        i++;
      } else {
        string word = ans.back();
        ans.pop_back();
        word += s[i];
        ans.pb(word);
      }
    }

    int len = ans.size();
    for (int i = 0; i < len; i++) {
      if (i != len - 1) {
        cout << ans[i] << ".";
      } else {
        cout << ans[i] << endl;
      }
    }
  }
  return 0;
}