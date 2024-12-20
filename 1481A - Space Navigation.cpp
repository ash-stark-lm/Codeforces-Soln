#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];

int main() {

  int t;
  cin >> t;

  while (t--) {
    int x, y;
    cin >> x >> y;

    string s;
    cin >> s;

    int startx = 0, starty = 0;

    int upreq = 0, downreq = 0, leftreq = 0, rightreq = 0;
    int in_x = x - startx, in_y = y - starty;
    if (in_x > 0)
      rightreq += abs(in_x);
    if (in_x < 0)
      leftreq += abs(in_x);
    if (in_y > 0)
      upreq += abs(in_y);
    if (in_y < 0)
      downreq += abs(in_y);

    int cnt_U = 0, cnt_D = 0, cnt_L = 0, cnt_R = 0;
    for (auto &c : s) {
      if (c == 'U')
        cnt_U++;
      if (c == 'D')
        cnt_D++;
      if (c == 'L')
        cnt_L++;
      if (c == 'R')
        cnt_R++;
    }
    if (cnt_U >= upreq && cnt_D >= downreq && cnt_L >= leftreq &&
        cnt_R >= rightreq) {
      cout << "YES" << endl;
    } else
      cout << "NO" << endl;
  }
  return 0;
}