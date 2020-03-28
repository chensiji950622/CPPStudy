/*
输入n个整数,依次输出每个数的约数的个数
*/

#include<iostream>
#include <math.h>
using namespace std;
 
int GetOutput(int Num)
{
    int n = sqrt(Num);
    int count = 0;
    if(n * n == Num)
    {
        count++;
        n--;
    }
    for(int j = 1; j <= n; j++)
    {
        if(Num % j == 0)
        {
            count += 2;
        }
    }
    return count;
}
 
int main(){
    int iCnt;
    while (cin>>iCnt)
    {
        int* lInput = new int[iCnt];
        int* lOutput = new int[iCnt];
        for(int i=0;i<iCnt;i++)
        {
            cin>>lInput[i];
            lOutput[i] = GetOutput(lInput[i]);
        }
        for(int i=0;i<iCnt;i++)
        {
            cout<<lOutput[i]<<endl;
        }
    }
}