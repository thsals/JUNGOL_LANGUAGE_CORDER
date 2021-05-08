#include <iostream>
#include <stdio.h>
using namespace std;
 
int main()
{
    int a[6];
    char b;
    scanf("%c",&b);
    if (b == 'J') {
        printf("0");
    }
    if (b == 'U') {
        printf("1");
    }
    if (b == 'N') {
        printf("2");
    }
    if (b == 'G') {
        printf("3");
    }
    if (b == 'O') {
        printf("4");
    }
    if (b == 'L') {
        printf("5");
    }
    else if (b != 'J' && b != 'U' && b != 'N' && b != 'G' && b != 'O' && b != 'L') {
        printf("none");
 
    }
    return 0;
}
