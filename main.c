#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main() {
    FILE *fp;
    fp = fopen("F:\\Student\\DSA_Projekt\\DSA-Project\\be.txt", "r");
    int numberOfMovies, numberOfPeople;
    fscanf(fp, "%d", &numberOfMovies);
    int *movieList = (int*)calloc(numberOfMovies, sizeof (int));

    for (int i = 0; i < numberOfMovies; ++i) {
        fscanf(fp, "%d", &movieList[i]);
    }

//    for (int i = 0; i < numberOfMovies; ++i) {
//        printf("%d ", movieList[i]);
//    }

    fscanf(fp, "%d", &numberOfPeople);
    int *people = (int*)calloc(numberOfPeople, sizeof (int));

    for (int i = 0; i < numberOfPeople; ++i) {
        fscanf(fp, "%d", &people[i]);
    }

//    for (int i = 0; i < numberOfPeople; ++i) {
//        printf("%d ", people[i]);
//    }



    for (int i = 0; i < numberOfPeople; ++i) {
        QUEUE *moviesToWatch = Create(numberOfMovies);
        for (int j = 0; j < numberOfMovies; j++) {

            Put(moviesToWatch, movieList[j]);

            if(GetSum(moviesToWatch) > people[i]){
                int a = Get(moviesToWatch);
            }
            else if(GetSum(moviesToWatch) == people[i]){
                printf("[");
                print(moviesToWatch);
                printf("]");
            }
        }
        printf("\n");
        Destroy(moviesToWatch);
    }
}
