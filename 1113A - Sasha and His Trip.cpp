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

  int n, v;
  cin >> n >> v;
  int cost = 0;
  int req_lit = n - 1;
  int curr_lit = 0;
  for (int i = 1; i < n; i++) {
    int to_fill = min(v - curr_lit, req_lit);
    curr_lit += to_fill;
    curr_lit -= 1;

    cost += to_fill * i;
    req_lit -= to_fill;
  }
  cout << cost << endl;
  return 0;
}
