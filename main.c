#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main() {
    int numberOfMovies, numberOfPeople;
    scanf("%d", &numberOfMovies);
    int *movieList = (int*)calloc(numberOfMovies, sizeof (int));

    for (int i = 0; i < numberOfMovies; ++i) {
        scanf("%d", movieList[i]);
    }

    scanf("%d", &numberOfPeople);
    int *people = (int*)calloc(numberOfPeople, sizeof (int));

    for (int i = 0; i < numberOfPeople; ++i) {
        scanf("%d", people[i]);
    }

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
    }
}
