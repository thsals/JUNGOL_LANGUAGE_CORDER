#include <iostream>
#include <stdio.h>
using namespace std;
 
int main()
{
    int n;
    int i,j;
    scanf("%d",&n);
    for (i = 1; i <= n;i++) {
            for (j = 1 ; j <=i;j++) {
                printf("*");
 
            }
 
            printf("\n");
 
 
    }
    for (i = 1;i<=n-1;i++) {
        for (j = 1;j <= n-i;j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
