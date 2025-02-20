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
  if (n == 1) {
    YES;
    return 0;
  }

  bool possible = false;
  // if there is any one having teo same color then possible
  sort(s.begin(), s.end());
  for (int i = 0; i < n - 1; i++) {
    if (s[i] == s[i + 1]) {
      possible = true;
      break;
    }
  }
  if (possible)
    YES;
  else
    NO;

  return 0;
}
