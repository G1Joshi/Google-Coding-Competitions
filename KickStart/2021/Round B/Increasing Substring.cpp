#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int ind = 1; ind <= test; ind++)
    {
        int n, c = 1;
        cin >> n;
        string s;
        cin >> s;
        printf("Case #%d: ", ind);
        cout << c << " ";
        for (int i = 1; i < n; i++)
        {
            if (s[i] > s[i - 1])
                c++;
            else
                c = 1;
            cout << c << " ";
        }
        cout << "\n";
    }
    return 0;
}