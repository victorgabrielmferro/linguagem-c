#include <stdio.h>
void main1() {
int num1, num2;
    printf("Digite os 2 dois numeros: ");
    scanf("%d%d", &num1, &num2);
    if (num1 < num2) {
        printf("O numero maior:%d\n", num2);
    }else {
        printf("O numero maior:%d\n", num1);
    }
}
void main2() {
    char sexo;
    printf("Digite seu sexo: ");
    scanf("%c", &sexo);
    if (sexo == 'm' || sexo == 'f') {
        printf("Sexo Valido");
    }    else {
        printf("Sexo Invalido");
    }
}
float maiorNumero(float num1, float num2, float num3) {
    float maior=num1;
        if (num2>maior) {
            maior=num2;
        }else if (num3>maior) {
            maior=num3;
        }
    printf("O maior numero e %.2f\n", maior);
}
void main3() {
    maiorNumero(10,25,15);
}
void main4  () {
    float n1,n2,n3,n4,media;
    char sexo;
    printf("Digite seu sexo: ");
        scanf("%c", &sexo);
    printf("Digite suas 4 notas:\n");
        scanf("%f%f%f%f", &n1,&n2,&n3,&n4);

    media=(n1+n2+n3+n4)/4;
    if (sexo == 'm' && media >=6) {
       printf("Aprovado");
    }else if (sexo == 'm' && media < 6) {
        printf("Reprovado");
    }else if (sexo == 'f' && media >= 6) {
        printf("Aprovada");
    }else if (sexo == 'f' && media < 6) {
        printf("Reprovada");
    }
}
void main5 () {
    char qualificacao;
    int horaAula,pagamento;

    printf("Digite sua qualificacao(g,m ou d): ");
        scanf("%c", &qualificacao);
    printf ("Digite a quantidade de horas trabalhadas: ");
        scanf("%d", &horaAula);
    if (qualificacao == 'g') {
        pagamento=horaAula*12;
    }else if (qualificacao == 'm') {
        pagamento=horaAula*17;
    }else if (qualificacao == 'd') {
        pagamento=horaAula*25;
    }
    printf("Valor a ser recebido: %.2d\n", pagamento);
}
void main6 () {
    float x,y,z;
    printf("Digite os valores do trangulo: ");
    scanf("%f%f%f", &x,&y,&z);
    if (x+y>z && x+z>y && y+z>x) {
        printf("Eh um triangulo\n");
    }   else {
            printf("Nao eh um triangulo\n");
    }
    if (x==y && y==z) {
        printf("Triangulo Equilatero\n");
}       else if (x==z||x==y||y==z) {
            printf("Triangulo Isosceles\n");
}            else {
                printf("Triangulo Escaleno\n");
            }
}
int tipoTriangulo (float x, float y, float z) {
    if (x+y>z && x+z>y && y+z>x) {
        if (x==y && y==z) {
            return 1;
        } else if (x==z||x==y||y==z) {
            return 2;
        } else {
            return 3;
        }
    }    else {
    return -1;
    }
}
void main7 () {
    int ano;
    float tabela,taxa;

    printf("Digite o ano de fabricação do veiculo:\n");
        scanf("%d", &ano);
    printf("DIgite o valor da tabela do veiculo:\n");
        scanf("%f", &tabela);
    if (ano < 1990) {
        taxa = tabela*0.01;
    }else if (ano >= 1990) {
        taxa = tabela*0.015;
    }
    printf("O valor da taxa e: %.2f\n", taxa);
}
void main8 () {
    int idade;

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7) {
        printf("- Infantil A (5 a 7 anos)");
    }else if (idade >= 8 && idade <= 10) {
        printf("- Infantil B (8 a 10 anos)");
    }else if (idade >= 11 && idade <= 13) {
        printf("- Juvenil A (11 a 13 anos)");
    }else if (idade >= 14 && idade <= 17) {
        printf("- Juvenil B (14 a 17 anos)");
    }else if (idade >= 18) {
        printf("- Adulto (maiores de 18 anos)");
    }
}
char categoriaNadador(int idade) {
    if (idade>=5 && idade<=7) {
        return 'A';
    }else if (idade>=8 && idade<=10) {
        return 'B';
    }else if (idade>=11 && idade<=13) {
        return 'C';
    }else if (idade>=14 && idade<=17) {
        return 'D';
    }else if (idade>=18) {
        return 'E';
    }
}
void main9 () {
    int procedencia;
    float precoProduto,precoFinal;

    printf("Digite o preço do produto: ");
        scanf("%f", &precoProduto);
    printf("Código de origem :1(Sul); 2(Norte);3 (Leste);4 (Oeste);5 (Importado):");
        scanf("%d", &procedencia);

    if (procedencia == 1) {
        precoFinal = precoProduto+(precoProduto*0.10);
    }else if (procedencia == 2) {
        precoFinal=precoProduto+(precoProduto*0.15);
    }else if (procedencia == 3) {
        precoFinal=precoProduto+(precoProduto*0.08);
    }else if (procedencia == 4) {
        precoFinal=precoProduto+(precoProduto*0.12);
    }else {
        precoFinal=precoProduto+(precoProduto*0.25);
    }
    printf("Preço Final: %.2f\n", precoFinal);
}
void main10 () {
    float saldoMedio;
    float valorCredito;

    printf("Digite o saldo medio: ");
    scanf("%f", &saldoMedio);

    if (saldoMedio >= 0 && saldoMedio <= 200) {
        valorCredito = saldoMedio*0;
    }else if (saldoMedio >= 201 && saldoMedio <= 400) {
        valorCredito = saldoMedio*0.10;
    }else if (saldoMedio >= 401 && saldoMedio <= 600) {
        valorCredito = saldoMedio*0.30;
    }else {
        valorCredito = saldoMedio*0.40;
    }
    printf("Valor Credito: %.2f\n", valorCredito);
}
void main11 () {
    float n1,n2,n3,mediaPonderada;

    printf("Digite as notas: ");
    scanf("%f%f%f",&n1,&n2,&n3);

    mediaPonderada=(n1*2+n2*3+n3*5)/10;
    if (mediaPonderada >= 7) {
    printf("Aprovado\n");
    }else if (mediaPonderada >= 5 && mediaPonderada <7 ) {
        printf("Recuperaçao\n");
    }else {
        printf("Reprovado\n");
    }
    printf("Nota:%.2f\n",mediaPonderada);
}
void main12 () {
    float n1,n2;
    char operacao;

    printf("Digite os valores: ");
    scanf("%f%f",&n1,&n2);
    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &operacao);
    switch (operacao) {
        case '+':
            printf("Resultado: %.2f\n",n1+n2);
            break;
        case '-':
            printf("Resultado: %.2f\n",n1-n2);
            break;
        case '*':
            printf("Resultado: %.2f\n",n1*n2);
            break;
        case '/':
            printf("Resultado: %.2f\n",n1/n2);
            break;
    default:
            printf("Operação  invalida\n");
    }
}
//13
int verificaDiaMes (int mes,int ano) {
    if (mes == 1 || mes == 3 || mes == 5 || mes ==7 || mes == 8 || mes == 10 || mes == 12) {
    return 31;
}       else if (mes ==4 || mes == 6 || mes == 9 || mes == 11) {
    return 30;
}            else if (mes==2) {
                if (ano % 400 ==0 || (ano % 4 ==0 && ano % 100!=0)) {
    return 29;
}                   else {
    return 28;
        }
}
    return 0;
}
#include <stdio.h>

void main14() {

    float renda, parcela;
    int numParcelas, idade;

    printf("Digite a renda mensal: ");
        scanf("%f", &renda);

    printf("Digite o valor da parcela o numero de parcelas: ");
        scanf("%f%d", &parcela,&numParcelas);

    printf("Digite a idade: ");
        scanf("%d", &idade);

    if (parcela > renda * 0.30) {
        printf("Credito negado: parcela acima de 30%% da renda.\n");
    } else if (idade < 25) {
        printf("Credito negado: idade minima.\n");
    } else {
        printf("Credito aprovado.\n");
    }
}
void main15 () {
    int codigoItem;

    printf("Digite a codigo do item: ");
    scanf("%d", &codigoItem);

    switch (codigoItem) {
        case 100:
            printf(" 100- Hamburguer:R$15,00 \n");
            break;
        case 101:
            printf(" 101- X-Bacon:R$18,00 \n");
            break;
        case 102:
            printf(" 102- X-tudo:R$21,00 \n");
            break;
        case 103:
            printf(" 103- HotDog:R$12,00 \n");
            break;
        case 104:
            printf(" 104- Refri Lata:R$5,00 \n");
            break;
        case 105:
            printf(" 105- Refri 2L:R$11,50 \n");
            break;
    default:
        printf("Produto Invalido\n");
    }
}

char conceitoFinal(float nota) {
    if (nota >= 90) {
        return 'A';
    }else if (nota >= 80 && nota < 90) {
        return 'B';
    }else if (nota >= 70 && nota < 80) {
        return 'C';
    }else if (nota >= 60 && nota < 70) {
        return 'D';
    }else {
        return 'F';
    }
}
void main16 () {
    printf("Conceito:%c",conceitoFinal(100));
}

void main17 () {
    int dia;

    printf("Digite o numero respectivo ao dia: ");
    scanf("%d",&dia);

    switch (dia) {
        case 1:
            printf("Domingo\n");
                break;
        case 2:
            printf("Segunda\n");
                break;
        case 3:
            printf("Terça\n");
                break;
        case 4:
            printf("Quarta\n");
                break;
        case 5:
            printf("Quinta\n");
                break;
        case 6:
            printf("Sexta\n");
                break;
        case 7:
            printf("Sabado\n");
                break;
    default:
        printf("Dia invalido\n");
    }
}

int maiorValor(int n1, int n2,int n3) {
    if (n1 > n2 && n3 < n1) {
        return n1;
    }else if (n2 > n1 && n3 < n2) {
        return n2;
    }else {
        return n3;
    }
}
void main18 () {
    int n1, n2, n3;

    printf("Digite tres valores inteiros: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("O maior valor e: %d\n", maiorValor(n1, n2, n3));
}
void main19 () {
 int anoNascimento,anoAtual,idade;

    printf("Digite o ano de nascimento e o ano atual: ");
        scanf("%d%d", &anoNascimento,&anoAtual);

    idade = anoAtual - anoNascimento;

    printf("Idade: %d \n",idade);
    if (idade>=18) {
        printf("Ja pode votar e tirar carteira!");
    }else if (idade>=16&&idade<18) {
        printf("Ja pode votar mas nao pode tirar carteira!");
    }else {
        printf("Não pode votar e nao pode tirar carteira!");
    }
}

float valorFinal(float valor ,int codigoItem) {

    switch (codigoItem) {
        case 1:
            return valor - (valor * 0.15);

        case 2:
            return valor - (valor * 0.05);

        case 3:
            return valor;

        case 4:
            return valor + (valor * 0.10);
    }
}