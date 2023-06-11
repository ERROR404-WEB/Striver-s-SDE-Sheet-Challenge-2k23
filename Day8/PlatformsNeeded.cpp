int calculateMinPatforms(int at[], int dt[], int n) {
    sort(at,at+n);
    sort(dt,dt+n);
    int c=1,i=0,j=1;
    while(j<n)
    {
        if(at[j]>dt[i]) i++;
        else c++;
        j++;
    }
    return c;
}

https://www.codingninjas.com/codestudio/problems/minimum-number-of-platforms_8230720?challengeSlug=striver-sde-challenge&leftPanelTab=1