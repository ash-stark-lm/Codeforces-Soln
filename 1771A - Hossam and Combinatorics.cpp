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
    int n;
    cin >> n;
    vi(n);
    int cnt_maxi = 0, cnt_mini = 0;
    int maxi = *max_element(v.begin(), v.end());
    int mini = *min_element(v.begin(), v.end());

    for (int x : v) {
      if (x == mini)
        cnt_mini++;
      else if (x == maxi)
        cnt_maxi++;
    }
    if (mini == maxi) {
      // all elements are equal
      cout << n * (n - 1) << endl; // nc2
      continue;
    }
    int ans = cnt_maxi * cnt_mini * 2;
    cout << ans << endl;
  }
  return 0;
}