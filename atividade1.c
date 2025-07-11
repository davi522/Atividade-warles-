algoritmo: letra a

#include <stdio.h>

int main() {
   
    printf("**********\n");
    printf("*        *\n");
    printf("*        *\n");
    printf("*        *\n");
    printf("*        *\n");
    printf("*        *\n");
    printf("*        *\n");
    printf("*        *\n");
    printf("**********\n");

   
    printf(" *** \n");
    printf("*   *\n");
    printf("*   *\n");
    printf("*   *\n");
    printf("*   *\n");
    printf("*   *\n");
    printf(" *** \n");

  
    printf("    *\n");
    printf("   ***\n");
    printf("  *****\n");
    printf(" *******\n");
    printf("*********\n");
    printf("   *\n");
    printf("   *\n");

    
    printf("-------------\n");
    printf("      *\n");
    printf("    *  *\n");
    printf("   *    *\n");
    printf("  *      *\n");
    printf("   *    *\n");
    printf("    *  *\n");
    printf("      *\n");

    return 0;
}


algoritmo: letra c
#include <stdio.h>

int main() {
    int num1, num2;
    int soma, sub, multi, divi, resto;

    printf("Escreva o primeiro numero: ");
    scanf("%d", &num1);

    printf("Escreva o segundo numero: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    sub = num1 - num2;
    multi = num1 * num2;
    divi = num1 / num2;
    resto = num1 % num2;

    printf("A soma é %d, a subtração é %d, a multiplicação é %d, a divisão é %d, e o resto é %d\n",
           soma, sub, multi, divi, resto);

    return 0;
}

algoritmo: letra d
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Informe a temperatura em celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (9 * celsius + 160) / 5;

    printf("A temperatura em fahrenheit é %.2f\n", fahrenheit);

    return 0;
}

algoritmo: letra e
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Informe a temperatura em fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = ((fahrenheit - 32) * 5) / 9;

    printf("A temperatura em celsius é %.2f graus celsius\n", celsius);

    return 0;
}

algortimo: letra f
#include <stdio.h>

int main() {
    float raio, volume, altura;
    const float pi = 3.14;

    printf("Informe o valor do raio: ");
    scanf("%f", &raio);

    printf("Informe o valor da altura: ");
    scanf("%f", &altura);

    volume = raio * pi * altura;

    printf("O valor do volume interno do recipiente é %.2f L\n", volume);

    return 0;
}
