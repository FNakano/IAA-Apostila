#include "rng.h"

int main () {
  int semente;
  int vezes;
  puts ("Digite um número seu, por exemplo as letras do seu nome transformadas em números");
  scanf (" %d", &semente);
  puts ("Digite o número de vezes que seu número deve ser 'embaralhado'");
  scanf (" %d", &vezes);
  setSeed(semente);
  for (int i=0;i<vezes;i++) {
    semente=next(31);
  }
  printf ("Este é seu identificador - use-o para responder a questão e para preencher a planilha: %d\n", semente);
}
