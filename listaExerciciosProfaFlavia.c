# include <stdio.h>

void ex3(){ // Solicite a idade da pessoa e mostre na tela o valor que foi informado.

    printf("EXERCICIO 3\n");

    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("A idade fornecida foi: %d", idade);
}

void ex4(){ // Solicite a altura da pessoa, em metros, e mostre na tela o valor informado em centímetros.

    printf("EXERCICIO 4\n");

    float alturaMetros;
    int alturaCentimetros;

    printf("Digite a sua altura em metros: ");
    scanf("%f", &alturaMetros);

    alturaCentimetros = alturaMetros * 100;
    printf("Você tem %d centimetros.", alturaCentimetros);
}

void ex5(){ //Receba três notas de um aluno e calcule e mostre a média simples.
    
    printf("EXERCICIO 5\n");

    float n1, n2, n3, media;

    // n1
    printf("Digite a nota da 1a avaliação: ");
    scanf("%f", &n1);

    // n2
    printf("Digite a nota da 2a avaliação: ");
    scanf("%f", &n2);

    // n3
    printf("Digite a nota da 3a avaliação: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    printf("A média entre as notas %.2f, %.2f e %.2f é %.2f.", n1, n2, n3, media);
}


int main(){
    // Header
    printf("\n===============================================");
    printf("\n============ PROGRAMA EM EXECUÇÃO =============");
    printf("\n===============================================\n\n");

    // Exercicios
    ex3();
    ex4();
    ex5();
    
    // Footer
    printf("\n\n===============================================");
    printf("\n=========== PROGRAMA EM FINALIZAÇÃO ===========");
    printf("\n===============================================\n");
    return 0;
}

