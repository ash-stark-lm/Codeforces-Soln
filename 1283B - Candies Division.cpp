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

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;

    // first distribute evenly
    int r = k / 2;
    int evenly = n / k;
    int max_sum = evenly * k;

    int rem_candies = n - max_sum;
    // we can increment 1 candy for at max k/2 child
    int max_inc = min(r, rem_candies);
    max_sum += max_inc;
    cout << max_sum << endl;
  }

  return 0;
}