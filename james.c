#include <stdio.h>

/**
 * @brief O método void saladCounter é responsável por realizar a conta de qual salada foi mais vendida consecutivamente
 * 
 * @param lista O parâmetro lista recebe um array das respectivas vendas de saladas
 * @param listlength O parâmetro listlength recebe um inteiro que representa o número de vendas feitas
 */
void saladCounter(int lista[], int listlength) {
    int fivecounter = 0, sevencounter = 0, tencounter = 0, maxcounter = 0, highest = 0;

    for(int i = 0; i < listlength; i++) {
        if (lista[i] == 5) {
            sevencounter = 0;
            tencounter = 0;
            fivecounter++;
            if (fivecounter > maxcounter) {
                maxcounter = fivecounter;
                highest = 5;
            }
        }
        else if (lista[i] == 7) {
            fivecounter = tencounter = 0;
            sevencounter++;
            if (sevencounter > maxcounter) {
                maxcounter = sevencounter;
                highest = 7;
            }
        }
        else if (lista[i] == 10) {
            sevencounter = fivecounter = 0;
            tencounter++;
            if (tencounter > maxcounter) {
                maxcounter = tencounter;
                highest = 10;
            }
        }
        else {
            break;
        }
    }

    printf("James vendeu %d saladas de %d reais consecutivamente\n", maxcounter, highest);    
}

/**
 * @brief A função fiveQuantities é responsável por calcular quantas vendas de salada de 5 reais foram feitas
 * 
 * @param lista O parâmetro lista recebe um array das respectivas vendas de saladas
 * @param listlength O parâmetro listlength recebe um inteiro que representa o número de vendas feitas
 * @return int A função retorna um inteiro que representa o número de vendas de saladas de 5 reais feitas
 */
int fiveQuantities(int lista[], int listlength) {
    int five = 0;
    for(int i = 0; i < listlength; i++) {
        if (lista[i] == 5) {
            five++;
        }
    } 
    return five;
}

/**
 * @brief A função sevenQuantities é responsável por calcular quantas vendas de salada de 7 reais foram feitas
 * 
 * @param lista O parâmetro lista recebe um array das respectivas vendas de saladas
 * @param listlength O parâmetro listlength recebe um inteiro que representa o número de vendas feitas
 * @return int A função retorna um inteiro que representa o número de vendas de saladas de 7 reais feitas
 */
int sevenQuantities(int lista[], int listlength) {
    int seven = 0;
    for(int i = 0; i < listlength; i++) {
        if (lista[i] == 7) {
            seven++;
        }
    } 
    return seven;
}

/**
 * @brief A função tenQuantities é responsável por calcular quantas vendas de salada de 10 reais foram feitas
 * 
 * @param lista O parâmetro lista recebe um array das respectivas vendas de saladas
 * @param listlength O parâmetro listlength recebe um inteiro que representa o número de vendas feitas
 * @return int A função retorna um inteiro que representa o número de vendas de saladas de 10 reais feitas
 */
int tenQuantities(int lista[], int listlength) {
    int ten = 0;
    for(int i = 0; i < listlength; i++) {
        if (lista[i] == 10) {
            ten++;
        }
    } 
    return ten;
}

/**
 * @brief A função main é responsável por receber a entrada do código e aplicar as funções e métodos criados
 * 
 * @return int A função retorna 0, indicando que o programa rodou sem problemas
 */

int main() {
    int num, sellArray[10000];

    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        scanf("%d", &sellArray[i]);
    };
    
    int five = fiveQuantities(sellArray, num);
    int seven = sevenQuantities(sellArray, num);
    int ten = tenQuantities(sellArray, num);

    
    printf("James vendeu %d saladas de 5 reais, %d de 7 reais e %d de 10 reais\n", five, seven, ten);
    saladCounter(sellArray, num);

    return 0;
}