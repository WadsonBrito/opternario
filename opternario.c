# include <stdio.h>
int main(){
    int idade;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    idade >= 18 ? printf("Você é maior de idade\n") : printf("Você é menor de idade\n");
    return 0;
}
