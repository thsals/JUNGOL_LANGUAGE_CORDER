#include <iostream>
    #include <stdio.h>
    using namespace std;
 
    int main()
    {
        int a;
        printf("Number? ");  scanf("%d ", &a);
        if (a == 1) {
            printf("dog");
        }
        else if (a == 2) {
            printf("cat");
        }
        else if (a == 3) {
            printf("chick");
        }
        else {
            printf("I don't know.");
        }
 
        return 0;
    }
