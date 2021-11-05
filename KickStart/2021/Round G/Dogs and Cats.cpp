#include <iostream>
using namespace std;

string feed(int n, int d, int D, int c, int C, int m, string s)
{

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'D')
        {
            if (!d)
                break;
            d--;
            D--;
            c += m;
        }
        else
        {
            if (!c)
                break;
            c--;
            C--;
        }
    }
    if (!D)
        return "YES";
    return "NO";
}

int main()
{
    int test;
    cin >> test;
    for (int ind = 1; ind <= test; ind++)
    {
        int n, d, c, m;
        cin >> n >> d >> c >> m;
        string s;
        cin >> s;
        int D = 0, C = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'D')
            {
                D++;
            }
            else
            {
                C++;
            }
        }
        cout << "Case #" << ind << ": " << feed(n, d, D, c, C, m, s) << "\n";
    }
    return 0;
}
