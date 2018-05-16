 #include<sys/types.h>
 #include<sys/wait.h>
 #include <unistd.h>
 #include<locale.h>
 #include<stdin.h>

struct timeval tempo1, tempo2;
struct timezone tzp;
double tempo;

int t, conta, euler, it;


int main() {
  printf("Insira o número de iterações: ");
  scanf("%d\n", &it);

  gettimeofday(&tempo1, &tzp);


  for (t=1; t<=it; t++){
    conta = conta + (1/t);
  }
  euler = 1 + conta;


  gettimeofday(&tempo2, &tzp);

  tempo = (double) (tempo2.tv_sec - tempo1.tv_sec) + (((double) (tempo2.tv_usec - tempo1.tv_usec)) / 1000000);

  printf("\nTempo decorrido: %.3f segundos\n", tempo);
  return 0;
}

int euler(){

}
