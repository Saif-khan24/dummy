#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1 = "how", str2 = "are", str3 = "you";
    // cin >> str1;    //replace all vowels by $
    // cin >> str2;   //all consonants by #
    // cin >> str3;       //convert all char to upper case

    string ans; //concanate all string and print
    //how are you == h$$a#eYOU
    string nstr1 = "";
    for(int i=0; i<str1.length(); i++)
    {
        if(str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u')
        str1[i] = '$';
    }

    for(int i=0; i<str2.length(); i++)
    {
        if(str2[i] != 'a' && str2[i] != 'e' &&str2[i] != 'i' &&str2[i] != 'o' &&str2[i] != 'u')
        str2[i] = '#';
    }

    for(int i=0; i<str3.length(); i++)
    {
        if(str3[i] >= 97 && str3[i] <=122)
        str3[i] = str3[i] - 32;
    }

    cout << str1 + str2 + str3;
    return 0;
}