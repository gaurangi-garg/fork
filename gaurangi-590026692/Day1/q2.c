# include <stdio.h>
int main()
{
    int c,d;
    int arr[5]={1,2,3,4,5};
    int *ptr =&arr[0];
    c=ptr;
    d=ptr++;
    printf("%d\n",c);
    printf("%d\n",d);
    return 0;
}
