#include <iostream>
    #include <stdio.h>
    using namespace std;
 
    int main()
    {
        int a;
        scanf("%d ",&a);
         
        if (a == 0) {
            printf("zero");
        }
        else if (a > 0) {
            printf("plus");
        }
        else {
            printf("minus");
        }
        return 0;
    }
