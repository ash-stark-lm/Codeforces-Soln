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

  int n, m;
  cin >> n >> m;
  int a, b;
  cin >> a >> b;
  vector<int> arr1(n);
  vector<int> arr2(m);
  for (int i = 0; i < n; i++) {
    cin >> arr1[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> arr2[i];
  }

  int maxi1 = arr1[a - 1];
  int mini2 = arr2[m - b];

  if (maxi1 < mini2)
    YES;
  else
    NO;

  return 0;
}