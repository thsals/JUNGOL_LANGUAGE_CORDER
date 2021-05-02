
#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main()
{
    int m_t,m_w,k_t,k_w;
    scanf("%d",&m_t);
    scanf("%d",&m_w);
    scanf("%d",&k_t);
    scanf("%d",&k_w);
 
    if(m_t > k_t && m_w > k_w){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}
