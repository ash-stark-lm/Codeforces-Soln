#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];

int main() {

  string s;
  cin >> s;
  int n = s.length();

  int cnt_0 = 0, cnt_1 = 0;
  bool dangerous = false;

  for (int i = 0; i < n; i++) {
    if (cnt_0 >= 7 || cnt_1 >= 7) {
      dangerous = true;
      break;
    }
    if (s[i] == '0') {
      cnt_1 = 0;
      cnt_0++;

    } else {
      cnt_1++;
      cnt_0 = 0;
    }
  }
  if (cnt_0 >= 7 || cnt_1 >= 7)
    dangerous = true;
  if (dangerous)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}