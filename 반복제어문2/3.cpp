#include <iostream>
#include <stdio.h>
using namespace std;
 
int main()
{
    int a = 0;
    int b;
    int c = 0;
 
    scanf("%d",&a);
    for (b = 1;b <= a;b++) {
        if (b % 5 == 0) {
            c = c + b;
        }
    }
    printf("%d",c);
    return 0;
}
