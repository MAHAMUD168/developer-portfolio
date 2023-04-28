#include <iostream>
using namespace std;
int main()
{
    int n, temp;
    cin >> n;

    int t[n * 2];
    for (int i = 0; i < n * 2; i++)
    {
        cin >> t[i];
    }
    temp = t[1] - t[2] + t[3];
    int tem = t[1] - t[2] + t[3];
    for (int i = 4; i < n * 2; i++)
    {
        if (i % 2 == 0)
        {
            tem = tem - t[i] + t[i + 1];
            if (temp < tem)
                temp = tem;
        }
    }
    cout << temp;
}