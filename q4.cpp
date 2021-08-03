#include<iostream>
using namespace std;

void fun(int n)
{
    if(n <= 0)
    return;
    int ans = 1;

    if(n%2 != 0){
        for(int i=1; i<n-1;i+=2)
            ans = ans*2;
    }
    else{
        for(int i=1; i<n-1;i+=2)
            ans = ans*3;
    }

    cout << ans << "\n";
}

int main()
{
    int n;
    fun(4);
    fun(6);
    fun(1);
    fun(2);
    fun(10);
    fun(15);
    return 0;
}