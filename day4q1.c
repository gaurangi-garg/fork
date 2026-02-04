//Problem: Given an array of n integers, reverse the array in-place using two-pointer approach.
# include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int left=0;
    int right=n-1;
    while(left<right){
        arr[left]=arr[left]+arr[right];
        arr[right]=arr[left]-arr[right];
        arr[left]=arr[left]-arr[right];
        left++;
        right--;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}