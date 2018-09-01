#include<stdio.h>
int main()
{
    int n,i,j,a[100][100];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        printf("%d ",a[i][j]);
        i++;
        if(i>=n)
        break;
        for(j=n;j>=1;j--)
        printf("%d ",a[i][j]);
    }

}
