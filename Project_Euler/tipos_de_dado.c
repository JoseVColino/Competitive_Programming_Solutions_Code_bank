#include <stdio.h>

int main(){
	
	int inteiro = 10;
	float flutuante = 2.5;
	char caractere = 'a';
	
	//como printar?
	printf("inteiro %%d %d\n", inteiro); // ou %i
	printf("flutuante %%f %f\n", flutuante);
	printf("caractere %%c %c\n", caractere);
	
	//misturando
	printf("inteiro %%f %f\n", inteiro);
	printf("caractere %%d %d\n", caractere);
	
	printf("inteiro %%f %f\n", inteiro);
	printf("caractere %%f %f\n", caractere);
	
	printf("inteiro %%c %c\n", inteiro);
	printf("flutuante %%c %c\n", flutuante);

	
	return 0;
}