#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main()
{
    int a,b;
 
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d %d\n",++a,b--);
    printf("%d %d\n",a,b);
    return 0;
}
