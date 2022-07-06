#include <bits/stdc++.h>
#include <list>
using namespace std;
#define cases()       \
    int test_case;    \
    cin >> test_case; \
    while (test_case--)
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define VI vector<int>
#define PB push_back
#define lli long long int
#define d 1000000007
int main()
{
    int n;
    cin >> n;
    lli a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int max = (n - 1) / 2;
    cout << max << "\n";
    for (int i = 0; i < max; i++)
    {
        cout << a[i + max] << " " << a[i] << " ";
    }
    if (n % 2 == 0)
        cout << a[n - 2] << " ";
    cout << a[n - 1];
    return 0;
}