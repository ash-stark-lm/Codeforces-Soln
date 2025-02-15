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

    vector<int> a(n), b(n);
    inputarr(a, n);
    inputarr(b, n);

    int maxi_b = *max_element(b.begin(), b.end());
    int total_sum = 0;
    for (int x : a)
      total_sum += x;
    for (int x : b)
      total_sum += x;
    total_sum -= maxi_b;
    cout << total_sum << endl;
  }

  return 0;
}