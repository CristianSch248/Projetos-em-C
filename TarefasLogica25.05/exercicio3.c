#include<stdio.h>

int main (void)
{
	int pessoa, alt;	
	
	printf("voce telefonou para a vitima \n1 - sim \n2 - nao\n");
	scanf("%d", &alt);
	
	pessoa = pessoa + alt;
	alt = 0;
	
	printf("esteve no local do crime \n1 - sim \n2 - nao\n");
	scanf("%d", &alt);
	
	pessoa = pessoa + alt;
	alt = 0;
	
	printf("mora perto da vitima \n1 - sim \n2 - nao\n");
	scanf("%d", &alt);
	
	pessoa = pessoa + alt;
	alt = 0;
	
	printf("devia para a vitima \n1 - sim \n2 - nao\n");
	scanf("%d", &alt);
	
	pessoa = pessoa + alt;
	alt = 0;
	
	printf("ja trabalhou com a vitima \n1 - sim \n2 - nao\n");
	scanf("%d", &alt);
	
	pessoa = pessoa + alt;
	alt = 0;
	
	if(pessoa == 5 || pessoa == 6)
	{
		printf("INOCENTE\n");
	}
	else if(pessoa == 7)
	{
		printf("SUSPEITO\n");
	}
	else if(pessoa == 8 || pessoa == 9)
	{
		printf("CULPLICE\n");
	}
	else if(pessoa == 10)
	{
		printf("ASSASSINO\n");
	}
}
