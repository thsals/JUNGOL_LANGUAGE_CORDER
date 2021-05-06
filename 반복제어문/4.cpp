#include <iostream>
#include <stdio.h>
using namespace std;
 
int main()
{
    int a;
    int cnt = 0;
    while (1) {
        scanf("%d\n", &a);
        if (a == 0) break;
        if (a % 3 != 0 && a % 5 != 0) {
            cnt += 1;
        }
         
    }
    printf("%d",cnt);
    return 0;
}
