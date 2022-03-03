#include<stdio.h>
#include<math.h>
int main(){

    int n,arr[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i <= n-1; i++)
    {
        for (int j = i; j <=n-1; j++)
        {
            for (int k = i; k <=j; k++)
            {
                printf("%d ",arr[k]);

            
               
            }
            printf("\n");
            
            
        }
        
        
    }
    
    
    
    return 0;
}
