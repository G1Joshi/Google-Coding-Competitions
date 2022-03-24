#include <iostream>
using namespace std;

int speed(string I, string P)
{
    if (I == P)
        return 0;
    int c = 0, i = 0, j = 0, m = I.length(), n = P.length();
    while (j < n)
    {
        if (I[i] == P[j])
        {
            i++;
            j++;
        }
        else
        {
            c++;
            j++;
        }
    }
    if (i == m)
        return c;
    return -1;
}

int main()
{
    int test;
    cin >> test;
    for (int ind = 1; ind <= test; ind++)
    {
        int ans = 0;
        string I, P;
        cin >> I >> P;
        int t = speed(I, P);
        if (t == -1)
            cout << "Case #" << ind << ": "
                 << "IMPOSSIBLE"
                 << "\n";
        else
            cout << "Case #" << ind << ": " << t << "\n";
    }
    return 0;
}
