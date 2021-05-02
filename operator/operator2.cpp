#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main()
{
    int num_1,num_2;
    int a , b;
 
    scanf("%d", &num_1);
    scanf("%d", &num_2);
     
    a = num_1/num_2;
    b = num_1 % num_2;
 
    printf("%d / %d = %d...%d",num_1,num_2,a,b);
 
    return 0;
}
