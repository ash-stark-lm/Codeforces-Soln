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

int findMaxPowerOf2(int m) {
  if (m < 1)
    return 0; // No valid power of 2 exists if m < 1.

  int k = 1;
  while (k * 2 <= m) {
    k *= 2;
  }
  return k;
}
signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  int n, b, p;
  cin >> n >> b >> p;

  int bottles = 0;
  int towel = n * p;

  while (n > 1) {
    int k = findMaxPowerOf2(n);       // Find the largest power of 2 <= n
    int matches = k / 2;              // Number of matches in this round
    bottles += matches * (2 * b + 1); // Bottles used in this round
    n -= matches;
  }
  cout << bottles << " " << towel << endl;

  return 0;
}