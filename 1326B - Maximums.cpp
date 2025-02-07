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
  vector<int> b(n);
  inputarr(b, n);
  vector<int> a(n);

  /*int cur_sum = 0;
  int maxi = 0;
  for (int i = 0; i < n; i++) {
    cur_sum = maxi + b[i];
    maxi = max(maxi, cur_sum);
    a[i] = cur_sum;
  }
  for (int x : a) {
    cout << x << " ";
  }
  cout << endl;*/
  int x = 0;
  for (int i = 0; i < n; i++) {
    a[i] = b[i] + x;
    x = max(x, a[i]);
  }
  for (int x : a) {
    cout << x << " ";
  }
  cout << endl;

  return 0;
}