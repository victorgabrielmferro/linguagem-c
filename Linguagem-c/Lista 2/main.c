#include <stdio.h>
void main1() {
    float salario, salario_desconto ;
    printf("Digite o seu salario: ");
    scanf("%f", &salario);
    if (salario < 3000) {
        salario_desconto = salario - (salario*0.08);
        printf("%.2f", salario_desconto);
    }
    else {
        salario_desconto = salario - (salario*0.11);
        printf("%.2f", salario_desconto);
    }
}
void main4() {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Numero negativo");
    } else if (num == 0) {
        printf("Numero neutro");
    } else if (num > 0) {
        printf("Numero positivo");
    }
}
void main5() {
    int idade;
    printf("Digite a idade: ");
    scanf("%d", &idade);
    if (idade < 0) {
        printf("valor invalido");
    }else if (idade >= 0 && idade <= 11) {
            printf("Criança");
    }   else if (idade >= 12 && idade <= 18) {
                printf("Adolescente");
    }       else if (idade >18) {
                 printf("Adulto");
    }
}
void main6() {
    float salario, prestacao;
    printf("Digite o seu salario: ");
    scanf("%f", &salario);
    printf("Digite a prestacao: ");
    scanf("%f", &prestacao);
    if (salario < 1500) {
        printf("Negado por renda insuficiente");
    }else if (prestacao > salario * 0.3) {
        printf("Emprestimo negado:Parcela muito Alta");
    }else {
        printf("Emprestimo Aprovado");
    }
}
void main7() {
    char genero;
    float altura;
    float pesoIdeal;
    printf("Digite a genero: ");
    scanf(" %c", &genero);
    printf("Digite a altura: ");
    scanf("%f", &altura);
    if (genero == 'F'|| genero == 'f') {
    pesoIdeal=(62.1 * altura)-44.7;
    }else if (genero == 'M'|| genero == 'm') {
        pesoIdeal=(72.7 * altura)-58;
    }
    printf("Peso ideal: %.2f", pesoIdeal);
}
void main8() {
    float nota;
    int frequencia;

    printf("Digite sua nota: ");
    scanf("%f", &nota);
    if (nota > 0 || nota > 10) {
        printf("Nota invalida:digite novamente");
        scanf("%f", &nota);
    }
    printf("Digite sua frequencia");
    scanf("%d", &frequencia);
    if (frequencia > 0 || frequencia > 100) {}
    printf("Freequencia invalida:digite novamente");
    scanf("%d", &frequencia);

    if (frequencia >= 75 && nota >= 7) {
        printf("Aprovado");
    }else {
        printf("Reprovado");
    }
}
void main9() {
    int idade,estudante;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite 1 se for estudante e 0 se nao: ");
    scanf("%d", &estudante);

    if (estudante == 1 || idade >=60) {
        printf("Tem direito a meia entrada");
    }else {
        printf("Nao Tem direito a meia entrada");
    }
}
void main10() {
    float num1,num2;
    char operacao;

    printf("Digite os dois numeros reais: ");
    scanf("%f %f", &num1, &num2);

    printf("Digite a operacao: ");
    scanf(" %c", &operacao);
    switch (operacao) {
        case '*':
            printf("%.2f", num1 * num2);
            break;
        case '/':
            if (num2 !=0) {
                printf("%.2f", num1 / num2);
            }else {
                printf("Operacao invalida:Divisao por 0");
            }
            break;
        case'+':
            printf("%.2f", num1 + num2);
            break;
        case '-':
            printf("%.2f", num1 - num2 );
            break;
        default:
            printf("Operacao invalida");
    }
}
void main() {
    int opcoes;
    float metros,conversao;

    printf("Digite o valor em metros: ");
    scanf("%f", &metros);
    printf("Opcoes de conversao: 1(KM);2(CM);3(MM)");
    scanf("%d", &opcoes);
    switch (opcoes) {
        case 1:
            conversao = metros / 1000;
                printf("%.2f KM", conversao);
            break;
        case 2:
            conversao = metros * 100;
                printf("%.2f CM", conversao);
            break;
        case 3:
            conversao = metros * 1000;
                printf("%f MM", conversao);
            break;
        default:
            printf("Opcoes invalida");
    }
}