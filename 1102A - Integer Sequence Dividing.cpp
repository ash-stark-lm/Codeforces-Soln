#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];

#define fo(i, n) for (int i = 0; i < n; i++)

int main() {

  ll n;
  cin >> n;
  if (n == 0 || n == 3) {
    cout << 0 << endl;
  } else {
    cout << 1 << endl;
  }

  /* Other method
  int n;
  cin >> n;

 unsigned ll totalsum=(n*(n+1))/2;
 cout<<totalsum%2<<endl;

  */

  return 0;
}