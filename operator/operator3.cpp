#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main()
{
    int wid,len,are;
 
    scanf("%d", &wid);
    scanf("%d", &len);
    wid += 5;
    len = len*2;
    are = wid * len;
 
    printf("width = %d\n",wid);
    printf("length = %d\n",len);
    printf("area = %d\n",are);
    return 0;
}
