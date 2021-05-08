#include <iostream>
#include <stdio.h>
using namespace std;
 
int main()
{
    int a[100];
    int i;
    int max1 = -1000,min1= 1000;
    for (i = 0; i<100;i++) {
        scanf("%d",&a[i]);
        if (a[i] == 999) break;
 
        if (max1 < a[i]) {
            max1 = a[i];
        }
        if (min1 > a[i]) {
            min1 = a[i];
        }
 
    }
 
    printf("max : %d\nmin : %d",max1,min1);
    return 0;
}
