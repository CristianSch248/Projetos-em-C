#include<stdio.h>
int main (void){
    int v1[7];
    int v2[7];
    int i;

for(i=0; i<7; i++)
{
    printf("informe um numero:\n");
    scanf("%d", &v1[i]);
}
for(i=0; i<7; i++)
{
    v2[i] = v1[i];
    printf("os valores tranferidos sao %d\n", v2[i]);
}


}
