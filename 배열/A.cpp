#include <iostream>
#include <stdio.h>
using namespace std;
 
int main()
{
    int b[20],a,i,j,c[20];
 
    scanf("%d",&a);
    for (i=0;i<a;i++) {
        scanf("%d",&b[i]);
 
    }
    for (j=0;j<a;j++) {
 
        for (i=j+1;i<a;i++) {
            if (b[j]  < b[i]) {
                c[i] = b[j];
                b[j] = b[i];
                b[i] = c[i];
 
            }
            else if (b[j] > b[i]) {
                b[j] = b[j];
                b[i] = b[i];
            }
        }
        printf("%d\n",b[j]);
 
    }
 
    return 0;
}
