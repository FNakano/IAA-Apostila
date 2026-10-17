/* 
 * gcc rng.c utilarray.c elapsedRunningTime.c testSort.c
 */

/* Quando tentei executar este programa com navegador web, editor de texto e 
 * navegador de arquivos abertos, durante a execução de randArray() o processo
 * foi morto. Fechando navegadores e editor, randArray levou aprox. 17s para
 * executar. */
#include "utilarray.h"
#include "elapsedRunningTime.h"


// Comparing function:
// Returns a positive number if a is greater than b
// Returns a negative number if a is less than b
// Returns 0 if a is equal to b
// FONTE: https://www.w3schools.com/c/ref_stdlib_qsort.php
int compare(const void *a, const void *b) {
  int *valA = a;  // jeito estranho de fazer cast para int... vou manter
  int *valB = b;  // por causa da referência
  return *valA - *valB;
}

int main () {
  Array ord=alocaArray (100);
  randArray (ord);
  // printArray(ord);
  ord=dealocaArray(ord);
  
  ord=testaAlocar('S');
  // ord=alocaArray(1000);  // um teste pequeno
  printf (" %ld;", ord.length);

  start();
  randArray (ord); // preencher o array é O(n)
  stop();
  printCSVElapsed();

  start();
  // Sort the values in the array FONTE: https://www.w3schools.com/c/ref_stdlib_qsort.php
  qsort (ord.A, ord.length, sizeof(ord.A[0]), compare);
  stop();
  printCSVElapsed();

  long int r;
  start();
  r=crescente (ord); // verificar se os elementos do array estão em ordem crescente é O(n)
  stop();
  printf (" %ld;", r);
  printCSVElapsed();

  dealocaArray(ord);
}

/*
 * <pre><font color="#8AE234"><b>fabio@super</b></font>:<font color="#729FCF"><b>~/MeuGithub/IAA-Apostila/EP2</b></font>$ ./a.out
length:100
A:[ 1569741360, 1785505948, 516548029, 1302116447, 1368843515, 663681053, 1182054491, 251269761, 1283218719, 1678332854, 715581077, 542832677, 827187473, 1316484262, 2114931095, 2110588844, 1888030084, 49567875, 2021317241, 377907320, 590459143, 672024888, 276804524, 790221947, 314824652, 1514351260, 49903503, 2977882, 1174114692, 19810223, 2071219745, 1208925245, 224392037, 543062387, 1342491602, 613975862, 882178125, 32055653, 1667117938, 2097442635, 2127560960, 1477972375, 1046324555, 1863325730, 1602541198, 2106563691, 1574432074, 1224139336, 1755132112, 27502062, 1801503319, 885230877, 1131078416, 1558589646, 1931307207, 2114571616, 287633608, 1172799737, 178375143, 399409747, 2101472387, 659000788, 1551250105, 1441125258, 1535517408, 138026517, 307563451, 771301718, 994194358, 588941118, 9632738, 1432048072, 153541457, 1480698551, 748226726, 1752212580, 727502297, 1302358662, 1845454135, 2002245220, 2086381267, 1598713773, 1859175117, 1146421669, 1315507905, 96517152, 384373789, 668680243, 467228901, 436806241, 1834997223, 177782380, 20773668, 890723514, 1486687916, 540640723, 1656381957, 2036211222, 1530484605, 1481632371,]
Falha na alocação de array de 10000000000 inteiros.
Falha na alocação de array de 8000000000 inteiros.
Sucesso na alocação de array de 6000000000 inteiros.
 17.197155; 17.218783;</pre>
 */
