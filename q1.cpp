#include<iostream>
using namespace std;

int main()
{
    int n, k, r, w;
    cin >> n >> k;
    for(int i=0; i<n; i++)
    cin >>r >> w;

    cout << n << k;
    for(int i=0;i<n;i++)
    cout << r << " " << w << "\n";
    return 0;
}