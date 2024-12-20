#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];

#define fo(i, n) for (int i = 0; i < n; i++)

int main() {

  int n;
  cin >> n;

  vector<int> a(n);
  fo(i, n) { cin >> a[i]; }
  int m;
  cin >> m;
  vector<int> b(m);
  fo(i, m) { cin >> b[i]; }

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  cout << a.back() << " " << b.back() << endl;

  return 0;
}