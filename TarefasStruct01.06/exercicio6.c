#include<stdio.h>
#include<string.h>

struct conta{
    
    float luz;
    float agua;
    float telefone;

};
int main (void){
    
    struct conta desp[12];
    int i=0, m=1, Ml=0, Ma=0, Mt=0;
    float luz_m=0, agua_m=0, telefone_m=0;
    float media_luz=0, media_agua=0, media_telefone=0;
    
    for(i=0; i<12; i++)
    {
        printf("MES %d\n", m);
        
        printf("informe o valor da conta de luz:\n");
        scanf("%f", &desp[i].luz);
        
        printf("informe o valor da conta de agua:\n");
        scanf("%f", &desp[i].agua);
        
        printf("informe o valor da conta de telefone:\n");
        scanf("%f", &desp[i].telefone);
        
        printf("\n\n");
        
        m++;
    }
    for (i=0; i<12; i++)
    {
    	
    	media_luz = media_luz + desp[i].luz;
    	
    	if(desp[i].luz > desp[i-1].luz)
    	{
    		luz_m = desp[i].luz;
    		Ml = i+1;
		}
   	}
   	for (i=0; i<12; i++)
   	{
   		
   		media_agua = media_agua + desp[i].agua;	
   		
   		if(desp[i].agua > desp[i-1].agua)
   		{
   			agua_m = desp[i].agua;
   			Ma = i+1;
		}
   	}
   	for (i=0; i<12; i++)
   	{
   		
   		media_telefone = media_telefone + desp[i].telefone;	
   		
   		if(desp[i].telefone > desp[i-1].telefone)
   		{
   			telefone_m = desp[i].agua;
   			Mt = i+1;
		}
   	}
    
    media_luz = media_luz/12;
    
    media_agua = media_agua/12;
    
    media_telefone = media_telefone/12;
    
    printf("A maior conta de luz foi no mes de %d e o gasto foi de %.2f\n", Ml, luz_m);
    printf("a media de gasto com a luz durante o ano de 2019 foi de %.2f\n\n", media_luz);
    
    printf("A maior conta de agua foi no mes de %d e o gasto foi de %.2f\n", Ma, agua_m);
    printf("a media de gasto com agua durante o ano de 2019 foi de %.2f\n\n", media_agua);
    
    printf("A maior conta de telefone foi no mes de %d e o gasto foi de %.2f\n", Mt, telefone_m);
    printf("a media de gasto com telefone durante o ano de 2019 foi de %.2f\n\n", media_telefone);

}
