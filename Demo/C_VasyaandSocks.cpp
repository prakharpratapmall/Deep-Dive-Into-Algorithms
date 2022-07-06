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
    int n, m, d = 0;
    cin >> n >> m;
    while (n)
    {
        d++;
        if (d >= m && d % m == 0)
            n++;
        n--;
    }
    cout << d;
    return 0;
}
