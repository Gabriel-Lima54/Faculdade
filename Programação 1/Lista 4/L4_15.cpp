#include <stdio.h>
main (){
	int cod, id, i;
	int eng = 0, com = 0, adm = 0, fi = 0;
	int mie = 9999, mic = 9999, mia = 9999, mit = 0;
	
	for (i=1;i<=15;i++){
		printf("Digite o codigo do curso do aluno: ");
		scanf("%d", &cod);
		printf("Digite a idade do aluno: ");
		scanf("%d", &id); 
		
		if (cod == 1){
			eng++;
			if (id < mie)
				mie = id;
		}
		else if (cod == 2){
			com++;
			if (id < mic)
				mic = id;
		}
		else if (cod == 3){
			adm++;
			if (id < mia)
				mia = id;
		}
		if (id >= 20 && id <= 25)
			fi++;
	}
	if (mie <= mic && mie <= mia)
		mit = 1;
	if (mic <= mie && mic <= mia)
		mit = 2;
	if (mia <= mic && mia <= mie)
		mit = 3;
		
	printf("\nNumero de alunos em engenharia: %d", eng);
	printf("\nNumero de alunos em computacao: %d", com);
	printf("\nNumero de alunos em administracao: %d", adm);
	printf("\nNumero de alunos com idade entre 20 e 25 anos: %d", fi);
	printf("\ncodigo do curso com menor idade: %d", mit);
}
	
	
