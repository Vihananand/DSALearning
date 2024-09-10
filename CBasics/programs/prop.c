#include <stdio.h>
int main(){
    int cost;
    scanf("%d", &cost);

    int disc1 = cost - (cost/2);
    int disc2 = cost - (cost/5)+2;

    int result = (cost > 50 && cost % 3 == 0) ? printf("%d", disc1) : printf("%d",disc2);
}