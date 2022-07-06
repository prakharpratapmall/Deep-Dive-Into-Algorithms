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
    int n;
    cin >> n;
    long long int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = 0;
    }
    sort(a, a + n);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (b[j] == 0 && a[j] > a[i])
            {
                b[j] = 1;
                a[i] = 0;
                break;
            }
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
            count++;
    }
    cout << count;
    return 0;
}
