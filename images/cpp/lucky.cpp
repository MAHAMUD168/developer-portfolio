#include <iostream>
using namespace std;

int main()
{
    long long n;
    int f4 = 0;
    cin >> n;

    for (int i = 0; 0 < n; i++)
    {
        if (n % 10 == 4 || n % 10 == 7)
            f4++;
        n = n / 10;
    }
    if (f4 == 4 || f4 == 7)
        cout << "YES";
    else
        cout << "NO";
}