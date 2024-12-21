#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];

#define endl "\n"

vector<int> primes;                // To store prime numbers
vector<bool> is_prime(1005, true); // To mark primes

void sieve(int n) {
  is_prime[0] = is_prime[1] = false;
  for (int i = 2; i <= n; i++) {
    if (is_prime[i]) {
      primes.push_back(i);
      for (int j = i * i; j <= n; j += i) {
        is_prime[j] = false;
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  int n, k;
  cin >> n >> k;

  sieve(n);
  int cnt = 0;
  for (size_t i = 1; i < primes.size(); i++) {
    int sum = primes[i - 1] + primes[i] + 1;
    if (sum <= n && is_prime[sum]) {
      cnt++;
    }
  }

  if (cnt >= k)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
