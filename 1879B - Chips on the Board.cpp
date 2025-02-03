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
    vector<int> a(n), b(n);
    inputarr(a, n);
    inputarr(b, n);
    int min_a = *min_element(a.begin(), a.end());
    int min_b = *min_element(b.begin(), b.end());
    int ans_1 = 0, ans_2 = 0;
    for (int i = 0; i < n; i++) {
      ans_1 = ans_1 + a[i] + min_b;
      ans_2 = ans_2 + b[i] + min_a;
    }

    cout << min(ans_1, ans_2) << endl;
  }
  return 0;
}