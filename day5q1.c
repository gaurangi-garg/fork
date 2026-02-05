// Problem: A system receives two separate logs of user arrival times from two different servers. Each log is already sorted in ascending order. Your task is to create a single chronological log that preserves the correct order of arrivals.
# include <stdio.h>
# include <stdlib.h>
int main(){
    int p;
    scanf("%d",&p);
    int *arr1=(int *)malloc(p*sizeof(int));
    for(int i=0;i<p;i++){
        scanf("%d",&arr1[i]);
    }
    int q;
    scanf("%d",&q);
    int arr2[q];
    for(int i=0;i<q;i++){
        scanf("%d",&arr2[i]);
    }
    arr1=(int *)realloc(arr1,(p+q)*sizeof(int));
    int m=p+q-1;
    int j=p-1;
    int k=q-1;
    while(j>=0 && k>=0){
        if(arr1[j]>arr2[k]){
            arr1[m--]=arr1[j--];
        }
        else{
            arr1[m--]=arr2[k--];
        }
    }
    while(k>=0){
        arr1[m--]=arr2[k--];
    }
    for(int i=0;i<p+q;i++){
        printf("%d ",arr1[i]);
    }
    free(arr1);
    return 0;
}