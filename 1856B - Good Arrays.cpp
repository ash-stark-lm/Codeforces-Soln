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
    if (n == 1) {
      cout << "NO" << endl;
      continue;
    }
    int minsum = 0;
    int sum = 0;

    for (int x : v) {
      sum += x;
      if (x == 1) {
        minsum += 2;
      } else {
        minsum += 1;
      }
    }
    if (minsum <= sum)
      YES;
    else
      NO;
  }

  return 0;
}