#include <iostream>
#include <stdio.h>
using namespace std;
 
int main()
{
    int a,i,b;
    scanf("%d",&a);
    for (i = 1;i<=100;i++) {
        b = a * i;
        if (b > 99) break;
        printf("%d ",b);
        if (b % 10 == 0) break;
    }
    return 0;
}
