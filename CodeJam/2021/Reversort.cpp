#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

int mini(vector<int> &v, int l, int r)
{
    int j = l, m = v[l];
    for (int i = l + 1; i <= r; i++)
    {
        if (v[i] < m)
        {
            m = v[i];
            j = i;
        }
    }
    return j;
}

int main()
{
    int test;
    cin >> test;
    for (int ind = 1; ind <= test; ind++)
    {
        int n, ans = 0;
        cin >> n;
        vector<int> v(n);
        for (auto &a : v)
            cin >> a;
        for (int i = 0; i < n - 1; i++)
        {
            int j = mini(v, i, n - 1);
            reverse(v.begin() + i, v.begin() + j + 1);
            ans += (j - i + 1);
        }
        printf("Case #%d: %d\n", ind, ans);
    }
    return 0;
}