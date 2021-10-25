#include <iostream>
using namespace std;

bool gen(int i, int g)
{
    int n = 0, j = i;
    while (n < g)
    {
        n += j++;
        if (n == g)
            return 1;
    }
    return 0;
}

int main()
{
    int test;
    cin >> test;
    for (int ind = 1; ind <= test; ind++)
    {
        int g, ans = 0;
        cin >> g;
        for (int i = 1; i <= g; i++)
            if (gen(i, g))
                ans++;
        printf("Case #%d: %d\n", ind, ans);
    }
    return 0;
}