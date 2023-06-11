#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{
    vector<int>v={1,2,5,10,20,50,100,500,1000};
    int c=0,n=9;
    for(int i=n-1;i>=0;i--)
    {
        while(amount>=v[i])
        {
            amount-=v[i];
            c++;
        }
        
    }
    return c;
}
// https://www.codingninjas.com/codestudio/problems/975277?topList=striver-sde-sheet-problems&leftPanelTab=1