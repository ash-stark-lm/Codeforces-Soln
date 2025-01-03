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
    string s;
    cin >> s;
    int n = s.length();
    vector<int> freq(26, 0);
    for (int i = 0; i < n; i++) {
      freq[s[i] - 'a']++;
    }
    int ans = 0;
    int single_occ = 0;
    for (int i = 0; i < 26; i++) {
      if (freq[i] >= 2) {
        ans++;
        freq[i] = 0;
      }
      if (freq[i] == 1) {
        single_occ++;
      }
    }
    // check for single occurence chars
    ans += single_occ / 2;
    cout << ans << endl;
  }

  return 0;
}