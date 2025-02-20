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
  vi(n);
  sort(v.begin(), v.end());
  int i = 0, j = n - 1;
  int x = 0, y = 0;
  while (i <= j) {
    if (i == j) {
      x += v[i];
      break;
    }
    x += v[j];
    y += v[i];
    j--;
    i++;
  }

  int max_dist = x * x + y * y;
  cout << max_dist << endl;

  return 0;
}