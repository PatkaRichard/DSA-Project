//
// Created by Botond on 2021. 04. 13..
//

#include "queue.h"
#include <stdlib.h>
#include <stdio.h>

QUEUE *Create (int capacity) {
    QUEUE *newQueue = malloc(sizeof (QUEUE));
    newQueue->front = -1;
    newQueue->rear = -1;
    newQueue->maxsize = capacity;
    newQueue->items = (int*)calloc(capacity, sizeof (int));
    return newQueue;
}

int IsEmpty (QUEUE *myQueue) {
    if (myQueue->front == -1)
        return 1;
    else return 0;
}

int IsFull (QUEUE *myQueue){
    if (myQueue->rear == myQueue->maxsize-1)
        return 1;
    else return 0;
}

void Put( QUEUE *myQueue, int a){
    myQueue->rear++;
    myQueue->items[myQueue->rear] = a;
}

int Get(QUEUE *myQueue){
    int a = myQueue->items[myQueue->front + 1];
    myQueue->front++;
    return a;
}

int GetSum(QUEUE *myQueue){
    int sum = 0;
    for (int i = myQueue->front+1; i <= myQueue->rear; ++i) {
        sum += myQueue->items[i];
    }
    return sum;
}

int print(QUEUE *myQueue){
    for (int i = myQueue->front+1; i <= myQueue->rear; ++i) {
        printf("%d ", myQueue->items[i]);
    }
}

void Destroy(QUEUE *myQueue){
    free(myQueue);
}

int Front_element(QUEUE *myQueue){
    return myQueue->items[myQueue->front + 1];
}