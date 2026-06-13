# include <stdio.h>
int main()
{
    int i,j,m,n;
    printf("Enter the number of rows:\n");
    scanf("%d",&m);
    printf("Enter the number of columns:\n");
    scanf("%d",&n);
    int a[m][n];
    printf("Enter the elements\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("now after transversing:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}   
