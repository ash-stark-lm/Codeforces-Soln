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

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  string s;
  cin >> s;
  int n = s.size();
  int i = 0;
  while (i < n) {
    if (s.substr(i, 3) == "144") { // Extract substring of length 3
      i += 3;
    } else if (s.substr(i, 2) == "14") { // Extract substring of length 2
      i += 2;
    } else if (s[i] == '1') { // Check a single character
      i++;
    } else {
      NO; // Invalid sequence
      return 0;
    }
  }
  YES;
  return 0;
}
