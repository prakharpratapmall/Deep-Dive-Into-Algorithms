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
    cases()
    {
        int n;
        cin >> n;
        long long int a[n];
        // cin>>a[0];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);

        int res = 0;
        for (int i = 0; i < n; i++)
        {
            while (i < n - 1 && a[i] == a[i + 1])
                i++;
            res++;
        }
        cout << res << "\n";
    }
    return 0;
}
