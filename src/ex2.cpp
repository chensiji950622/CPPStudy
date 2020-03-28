/*
输入任意4个字符(如：abcd)， 并按反序输出(如：dcba)
*/

#include<iostream>
#include <math.h>
using namespace std;
 
int main()
{
    char lChar[4];
    while (cin>>lChar)
    {
        cout<<lChar[3]<<lChar[2]<<lChar[1]<<lChar[0];
    }
     
}