#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];

#define endl "\n"
#define pb push_back

ll digit_prod(ll n) {
  ll z = 1;

  while (n != 0) {
    ll ld = n % 10;
    z *= ld;
    n /= 10;
  }
  return z;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  ll n;
  cin >> n;

  n++;

  ll ans = 0;
  ll p = 1;

  while (n != 0) {
    ans = max(ans, digit_prod(n * p - 1));
    n /= 10;
    p *= 10;
  }
  cout << ans << endl;

  return 0;
}
