#include <stdio.h>

void saladCounter(int lista[]) {
    int fivecounter, sevencounter, tencounter, maxcounter, highest;

    fivecounter = sevencounter = tencounter = maxcounter = 0;

    for(int i = 0; i < 10000; i++) {
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

int fiveQuantities(int lista[], int listlength) {
    int five = 0;
    for(int i = 0; i < listlength; i++) {
        if (lista[i] == 5) {
            five++;
        }
    } 
    return five;
}

int sevenQuantities(int lista[], int listlength) {
    int seven = 0;
    for(int i = 0; i < listlength; i++) {
        if (lista[i] == 7) {
            seven++;
        }
    } 
    return seven;
}

int tenQuantities(int lista[], int listlength) {
    int ten = 0;
    for(int i = 0; i < listlength; i++) {
        if (lista[i] == 10) {
            ten++;
        }
    } 
    return ten;
}

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
    saladCounter(sellArray);

}