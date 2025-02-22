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
  string s;
  cin >> s;

  int x = 0, y = 0, coins = 0;
  char prev_move = 'a';
  for (int i = 0; i < n; i++) {

    char curr_move = s[i];
    if (x == y & prev_move == curr_move)
      coins++;
    if (curr_move == 'U')
      y++;
    else
      x++;

    prev_move = curr_move;
  }
  cout << coins << endl;
  return 0;
}