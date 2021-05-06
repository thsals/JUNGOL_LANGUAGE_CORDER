#include <iostream>
#include <stdio.h>
using namespace std;
 
int main()
{
    int a;
    int odd = 0,even = 0;
    while (1) {
        scanf("%d ",&a);
        if (a == 0) break;
            if (a % 2 == 0){
                even++;
            }
            if (a % 2 != 0) {
                odd++;
            }
    }
    printf("odd : %d\neven : %d",odd,even);
 
    return 0;
}
