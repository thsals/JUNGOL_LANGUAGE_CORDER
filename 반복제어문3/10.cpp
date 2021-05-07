#include <iostream>
#include <stdio.h>
using namespace std;
 
int main()
{
    int a,i,j;
    int b =1;
    scanf("%d",&a);
    for (i=1;i<=a;i++) {
        for (j=1;j<=a;j++) {
            printf("%d ",b);
            b = b+2;
            if (b >10) {
                b = 1;
            }
 
        }
        printf("\n");
    }
    return 0;
}
