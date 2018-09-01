#include<stdio.h>
int main()
{
    int n,i,j,a[100][100],m,k;
    scanf("%d",&n);
    m=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        scanf("%d",&a[i][j]);
    }
    i=j=1;
    while(i<=m&&j<=n)
    {
        for(k=j;k<=n;k++)
        printf("%d ",a[i][k]);
        i++;
        for(k=i;k<=m;k++)
        printf("%d ",a[k][n]);
        n--;
        if(i<=m)
        {
            for(k=n;k>=j;k--)
            printf("%d ",a[m][k]);
            m--;
        }
        if(j<=n)
        {
            for(k=m;k>=i;k--)
            printf("%d ",a[k][j]);
            j++;
        }
    }
}
