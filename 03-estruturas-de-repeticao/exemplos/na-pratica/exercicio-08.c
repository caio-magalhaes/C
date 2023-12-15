/* 
Elabore um programa que receba a idade, o peso, o sexo e o estado civil de várias
pessoas e imprima a quantidade daquelas que são casadas, solteiras, separadas
e viúvas. Apresente a média de idade e de peso. O algoritmo finaliza quando for
informado o valor zero para idade.
 */
#include <stdio.h>
int main(){
    int age, weight, marriedCount, singleCount, divorcedCount, widowedCount, civilState, ageCount, weightCount, peopleCounter, weightMean, ageMean;
    char sex;

    do
    {
        printf("Insira a idade, peso, sexo(M ou F) e o estado civil( 1-Casado, 2-Solteiro, 3-Separado, 4-Viuvo ): ");
        scanf("%d %d %c %s", &age, &weight, &sex, &civilState);
        switch (civilState)
        {
        case 1:
            peopleCounter += 1;
            marriedCount += 1;
            ageCount += age;
            weightCount += weight;
            break;
        case 2:
            peopleCounter += 1;
            singleCount += 1;
            ageCount += age;
            weightCount += weight;
            break;
        case 3:
            peopleCounter += 1;
            divorcedCount += 1;
            ageCount += age;
            weightCount += weight;
            break;
        case 4:
            peopleCounter += 1;
            widowedCount += 1;
            ageCount += age;
            weightCount += weight;
            break;
        
        default:
            printf("Invalid civilState!");
            break;
        }
        
    } while (age != 0);
    weightMean = weightCount / peopleCounter;
    ageMean = ageCount/ peopleCounter;
    printf("%d %d %d %d %d %d", marriedCount, singleCount, divorcedCount, widowedCount, weightMean, ageMean );

    return 0;
}