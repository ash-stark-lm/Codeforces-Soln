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

  string s, t;
  cin >> s >> t;

  int i = s.length() - 1;
  int j = t.length() - 1;

  while (i >= 0 && j >= 0) {
    if (s[i] == t[j]) {

      i--;
      j--;

    } else
      break;
  }
  int len_to_delete = i + 1 + j + 1;

  cout << len_to_delete << endl;

  return 0;
}