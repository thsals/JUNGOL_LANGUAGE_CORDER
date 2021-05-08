#include <iostream>
#include <stdio.h>
using namespace std;
 
int main()
{
    double a[6];
    double sum = 0.0;
    double avg= 0.0;
    scanf("%lf %lf %lf %lf %lf %lf",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5]);
    sum = a[0]+a[1]+a[2]+a[3]+a[4]+a[5];
    avg = sum/6;
    printf("%.1lf",avg);
    return 0;
}
