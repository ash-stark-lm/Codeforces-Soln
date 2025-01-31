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
    bool flag = true;

    for (int i = 0; i < n; i++) {
      sum += v[i];
      int req = ((i + 1) * i) / 2;
      if (sum < req) {
        flag = false;
        break;
      }
    }

    if (flag)
      YES;
    else
      NO;
  }

  return 0;
}