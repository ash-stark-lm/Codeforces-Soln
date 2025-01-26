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

vector<pair<int, int>> dir = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  vector<vector<int>> init_arr(3, vector<int>(3, 1));
  vector<vector<int>> arr(3, vector<int>(3));
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> arr[i][j];
    }
  }
  // pressing a switc toggle it and side adjcent bulbs
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (arr[i][j] % 2 == 1) {
        init_arr[i][j] = !init_arr[i][j];
        for (auto d : dir) {
          int x = i + d.first;
          int y = j + d.second;
          if (x >= 0 && x < 3 && y >= 0 && y < 3) {
            init_arr[x][y] = !init_arr[x][y];
          }
        }
      }
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << init_arr[i][j];
    }
    cout << endl;
  }

  return 0;
}