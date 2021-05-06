#include <iostream>
    #include <stdio.h>
    using namespace std;
 
    int main()
    {
        int n1;
        int n2;
     
        scanf("%d",&n1);
        scanf("%d", &n2);
        if (n1 < n2) {
            for (n1; n1 <= n2; n1++) {
                printf("%d ", n1);
            }
        }
        else if (n1 > n2) {
            for (n2; n2<= n1; n2++) {
             
                printf("%d ",n2);
            }
        }
        else if (n1 == n2) {
            printf("%d",n1);
        }
     
        return 0;
    }
