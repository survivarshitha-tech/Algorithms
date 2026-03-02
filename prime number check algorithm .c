//Prime number check algorithm 

#include <stdio.h>

int main() {
    int n=29, flag=0;

    for(int i=2;i<=n/2;i++) {
        if(n%i==0) {
            flag=1;
            break;
        }
    }

    if(flag==0)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}