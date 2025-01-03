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
    string result;

    bool flip = true;

    if (s[0] == '1') {

      flip = !flip;
    }

    for (int i = 1; i < n; i++) {
      if (s[i] == '1') {
        result += (flip ? '+' : '-');
        flip = !flip; // Alternate the sign
      } else {
        result += '+'; // For '0', sign doesn't matter
      }
    }

    cout << result << endl;
  }

  return 0;
}