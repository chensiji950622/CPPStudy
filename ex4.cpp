/*
给出一个长度不超过1000的字符串，判断它是不是回文(顺读，逆读均相同)的。
*/

#include<iostream>
#include<cstring>
using namespace std;
 
int main()
{
    int iLen;
    char *a = new char[1000];
    while (cin>>a)
    {
        string s = "Yes!";
        iLen = strlen(a);
        for(int i = 0;i<=iLen/2;i++)
        {
           if(a[i]!=a[iLen-i-1])
            {
            s = "No!";
            break; 
            }
        }
        cout<<s;
    }
}