#include <stdio.h>
#include <math.h>

void quetao1() {
    float lado,area;
    printf("Digite o valor do lado do quadrado:\n");
    scanf("%f",&lado);
    area=lado*lado;
    printf("Area do quadrado: %.2f",area);
}
void quetao2() {
    float salario,percentual,valorReajuste,novoSalario;
    printf("Digite o valor do salario:\n");
    scanf("%f",&salario);
    printf("valor do percentual do reajuste salarial:\n");
    scanf("%f",&percentual);
        novoSalario=salario+(salario*percentual);
        valorReajuste=novoSalario-salario;
    printf("Salario do reajuste: %.2f",valorReajuste);
    printf("Valordo novo salario: %.2f",novoSalario);
}
void quetao3() {
    int cavalos,ferraduras;
    printf("Digite a quantidade de cavalos do haras:\n");
    scanf("%d",&cavalos);
        ferraduras=cavalos*4;
    printf("Ferraduras para todos os cavalos: %d \n",ferraduras);
}
void quetao4() {
    float paes,broas,totalArrecadado,poupanca;
    printf("Digite a quantidade de paes e broas vendidos:\n");
    scanf("%f %f",&paes  , &broas);
        totalArrecadado=paes*broas;
        poupanca=totalArrecadado*0.10;
    printf("Total arrecadado: %.2f \n",totalArrecadado);
    printf("Poupanca: %.2f \n",poupanca);
}
void quetao5() {
    int centavos,m1,m50,m25,m10,m5,m01;
    printf("Digite o valor em centavos:\n");
    scanf("%d",&centavos);
        m1=centavos / 100;
            centavos%=100;
        m50=centavos/50;
            centavos%=50;
        m25=centavos/25;
            centavos%=25;
        m10=centavos/10;
            centavos%=10;
        m5=centavos/5;
            centavos%=5;
        m01=centavos;
    printf("1real:%d | 50cent:%d | 25cent:%d | 10cent:%d | 5cent:%d | 1cent:%d \n",m1,m50,m25,m10,m5,m01);
}
void quetao6() {
    int anos,meses,dias,totalDias;
    printf("Digite sua idade em anos, meses e dias:\n");
    scanf("%d %d %d",&anos ,&meses,&dias);
        totalDias=(anos*365)+(meses*30)+dias;
    printf("Sua idade em dias: %d \n",totalDias);
}
void quetao7() {
    int anos,meses,dias,totalDias;
    printf("Digite sua idade em dias: \n");
    scanf("%d",&totalDias);
        anos=totalDias/365;
            totalDias%=365;
                meses=totalDias/30;
                    totalDias%=30;
                        dias=totalDias;
    printf(" %d anos %d meses e %d dias \n",anos,meses,dias);
}
void quetao8() {
    float valorG,valorP,litros;
    printf("Digite o valor do litro da gasolina e o valor do pagamento:\n");
    scanf("%f %f",&valorG,&valorP);
        litros=valorP /valorG;
    printf("Quantidade total de litros: %.2f",litros);
}
void quetao9() {
    float custoFabrica,porcentagemDistribuidor,imposto,custoFinal;
      printf("Digite o valor do custo de fabricação do veiculo:\n");
    scanf("%f",&custoFabrica);
    custoFinal = custoFabrica + (custoFabrica*0.28)+(custoFabrica*0.45);
    printf("Custo Final: %.2f",custoFinal);
}
void quetao10() {
    float n1,n2,n3,media;
    printf("Digite suas notas:\n");
    scanf("%f %f %f",&n1,&n2,&n3);
    media=(n1+n2+n3)/3;
    printf("Media: %.2f",media);
}
void quetao11() {
    int p,m,g,vendasTotais;
    printf("Digite a quantidade respectiva de camisas vendidas dos 3 tamanhos");
    scanf("%d %d %d",&p,&m,&g);
    vendasTotais=(p*10)+(g*12)+(m*15);
    printf("Vendas Totais: %d \n",vendasTotais);
}
void quetao12() {
    float salarioInicial,salarioAumento,salarioFinal;
    printf("Digite o valor do salario inicial:\n");
    scanf("%f",&salarioInicial);
    salarioAumento=salarioInicial+(salarioInicial*0.15);
    salarioFinal=salarioAumento-(salarioAumento*0.08);
    printf("Salario final: %.2f",salarioFinal);
}
void quetao13() {
    float conta,felipe;
    int carlos ,andre;
        printf("Digite o valor da conta:\n");
            scanf("%f",&conta);
    carlos=conta/3;
    andre=carlos;
    felipe=conta-carlos-andre;
    printf("Felipe: %.2f Carlos:%d Andre:%d",felipe,carlos,andre);
}
void quetao14() {
    int horasNormais,horasExtras;
    float salarioBruto,salarioFinal;
        printf("Digite as horas normais trabalhas e as horas extras trabalhas:\n");
        scanf("%d %d",&horasNormais,&horasExtras);
    salarioBruto=(horasNormais*10)+(horasExtras*15);
    salarioFinal=salarioBruto-(salarioBruto*0.1);
        printf("Salario bruto:%.2f Salario liquido: %.2f",salarioBruto,salarioFinal);
}
void quetao15() {
    float preco,precoFinal;
        printf("Digite o preco inicial:\n");
        scanf("%f",&preco);
    precoFinal=preco-(preco*0.1);
    printf("Preco final: %.2f",precoFinal);
}
void quetao16() {
    float litros,agua,suco;
        printf("Digite a quantidade de litros de refresco:\n");
        scanf("%f",&litros);
    agua = litros * 8 / 10;
    suco = litros * 2 / 10;
        printf("Litros de agua: %.2f Litros de suco : %.2f ",agua,suco);
}
void quetao17() {
    float alturaPessoa,sombraPessoa,sombraPredio,alturaPredio;
        printf("Digite sua altura em metros:\n");
            scanf("%f", &alturaPessoa);
        printf("Digite o tamanho da sua sombra em metros:\n");
            scanf("%f", &sombraPessoa);
        printf("Digite o tamanho da sombra do predio em metros:\n");
            scanf("%f", &sombraPredio);
    alturaPredio = (alturaPessoa * sombraPredio) / sombraPessoa;
        printf("A altura do predio e: %.2f metros\n", alturaPredio);
}
//questaoF1
float celciusParaahrenheit(float c){
    return(c *1.8)+32;
}
void questaoF1() {
    float resultado;
    resultado = celciusParaahrenheit(0.0);
    printf("%.2f \n",resultado);

}
//questaoF2
float calcularAreaCirculo(float raio){
    return (3.14159 * raio * raio);
}
void questaoF2() {
    float resultado;
    resultado = calcularAreaCirculo(2.0);
    printf("%.2f \n",resultado);
}
//questaoF3
int converterParaMinutos(int horas, int minutos){
    return (horas*60)+minutos;
}
void QuestaoF3() {
    float resultado;
    resultado = converterParaMinutos(2, 30);
    printf("%.2f \n",resultado); 
}
float calcularHipotenusa(float b, float c) {
    float a;
    a = sqrt(pow(b, 2) + pow(c, 2));
    return a;
}
void questaoF4() {
    float cateto1, cateto2, resultado;
    cateto1 = 3;
    cateto2 = 4;
    resultado = calcularHipotenusa(cateto1, cateto2);
    printf("A hipotenusa e: %.2f\n", resultado);
}
float calcularProduto(float num1, float num2) {
    return (num1 * num2);
}
void questaoF5() {
    float resultado;
    resultado = calcularProduto(2.0, 2.0);
    printf("%.2f \n",resultado);
}