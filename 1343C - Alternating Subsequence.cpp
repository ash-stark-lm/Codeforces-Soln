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
    vector<int> arr(n);
    inputarr(arr, n);

    int ans = 0;
    fo(i, n) {
      int maxi = LLONG_MIN;
      int j = i;
      while (j < n &&
             ((arr[j] > 0 && arr[i] > 0) || (arr[j] < 0 && arr[i] < 0))) {
        maxi = max(maxi, arr[j]);
        j++;
      }
      ans += maxi;
      i = j - 1;
    }
    cout << ans << endl;
  }
  return 0;
}