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

int countGoodPairs(vector<int> &arr) {
  int n = arr.size();
  int count = 0;

  // Iterate over all pairs (i, j) with i < j
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (__gcd(arr[i], 2 * arr[j]) > 1) {
        count++;
      }
    }
  }

  return count;
}

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vi(n);

    vector<int> even;
    vector<int> odd;
    fo(i, n) {
      if (v[i] % 2 == 0)
        even.pb(v[i]);
      else
        odd.pb(v[i]);
    }
    int e = even.size();
    int o = n - e;

    int ans = 0;
    // pairs by taking one from even and one from odd
    ans += e * o;

    // pairs by taking both from even as gcd of two even number is always >=2;
    ans += e * (e - 1) / 2;

    // pairs by taking both from odd side;
    int cnt = countGoodPairs(odd);
    ans += cnt;
    cout << ans << endl;
  }
  return 0;
}