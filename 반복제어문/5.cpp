#include <iostream>
#include <stdio.h>
using namespace std;
 
int main()
{
    int base;
    int hi = 0;
    char y;
    while (1) {
        printf("Base = ");  scanf("%d", &base);
        printf("Height = ");  scanf("%d", &hi);
        printf("Triangle width = %.1f",((float)base * (float)hi)/2);
        printf("\nContinue? "); scanf(" %c",&y);
        if (y != 'y' && y != 'Y') {
                break;
        }
         
    }
     
    return 0;
}
