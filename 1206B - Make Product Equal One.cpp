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
  int cost = 0;
  int neg_cnt = 0, zeros = 0;

  for (int x : v) {
    if (x > 0) {
      cost += x - 1; // reduce to 1
    } else if (x < 0) {
      neg_cnt++;
      cost += abs(x) - 1; // reduce to -1
    } else if (x == 0) {
      zeros++;
      cost += 1; // 0 to 1 or -1 as per req
    }
  }

  if (neg_cnt % 2 == 1 && zeros == 0) {
    cost += 2;
  }
  cout << cost << endl;

  return 0;
}