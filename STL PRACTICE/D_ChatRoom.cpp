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
    string a = "hello";
    string b;
    int c = 0;
    cin >> b;
    for (int i = 0; i < 5; i++)
    {
        int j = c;
        for (; j < b.length(); j++)
        {
            if (b[j] == a[i])
            {
                c = j + 1;
                break;
            }
        }
        if (j == b.length())
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
