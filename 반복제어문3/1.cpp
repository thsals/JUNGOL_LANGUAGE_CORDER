 
#include <iostream>
#include <stdio.h>
using namespace std;
 
int main()
{
    int a,sum=0,cnt = 0,avg=0,i=0;
 
    for (i = 0;i<20;i++) {
        scanf("%d",&a);
        sum = sum + a;
        cnt++;
        if (a == 0) {
            cnt = cnt - 1;
            break;
        }
    }
    avg = sum/ cnt;
    printf("%d %d",sum,avg);
    return 0;
}
