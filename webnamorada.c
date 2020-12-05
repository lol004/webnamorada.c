#include <stdio.h>
#include <stdlib.h>

void print_ascii() {
	puts("\n\n" 

"WW      WW        bb         NN   NN                                                dd  \n"                  
"WW      WW   eee  bb         NNN  NN   aa aa mm mm mmmm   oooo  rr rr    aa aa      dd   aa aa       cccc \n"
"WW   W  WW ee   e bbbbbb     NN N NN  aa aaa mmm  mm  mm oo  oo rrr  r  aa aaa  dddddd  aa aaa     cc     \n"
 " WW WWW WW eeeee  bb   bb    NN  NNN aa  aaa mmm  mm  mm oo  oo rr     aa  aaa dd   dd aa  aaa ... cc     \n"
  "  WW   WW   eeeee bbbbbb     NN   NN  aaa aa mmm  mm  mm  oooo  rr      aaa aa  dddddd  aaa aa ...  ccccc \n\n");
};

int main() {
	char resp, inicio;
	char cert='s';
	char nome[40], gosto[40];
	int web=0, cont=0,namoro;

	print_ascii();


	printf("Ola, sou sua nova web namorada. Qual e o seu nome?  ");
	gets(nome);
	printf("A ola\n\n", nome);
	printf("Voce gosta de fazer oque?  ");
	gets(gosto);
	printf("Voce e gay tchau \n\n\n", nome);

	printf("Sim, voce é um otario acha que web namoro presta? kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk\n");
}
