#include <iostream>
#include <stdio.h>
using namespace std;
 
int main()
{
    int a[100];
    int cnt=0,i;
    for (i=0;i<100;i++) {
        scanf("%d",&a[i]);
        cnt++;
        if (a[i] == -1) break;
    }
    if (cnt >=4 ) {
        printf("%d %d %d",a[cnt-4], a[cnt-3],a[cnt-2]);
    }
    else if (cnt <4) {
        if (cnt == 3) {
            printf("%d %d",a[cnt-3],a[cnt-2]);
        }
        if (cnt == 2) {
            printf("%d",a[cnt-2]);
        }
 
    }
 
 
    return 0;
}
