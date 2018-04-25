#include <locale.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
  int denom = 1.0, it = 0.0, i = 0.0;
  double conta = 0.0;

  printf("Insira o número de iterações: ");
  scanf("%d", &it);

  for(i=1; i<=it; i++){
    if(i % 2 == 0) conta = conta - (1.0/denom);
    else conta = conta + (1.0/denom);
    denom = denom + 2;
  }

  printf("\n> %f\n", conta * 4);

return 0;
}
