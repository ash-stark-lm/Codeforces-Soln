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
    int maxi = *max_element(v.begin(), v.end());

    int ind = -1;

    for (int i = 0; i < n; i++) {
      if (i - 1 >= 0 && v[i] == maxi && v[i - 1] < maxi) {
        ind = i;
        break;
      } else if (i + 1 < n && v[i] == maxi && v[i + 1] < maxi) {
        ind = i;
        break;
      }
    }
    if (ind != -1)
      cout << ind + 1 << endl; // 1 based indexing
    else
      cout << -1 << endl;
  }

  return 0;
}