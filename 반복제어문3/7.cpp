#include <iostream>
#include <stdio.h>
using namespace std;
 
int main()
{
    int a,i,j,k;
    char al = 'A';
    int c = 0;
    scanf("%d",&a);
 
    for (i=1;i<=a;i++) {
 
        for (j=1;j<=(a+1)-i;j++) {
            printf("%c ",al++);
        }
 
        for (k =1;k<=i-1;k++) {
            printf("%d ",c++);
        }
        printf("\n");
    }
    return 0;
}
