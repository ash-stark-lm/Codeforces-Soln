#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];

int main() {
  int n, m;
  cin >> n >> m;

  int k = min(n, m);
  if (k % 2 == 0)
    cout << "Malvika" << endl;
  else
    cout << "Akshat" << endl;
  return 0;
}
