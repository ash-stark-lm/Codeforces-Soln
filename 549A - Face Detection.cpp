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
  int n, m;
  cin >> n >> m;
  vector<string> grid(n);

  for (int i = 0; i < n; i++)
    cin >> grid[i];

  int count = 0;

  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < m - 1; j++) {
      // Extract characters in the 2x2 square
      set<char> s = {grid[i][j], grid[i][j + 1], grid[i + 1][j],
                     grid[i + 1][j + 1]};

      // Check if it contains exactly 'f', 'a', 'c', 'e'
      if (s == set<char>{'f', 'a', 'c', 'e'}) {
        count++;
      }
    }
  }

  cout << count << endl;
  return 0;
}