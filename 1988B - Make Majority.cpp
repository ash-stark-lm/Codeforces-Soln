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
    int n;
    cin >> n;

    string s;
    cin >> s;
    // count_of conitnuous zeros
    int cnt_0 = 0;
    int cnt_1 = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] == '1')
        cnt_1++;
      else {
        cnt_0++;
        while (s[i] == '0') {
          i++;
          if (s[i] == '1')
            cnt_1++;
        }
      }
    }

    if (cnt_1 > cnt_0)
      YES;
    else
      NO;
  }
  return 0;
}