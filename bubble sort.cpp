what are things and its economy pricing in IOT??
#include<stdio.h>
int main(){
    int arr[100],n,temp;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    printf("before sorting\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);

    }
    
    for(int i=0;i<=n-1;i++)
    {
        for(int j=0;j<=n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("after sorting\n");
        for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);

    }
   


    
   
    return 0;
}