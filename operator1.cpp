#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main()
{
    int ko,en,ma,co;
    int sum,avg;
    scanf("%d",&ko);
    scanf("%d",&en);
    scanf("%d",&ma);
    scanf("%d",&co);
 
    sum = ko + en + ma + co;
    avg = sum / 4;
 
    printf("sum %d\navg %d",sum,avg);
    return 0;
}
