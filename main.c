#include <stdio.h>
#include <stdlib.h>


int main(){


int ordem=7;
int vetor [ordem];
int i;
int j;

printf("Digite 7 valores inteiros:\n");
for(i=0;i < ordem;i=i+1){

	scanf("%d",&vetor[i]);
}
for (i=0;i < ordem -1 ;i++){
	for(j=0;j < ordem -i -1;j++){
		if (vetor[j]>vetor [j+1]){
			int temp = vetor[j];
			vetor[j]=vetor[j + 1];
			vetor[j + 1]=temp;
       }
    }
}
           printf ("Valores em ordem crescente:\n");
	   for(i = 0;i < ordem;i++){
		   printf("%d\n",vetor[i]);

	   }


	return 0;
}
