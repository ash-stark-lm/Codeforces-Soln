#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];

#define endl "\n"
#define pb push_back
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  ll n, m;
  cin >> n >> m;
  ll ans = 0;

  for (ll a = 0; a * a <= n; a++) {
    for (ll b = 0; b * b <= m; b++) {
      if ((a * a + b == n) && (b * b + a == m))
        ans++;
    }
  }
  cout << ans << endl;

  return 0;
}
