#include <stdio.h>
#include <sys/time.h>

int main (){
  struct timeval tempo1, tempo2;
  struct timezone tzp;
  double tempo;
  int i;

  gettimeofday(&tempo1, &tzp);

  for(i=0; i<500000; i++) printf("%d\n", i);

  gettimeofday(&tempo2, &tzp);

  tempo = (double) (tempo2.tv_sec - tempo1.tv_sec) + (((double) (tempo2.tv_usec - tempo1.tv_usec)) / 1000000);

  printf("\nTempo decorrido: %.3f segundos\n", tempo);

}
