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
        lli n;
        int i;
        cin >> n;
        for (i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                cout << n / i << " " << n - n / i;
                break;
            }
        }
        if (i * i > n)
            cout << n - 1 << " " << 1;
        cout << "\n";
    }
    return 0;
}