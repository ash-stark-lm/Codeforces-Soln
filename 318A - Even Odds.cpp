#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];

int main() {

  ll n, k;
  cin >> n >> k;

  if (n % 2 == 0) {
    if (k <= n / 2) {
      cout << 1 + (k - 1) * 2 << endl;
    } else {
      cout << 2 + (k - n / 2 - 1) * 2 << endl;
    }
  } else {
    if (k <= n / 2 + 1) {
      cout << 1 + (k - 1) * 2 << endl;
    } else {
      cout << 2 + (k - (n / 2 + 1) - 1) * 2 << endl;
    }
  }

  return 0;
}

/*

long long odd_count = (n + 1) / 2; // n -> even then n/2 odd else n/2+1 odd

if (k <= odd_count) {
  // k-th number is odd
  cout << 2 * k - 1 << endl;
} else {
  // k-th number is even
  cout << 2 * (k - odd_count) << endl;
}

}*/
