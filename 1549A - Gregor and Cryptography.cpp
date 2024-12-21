#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];

#define endl "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    // if n is even then n%2==0 and n%n=0
    if (n % 2 == 0) {
      cout << 2 << " " << n << endl;
    }
    // else n%2=1 & n%(n-1)=1
    else
      cout << 2 << " " << n - 1 << endl;
  }

  return 0;
}
