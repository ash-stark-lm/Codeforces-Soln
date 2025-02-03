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
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
      sum += v[i];
    }
    // skip zeros of starting
    int i = 0;
    while (v[i] == 0 & i < n) {
      i++;
    }

    // cnt zeros in between
    int cnt = 0;
    for (int k = i; k < n - 1; k++) {
      if (v[k] == 0)
        cnt++;
    }

    cout << cnt + sum << endl;
  }
  return 0;
}