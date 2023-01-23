#include<stdio.h>
int idade_dias(int anos, int meses, int dias)
{
    int diasA, diasM, diasD, total_dias;
    diasA = anos * 365;
    diasM = meses * 30;
    total_dias = diasA + diasM + dias;
    printf("a sua idade expressa em dias eh %d", total_dias);

}

int main()
{
    int ano, mes, dias;
    printf("quantos anos de vida:\n");
    scanf("%d", &ano);
    printf("meses desde o seu ultimo aniversario:\n");
    scanf("%d", &mes);
    printf("a partir do dia do seu anoversario sem contar mo mes quantos dias se pasaaram até hoje?\n");
    scanf("%d", &dias);
    idade_dias(ano, mes, dias);
}
