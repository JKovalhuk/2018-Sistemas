#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL,"Portuguese");
  int pid;
  printf("Oi, eu sou o processo pai.\n");
  pid = fork();
  // ocorreu um erro ...
  if (pid < 0){
    perror ("Erro na criação do filho: ");
    exit(1);
  }
  // o pai continua daqui
  else if (pid > 0) {
    printf("Criei o filho %d e vou esperar por ele...\n", pid);
    wait(0);
    printf("Meu filho terminou.\n");
  }
  // o filho continua daqui
  else {
    printf("Olá, eu sou um filho recém-criado (PID: %d)\n", pid);
    printf("Estou com sono, vou cochilar um pouco...\n");
    sleep(10);
    printf("Acabei de acordar e já vou terminar.\n");
  }
  printf("Tchau!\n");
}
