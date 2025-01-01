#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];

#define endl "\n"
#define pb push_back

ll lcm(ll a, ll b) { return (a * b) / __gcd(a, b); }

int main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  ll x;
  cin >> x;

  vector<pair<ll, ll>> factors;

  for (ll i = 1; i * i <= x; i++) {
    if (x % i == 0) {
      factors.pb({i, x / i});
    }
  }

  ll mini = LLONG_MAX;

  vector<ll> ans(2);
  for (auto [a, b] : factors) {
    if (lcm(a, b) == x) {
      mini = min(mini, max(a, b));
      ans[0] = a;
      ans[1] = b;
    }
  }

  cout << ans[0] << " " << ans[1] << endl;
  return 0;
}

/*
Better approach
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];

#define endl "\n"
#define pb push_back

int main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  ll x;
  cin >> x;

  // if gcd(A,B) = 1 then lcm(A,B) = A*B i/e x=A*B

  ll ans = LLONG_MAX;
  for (ll i = 1; i * i <= x; i++) {
    if (x % i == 0) {
      ll g = __gcd(i, x / i);
      if (g == 1) {
        ans = min(ans, max(i, x / i));
      }
    }
  }
  cout << ans << " " << x / ans << endl;

  return 0;
}

*/