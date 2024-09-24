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

void ex6(){ // receba três notas de um aluno e calcule e mostre a média ponderada, ou seja, 
    // a média final = nota1 * 3 + nota2 * 3 + nota3 * 4

    /* tá meio errada a implementação de média ponderada no comando do exercício, mas para resolvê-lo, basta 
    // calcular a média como no exercício 5, lembrando-se de multiplicar cada nota pelo peso e dividir pela soma dos pesos
    // Os pesos foram definidos no comando da questão -> 3, 3 e 4
    */

    printf("EXERCICIO 6\n");

    float n1, n2, n3, media;

    //n1
    printf("Digite a nota da primeira avaliação: ");
    scanf("%f", &n1);

    //n2
    printf("Digite a nota da segunda avaliação: ");
    scanf("%f", &n2);

    //n3
    printf("Digite a nota da terceira avaliação: ");
    scanf("%f", &n3);

    media = (n1*3 + n2*3 + n3*4) / 10;

    printf("A média entre as notas %.2f, %.2f e %.2f é %.2f.", n1, n2, n3, media);
}

void ex9(){ //receba o salário de um funcionário, calcule e mostre o salário a receber, sabendo-se
    // que é composto do salário base, mais uma gratificação de 15% sobre o salário e débito de 7% de imposto.

    printf("\nEXERCICIO 9\n");

    float salarioBase, gratificacao, imposto, salarioFinal;

    printf("Digite o salário base do funcionário: ");
    scanf("%f", &salarioBase);

    gratificacao = salarioBase*0.15;
    imposto = salarioBase*0.07;

    salarioFinal = salarioBase + gratificacao - imposto;

    // Dá pra fazer diretão:
    // salarioFinal = salarioBase*1.15 - salarioBase*0.07;

    printf("O funcionário irá receber os seguintes valores ao final do mês: \n");
    printf("Salário Base: %.2f \n", salarioBase);
    printf("Gratificação: %.2f \n", gratificacao);
    printf("Imposto: %.2f \n", imposto);
    printf("Salario final: %.2f \n", salarioFinal);
}

void ex10(){ //  receba o valor que foi investido, em reais, e ajude um invetidor a calcular seu 
    // lucro no final do mês, sabe-se que o invesmento foi feito em renda fixa com ganho de juros de 
    // 1% ao mês. Ao final, mostre o valor dos juros e o valor atualizado do investimento.

    printf("\nEXERCICIO 10\n");

    float valorInvestido, JUROS, valorJuros, investimentoAtualizado;

    JUROS = 0.01;

    printf("Informe o valor investido: ");
    scanf("%f", &valorInvestido);

    valorJuros = valorInvestido*JUROS;
    investimentoAtualizado = valorInvestido + valorJuros;

    printf("Valores:\n");
    printf("Valor Investido: R$ %.2f \n", valorInvestido);
    printf("Juros: R$ %.2f \n", valorJuros);
    printf("Investimento Atualizado: R$ %.2f \n", investimentoAtualizado);
}

void naoImplementado(){
    printf("Exercício não implementado ou não existe");
}

int main(){
    // Header
    printf("\n===============================================");
    printf("\n============ PROGRAMA EM EXECUÇÃO =============");
    printf("\n===============================================\n\n");

    int exercicio = 0;

    printf("Digite o exercício a ser executado: ");
    scanf("%d", &exercicio);

    switch (exercicio) {
    case 3: ex3(); break;
    case 4: ex4(); break;
    case 5: ex5(); break;
    case 6: ex6(); break;
    case 9: ex9(); break;
    case 10: ex10(); break;
    default: naoImplementado(); break;
    }
    
    // Footer
    printf("\n===============================================");
    printf("\n=========== PROGRAMA EM FINALIZAÇÃO ===========");
    printf("\n===============================================\n");
    return 0;
}

