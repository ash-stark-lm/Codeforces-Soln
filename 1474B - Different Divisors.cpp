#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];

#define endl "\n"

bool isPrime(ll n) {
  if (n < 2)
    return false;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0)
      return false;
  }
  return true;
}

ll findNextPrime(ll start) {
  while (!isPrime(start)) {
    start++;
  }
  return start;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  ll t;
  cin >> t;
  while (t--) {
    ll d;
    cin >> d;

    ll p = findNextPrime(d + 1);
    ll q = findNextPrime(p + d);

    cout << p * q << endl;
  }
  /*
   ll t;
  cin >> t;
  while (t--) {
    ll d;
    cin >> d;

    ll a, b;
    for (ll i = d + 1;; i++) {
      ll cnt = 0;
      for (ll j = 2; j * j <= i; j++) {
        if (i % j == 0)
          cnt++;
      }
      if (cnt == 0) {
        a = i;
        break;
      }
    }
    for (ll i = a + d;; i++) {
      ll cnt = 0;
      for (ll j = 2; j * j <= i; j++) {
        if (i % j == 0)
          cnt++;
      }
      if (cnt == 0) {
        b = i;
        break;
      }
    }

    cout << min(a * b, a * a * b) << endl;
  }
*/

  return 0;
}
