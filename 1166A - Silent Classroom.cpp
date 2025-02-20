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
  vector<string> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  vector<int> f(26);
  for (auto x : v) {
    int i = x[0] - 'a';
    f[i]++;
  }
  int pairs = 0;
  for (int x : f) {
    if (x > 1) {
      // Split into two groups as evenly as possible
      int a = x / 2;
      int b = x - a;

      // Count pairs within each group
      pairs += (a * (a - 1)) / 2; // nC2 for group 1
      pairs += (b * (b - 1)) / 2; // nC2 for group 2
    }
  }
  cout << pairs << endl;

  return 0;
}
