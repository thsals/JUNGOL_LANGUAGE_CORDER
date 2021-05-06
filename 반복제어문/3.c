#include <stdio.h>
 
int main() {
    int n,sum=0,cnt=0;
    while (1) {
        scanf("%d",&n);
        if(n>100 || n<0) break;
        sum+=n;
        cnt++;
    }
    printf("sum : %d\n",sum);
    printf("avg : %.1f\n",(double)sum/(cnt));
    return 0;
}
