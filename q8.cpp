#include<iostream>
using namespace std;

void pseudoBinary(int n)
{
    while(n > 0)
    {
        //calc m(a no. that has same no. of digs as n, but has
        //1 in place of non zero digs 0 in place of 0 digs)
        //e.g. 5102 == 1101 +
        int temp = n, m = 0, p = 1;
        while(temp)
        {
            int rem = temp % 10;  //5
            temp = temp/10;       //

            if(rem != 0)
                m += p;      //m = 1101
            
            p = p*10;        //p = 1000
        }

        cout << m << " ";     //1101 
        n = n - m;     //4001
    }
}

int main()
{
    // pseudoBinary(5102);
    // pseudoBinary(231);
    pseudoBinary(332);
    return 0;
}

//44 == 11 + 11 + 11 + 11
//31 == 11 + 10 + 10