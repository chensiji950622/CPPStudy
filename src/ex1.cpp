/*
查找和排序

题目：输入任意（用户，成绩）序列，可以获得成绩从高到低或从低到高的排列,相同成绩
都按先录入排列在前的规则处理。

示例：
jack      70
peter     96
Tom       70
smith     67

从高到低  成绩
peter     96
jack      70
Tom       70
smith     67

从低到高

smith     67

jack      70
Tom      70
peter     96

*/

#include <iostream>
#include <algorithm>
using namespace std;
 
struct Score
{
    char sName[20];
    int iScore = 1;
    int idx = 0;
};
 
bool eql(const Score &x, const Score &y)
{
    return x.idx < y.idx;
}
 
bool cmp(const Score &x, const Score &y)
{
    if (x.iScore == y.iScore)
        return eql(x, y);
    else
        return x.iScore>y.iScore;
}
 
bool cmp2(const Score &x, const Score &y)
{
    if (x.iScore == y.iScore)
        return eql(x, y);
    else   
        return x.iScore<y.iScore;
}
 
 
 
int main()
{
    int iLine;
    int iMethod;
    while (cin >> iLine >> iMethod)
    {
        Score* lScore = new Score[iLine];
        for (int i=0; i<iLine; i++)
        {
             cin >> lScore[i].sName>> lScore[i].iScore;
             lScore[i].idx = i;
        }
        if (iMethod == 0)
            sort(lScore, lScore+iLine, cmp);
        else
            sort(lScore, lScore+iLine, cmp2);
        for (int i=0; i<iLine; i++)
        {
            cout << lScore[i].sName <<" "<< lScore[i].iScore << endl;
        }
    }
    // cout << iLine << iMethod << endl;
    return 0;
}