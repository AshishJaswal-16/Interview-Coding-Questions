#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);

    int x=(n&0XAAAAAAA);
    x=x>>1;
    int y=(n&0X5555555);
    y=y<<1;
    printf("%d",x|y);
 return 0;   
}
