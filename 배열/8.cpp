#include <iostream>
#include <stdio.h>
using namespace std;
 
int main()
{
    int a[100],i,j;
    int sum=0,cnt=0;
    for (i=0;i<100;i++) {
        scanf("%d",&a[i]);
        if (a[i] % 5 == 0) {
            cnt++;
            sum = sum+a[i];
        }
 
        if (a[i] == 0) {
                cnt = cnt-1;
 
                break;
        }
    }
    printf("Multiples of 5 : %d\nsum : %d\navg : %.1f",cnt,sum,(double)sum/cnt);
    return 0;
}
