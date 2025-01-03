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
    int n, x;
    cin >> n >> x;
    vi(n);

    int max_beauty = 0;
    int sum = 0;
    fo(i, n) {
      sum += v[i];
      max_beauty += (v[i] + x - 1) / x; // integer-based ceiling
    }

    int min_beauty = (sum + x - 1) / x; //  integer-based ceiling

    cout << min_beauty << " " << max_beauty << endl;
  }
  return 0;
}