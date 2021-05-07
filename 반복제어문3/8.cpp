#include <iostream>
#include <stdio.h>
using namespace std;
 
int main()
{
    int a,j,i;
    int alpha =1;
    scanf("%d",&a);
    for (i = 1;i <= a;i++) {
        for (j=1;j<=i-1;j++) {
            printf("  ");
        }
 
        for (j=1;j<=a+1-i;j++) {
            printf("%d ",alpha++);
        }
        printf("\n");
    }
 
    return 0;
}
