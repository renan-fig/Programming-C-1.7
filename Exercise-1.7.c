#include <stdio.h>

int main(void) {
 float n1, n2, result;
 char op;

 printf("Para fazer a operação insira um valor: ");
 scanf("%f", &n1);
 printf("Insira outra valor: ");
 scanf("%f", &n2);
 printf("Escolha o operador: ");
 scanf(" %c", &op);

 switch (op) {
   case '+':
    result= n1+n2;
    printf("O resultado é %.2f", result);
    break;
  case '-':
    result= n1-n2;
    printf("O resultado é %.2f", result);
    break;
  case '*':
    result= n1*n2;
    printf("O resultado é %.2f", result);
    break;
  case '/':
    if (n1 != 0 && n2 != 0){
    result= n1/n2;
    printf("O resultado é %.2f", result);
    }
    else
    printf("Operação inválida.");
    break;

  default:
    printf("Operação inválida.");

 }

  return 0;
}
