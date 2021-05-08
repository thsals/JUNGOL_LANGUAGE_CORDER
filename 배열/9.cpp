#include <iostream>
#include <stdio.h>
using namespace std;
 
int main()
{
    int a[100],i,j,cnt=0;
    for (i=0;i<100;i++) {
        scanf("%d",&a[i]);
        cnt++;
        if (a[i] == 0) {
            cnt--;
            break;
        }
    }
 
    printf("%d\n",cnt);
    for (j =0;j<cnt;j++) {
        if (a[j] % 2 == 0) {
            a[j] = a[j]/2;
        }
        else if (a[j] % 2 !=0) {
            a[j] = a[j] * 2;
        }
 
        printf("%d ",a[j]);
    }
    return 0;
}
