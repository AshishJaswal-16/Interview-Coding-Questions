#include <stdio.h>
int main() {
   int n,p[100005]={0};
   scanf("%d",&n);
   for(int i=3;i<=10000;i=i+2){
       p[i]=1;
   }
   for(int i=3;i<1000;i=i+2){
       if(p[i]==1){
           for(int j=2*i;j<=1000;j=j+i){
               p[j]=0;
           }
       }
       p[2]=1;
       p[0]=p[1]=0;
   }
   for(int k=0;k<=n;k++){
       if(p[k]==1){
           printf("%d",k);
       }
   }
   printf("\n");
   
return 0;
}
