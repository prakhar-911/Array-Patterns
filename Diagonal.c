#include<stdio.h>
int main()
{
    int i,j,k,n,a[100][100],p;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=1;i<=n;i++)
    {
        k=i;
        for(j=1;j<=i;j++)
        {
            printf("%d ",a[k][j]);
            if(k>=1)
            k--;
        }
        printf("\n");
    }
    p=2;
    for(i=1;i<n;i++)
    {
        k=n;
        for(j=p;j<=n;j++)
        {
            printf("%d ",a[k][j]);
            k--;
        }
        p++;
        printf("\n");
    }
}
