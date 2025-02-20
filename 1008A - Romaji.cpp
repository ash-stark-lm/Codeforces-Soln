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

  string s;
  cin >> s;

  unordered_map<char, int> vowel;
  vowel['a'] = 1;
  vowel['e'] = 1;
  vowel['i'] = 1;
  vowel['o'] = 1;
  vowel['u'] = 1;

  bool ans = true;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == 'n')
      continue;
    else if (vowel.find(s[i]) == vowel.end() &&
             vowel.find(s[i + 1]) == vowel.end()) {
      ans = false;
      break;
    }
  }
  if (ans)
    YES;
  else
    NO;

  return 0;
}
