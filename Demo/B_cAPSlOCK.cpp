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

    string a;
    cin >> a;
    for (int i = 1; i < a.length(); i++)
    {
        if (islower(a[i]))
        {
            cout << a;
            return 0;
        }
    }
    for (int i = 0; i < a.length(); i++)
    {
        if (islower(a[i]))
        {
            a[i] = toupper(a[i]);
        }
        else
        {
            a[i] = tolower(a[i]);
        }
    }
    cout << a;
    return 0;
}