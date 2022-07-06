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
    cases()
    {
        int n;
        cin >> n;
        int ans = 0;
        for (int i = 3; i * i <= 2 * n - 1; i += 2)
            ++ans;
        cout << ans << '\n';
    }
    return 0;
}