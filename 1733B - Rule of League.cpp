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

void printpattern(int temp, int k) {
  int c = 1;
  while (temp--) {
    for (int i = 1; i <= k; i++) {
      cout << c << " ";
    }
    if (c == 1)
      c++;
    c += k;
  }
}

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n, x, y;
    cin >> n >> x >> y;

    // logic each player either won x gamey or y games
    //  lets first match bw 1 2 1 won i.e 2 has 0 wins so this means either one
    //  of x or y needs to be zero
    // case 1 x=0 and y=0 then -1
    // case 2 x>0 and y>0 then -1
    // case 3 n-1 matches => n-1 winners => each player win k times let say=>
    // (n-1)%k==0 else -1

    if (x == 0 && y == 0)
      cout << -1 << endl;
    else if (x > 0 && y > 0)
      cout << -1 << endl;
    else {
      if (x == 0) {
        if ((n - 1) % y == 0) {
          int temp = (n - 1) / y;
          printpattern(temp, y);
          cout << endl;
        } else
          cout << -1 << endl;
      } else if (y == 0) {
        if ((n - 1) % x == 0) {
          int temp = (n - 1) / x;
          printpattern(temp, x);
          cout << endl;
        } else
          cout << -1 << endl;
      }
    }
  }

  return 0;
}