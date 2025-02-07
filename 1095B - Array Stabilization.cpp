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
  sort(v.begin(), v.end());
  int mini = v[0];
  int second_mini = v[1];
  int maxi = v[n - 1];
  int second_maxi = v[n - 2];

  int ans = min({maxi - mini, maxi - second_mini, second_maxi - mini});
  cout << ans << endl;

  return 0;
}