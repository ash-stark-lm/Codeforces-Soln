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

  while (n--) {
    int x;
    cin >> x;
    // 3a+7b=x;
    bool poss = false;
    for (int b = 0; b * 7 <= x; b++) {
      if ((x - b * 7) % 3 == 0) {
        poss = true;
        break;
      }
    }
    if (poss) {
      YES;
    } else
      NO;
  }

  return 0;
}
