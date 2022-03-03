#include <stdio.h>
int main() {
    int n,arr[100],xorr=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        xorr=(xorr^arr[i]);
    }
    printf("%d",xorr);
   return 0;
}
