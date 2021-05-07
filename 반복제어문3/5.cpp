#include <iostream>
#include <stdio.h>
using namespace std;
 
int main()
{
    int a,i,j,k;
    scanf("%d",&a);
    for (i=1;i<=a;i++) {
        for (j=1;j <= 2*a-2*i ;j++) {
            printf(" ");
        }
        for (k=1;k <= 2*i-1 ;k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
