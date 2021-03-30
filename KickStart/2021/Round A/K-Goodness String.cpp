#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int ind = 1; ind <= test; ind++)
    {
        int n, k, c = 0, ans;
        cin >> n >> k;
        string s;
        cin >> s;
        for (int i = 0, j = n - 1; i < j; i++, j--)
        {
            if (s[i] != s[j])
                c++;
        }
        if (c > k)
            ans = c - k;
        else if (c < k)
            ans = k - c;
        else
            ans = 0;
        printf("Case #%d: %d\n", ind, ans);
    }
    return 0;
}