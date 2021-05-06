#include <iostream>
#include <stdio.h>
using namespace std;
 
int main()
{
    int a,b = 1;
    scanf("%d",&a);
    while (b <= a) {
        printf("%d ",b);
        b += 1;
    }
    return 0;
}
