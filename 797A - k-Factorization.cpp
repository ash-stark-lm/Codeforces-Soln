#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];

#define endl "\n"
#define pb push_back

vector<ll> pf(ll n) {
  vector<ll> f;

  while (n % 2 == 0) {
    f.pb(2);
    n /= 2;
  }

  for (int i = 3; i * i <= n; i++) {
    while (n % i == 0) {
      f.pb(i);
      n /= i;
    }
  }

  if (n > 2) {
    f.pb(n); // remaining prime
  }
  return f;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  ll n, k;
  cin >> n >> k;

  vector<ll> f = pf(n);

  int s = f.size();
  if (k > s) {
    cout << -1 << endl;
    return 0;
  }

  ll prod = 1;
  for (int i = 0; i < k - 1; i++) {
    cout << f[i] << " ";
  }
  for (int i = k - 1; i < f.size(); i++) {
    prod *= f[i];
  }
  cout << prod << endl;

  return 0;
}
