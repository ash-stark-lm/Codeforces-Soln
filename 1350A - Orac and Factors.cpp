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

vector<int> primes;               // To store prime numbers
vector<bool> is_prime(1e7, true); // To mark primes

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

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;

    // logic every even number has a 2 factor
    //  every prime number has only one factor
    // just check if it is prime

    sieve(n);
    if (n % 2 == 0) {
      cout << n + 2 * k << endl;
    } else {
      // find first factor of it
      for (int prime : primes) {
        if (n % prime == 0) {
          n += prime;
          break;
        }
      }
      cout << n + (2 * (k - 1)) << endl;
    }
  }
  return 0;
}

/*
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

int smallest_divisor(int n) {
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0)
      return i;
  }
  return n; // If no divisor found, n is prime
}

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;

    // logic every even number has a 2 factor
    //  every prime number has only one factor
    // just check if it is prime

    int f = smallest_divisor(n);
    n += f;
    k--;

    cout << n + (2 * k) << endl;
  }
  return 0;
}
*/