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

bool isStrongPassword(string &s) {
  vector<char> digits, letters;
  bool letterFound = false;

  for (char c : s) {
    if (isdigit(c)) {
      digits.push_back(c);
      if (letterFound)
        return false;
    } else if (isalpha(c)) {
      letters.push_back(c);
      letterFound = true;
    }
  }

  if (!is_sorted(digits.begin(), digits.end()))
    return false;

  if (!is_sorted(letters.begin(), letters.end()))
    return false;

  return true;
}

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

    if (isStrongPassword(s))
      YES;
    else
      NO;
  }

  return 0;
}