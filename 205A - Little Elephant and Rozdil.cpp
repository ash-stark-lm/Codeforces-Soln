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

  int n;
  cin >> n;
  vi(n);
  int cnt_mini = 0;
  int ind = 0;
  int mini = *min_element(v.begin(), v.end());
  for (int i = 0; i < n; i++) {
    if (v[i] == mini) {
      cnt_mini++;
      ind = i;
    }
  }
  if (cnt_mini > 1)
    cout << "Still Rozdil" << endl;
  else
    cout << ind + 1 << endl;

  return 0;
}