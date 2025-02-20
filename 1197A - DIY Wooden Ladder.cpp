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

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vi(n);
    sort(v.begin(), v.end());
    int max_k = 0;

    for (int k = 1; k <= n - 2; ++k) {
      // Check if the last two planks can be the base (length >= k+1)
      if (v[n - 2] >= k + 1 && v[n - 1] >= k + 1) {
        // Check if there are at least k planks for the steps
        if (n - 2 >= k) {
          max_k = k;
        }
      }
    }
    cout << max_k << endl;
  }
  return 0;
}
