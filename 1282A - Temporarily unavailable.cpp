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
    int a, b, c, r;
    cin >> a >> b >> c >> r;
    // total time in coverage  given x=c has station and <=r have coverage from
    if (a > b) {
      swap(a, b);
    }

    int left = c - r;
    int right = c + r;

    // total time outside coverage= total time to reach-total time in coverage;
    int time = b - a;
    int L = max(a, left);
    int R = min(b, right);

    int covered_time = 0;
    if (L <= R) {
      covered_time = R - L;
    }
    int time_outside = time - covered_time;
    cout << time_outside << endl;
  }

  return 0;
}
