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
    lli n, m, q;
    cin >> n >> m;
    lli a[n], b[n + 1];
    b[0] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i + 1] = b[i] + a[i];
        // cout<<b[i];
    }
    int j = 1;
    for (int i = 0; i < m; i++)
    {
        cin >> q;
        while (q > b[j])
        {
            j++;
        }
        cout << (j) << " " << (q - b[j - 1]) << "\n";
    }
    return 0;
}