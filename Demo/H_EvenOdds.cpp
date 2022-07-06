#include <bits/stdc++.h>
#include <string.h>
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
#define lld long long int
int main()
{
    IOS
#ifdef PRAKHAR
        freopen("C:\\COMPETE\\input.txt", "r", stdin);
    freopen("C:\\COMPETE\\output.txt", "w", stdout);
    freopen("C:\\COMPETE\\error.txt", "w", stderr);
#endif
    long long int n, k;
    cin >> n >> k;
    // cout<<n/2<<"\n";
    if (n % 2 == 0)
    {
        if (k > n / 2)
            cout << (k - n / 2) * 2;
        else
            cout << 2 * k - 1;
    }
    else
    {
        if (k <= n / 2 + 1)
            cout << 2 * k - 1;
        else
            cout << (k - n / 2 - 1) * 2;
    }
}