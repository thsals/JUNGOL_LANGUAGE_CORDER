#include <iostream>
#include <stdio.h>
using namespace std;
 
int main()
{
    int a,i,j;
 
    scanf("%d",&a);
    for (i=1;i<=a-1;i++) {
        for (j=1;j<=i;j++) {
            printf("# ");
        }
        printf("\n");
    }
    for (i=1;i<=a;i++) {
        for (j =1;j<=i-1;j++) {
            printf("  ");
        }
 
        for (j=1;j<=a+1-i;j++) {
            printf("# ");
        }
        printf("\n");
    }
    return 0;
}
