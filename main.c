#include <stdio.h>
#include <stdlib.h>

int main(){

float ConsumoM, DistanciaP, CombustivelG;

    printf("Insira a distancia percorrida (km) e o combustivel gasto(l) no seu trajeto intercalando por espacos: ", DistanciaP, CombustivelG);
    scanf("%f" "%f", &DistanciaP, &CombustivelG);

ConsumoM = (DistanciaP/CombustivelG);

    printf("\nO seu consumo medio foi de %.1f km/l", ConsumoM);

}
