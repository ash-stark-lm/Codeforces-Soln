#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

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
    // if(s is of the form 11110000 then only one kmove req

    int i = 0;
    while (s[i] == '0' && i < n)
      i++;
    // cnt alternate sequence of 1 nad 0 total
    int cnt = 0;
    while (i < n) {
      if ((s[i] == '0' && s[i + 1] == '1') ||
          (s[i] == '1' && s[i + 1] == '0')) {
        cnt++;
      }
      i++;
    }
    cout << cnt << endl;
  }
  return 0;
}
