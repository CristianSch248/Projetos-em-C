#include<stdio.h>
int main (void){
float D, PAG, PAGF, FDG;

printf("quantidade de dias de trabalho:\n");
scanf("%f", &D);

PAG=D*30;
FDG=PAG*0.08;
PAGF=PAG-FDG;

printf("o pagamento final eh de %.2f", PAGF);
}
