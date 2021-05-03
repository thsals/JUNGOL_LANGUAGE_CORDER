
#include <iostream>
    #include <stdio.h>
    using namespace std;
 
    int main()
    {
        int a, b;
        scanf("%d %d",&a,&b);
        if (a > b) {
            printf("%d", a - b);
        }
         
        else if (b > a) {
            printf("%d", b - a);
        }
 
        return 0;
    }
