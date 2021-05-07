
#include <iostream>
#include <stdio.h>
using namespace std;
 
int main()
{
    int a,i,j,k;
    int num = 1;
    scanf("%d",&a);
    for (i=1;i<=a;i++) {
            num = 1;
        for (j=1;j <= 2*a-2*i ;j++) {
            printf(" ");
        }
        for (j =1;j <= i;j++) {
            printf("%d ",num++);
        }
        printf("\n");
    }
 
    return 0;
}
