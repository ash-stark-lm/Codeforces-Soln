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
  vector<vector<char>> v(n, vector<char>(n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> v[i][j];
    }
  }
  bool possible = true;
  for (int i = 1; i < n - 1; i++) {
    for (int j = 1; j < n - 1; j++) {
      if (v[i][j] == '.' && v[i - 1][j] == '.' && v[i + 1][j] == '.' &&
          v[i][j - 1] == '.' && v[i][j + 1] == '.') {
        v[i][j] = '#';
        v[i - 1][j] = '#';
        v[i + 1][j] = '#';
        v[i][j + 1] = '#';
        v[i][j - 1] = '#';
      }
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (v[i][j] == '.') {
        possible = false;
        break;
      }
    }
  }
  if (possible)
    YES;
  else
    NO;

  return 0;
}