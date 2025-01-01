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
  ll n, m;
  cin >> n >> m;

  // last digits of 1-n

  vector<ll> cnt_ld_x(10);
  for (ll i = 1; i <= n; i++) {
    ll last = i % 10;
    cnt_ld_x[last]++;
  }

  // last digit of 1-m

  vector<ll> cnt_ld_y(10);
  for (ll i = 1; i <= m; i++) {
    ll last = i % 10;
    cnt_ld_y[last]++;
  }

  // pairs of x, y such  that (x+y)%5= 0
  // x=1 => y={4,9} , x=2 => y={3,8} , x=3 => y={2,7} , x=4 => y={1,6} , x=5 =>
  // y={0,5} , x=6 => y={9,4} , x=7 => y={8,3} , x=8 => y={7,2} , x=9 => y={6,1}
  // , x=0 => y={5,0}
  ll ans = 0;

  for (ll i = 0; i < 10; i++) {
    // Required complementary digit to make (i + j) % 5 == 0
    ll complement = (5 - i % 5) % 5;

    // Match last digit i from x with valid last digits from y
    for (ll j = 0; j < 10; j++) {
      if (j % 5 == complement) {
        ans += cnt_ld_x[i] * cnt_ld_y[j];
      }
    }
  }

  cout << ans << endl;

  return 0;
}
