#include <stdio.h>
#include <stdlib.h>

/* Testa a alocação de arrays de comprimentos definidos no array lengths, um
 * de cada vez.
 * Os elementos do array alocado são to tipo inteiro.
 * Se verboso=='S' então testa todos os tamanhos e informa na tela o resultado
 * para cada comprimento. Caso contrário, testa até conseguir alocar o array,
 * em seguida libera a memória e retorna o maior comprimento que conseguiu 
 * alocar.
 * info: em um computador com 24GB de RAM, consegui alocar um array de 6bi
 * elementos. Foi o máximo tanto com o ambiente gráfico em execução quanto sem.
 * info: em um notebook com 8GB de RAM consegui alocar um array de 2bi
 * elementos. No mesmo notebook com 4GB, consegui alocar um arrya de 1bi
 * elementos.
 */
long int testaAlocar (char verboso) {
  long int lengths[]={  // do maior para o menor
	  10000000000L,  // 10bi
	   8000000000L,  
	   6000000000L,  
	   4000000000L,  
	   2000000000L, 
	   1000000000L,
	    500000000L
  };
	int *A;
	int i;
  // cuidado - isto só calcula o comprimento do array em condições específicas!
  int lenlen = sizeof (lengths)/sizeof (long); 
  for (i=0;i<lenlen;i++){
    A=(int *) malloc (lengths[i]*sizeof(int));
    if (verboso=='S') {
      if (A==NULL) {
        printf ("Falha na alocação de array de %ld inteiros.\n", lengths[i]);
      } else {
        printf ("Sucesso na alocação de array de %ld inteiros.\n", lengths[i]);
        free (A);
      }
    } else {
      if (A!=NULL) {
        free (A);
        return lengths[i];
      }
    }
  }
}

#if TEST
// se quiser usar o teste abaixo, defina a macro TEST na compilação.
/* Teste: Testa a alocação de arrays de vários comprimentos.
 */

void main (void) {
  testaAlocar ('S');
  printf ("comprimento máximo alocado: %ld\n", testaAlocar ('N'));
}
#endif
