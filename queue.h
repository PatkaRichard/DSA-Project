//
// Created by Botond on 2021. 04. 13..
//

#ifndef DSA_PROJECT_QUEUE_H
#define DSA_PROJECT_QUEUE_H

typedef struct
{
    int maxsize;
    int front, rear;
    int *items;
} QUEUE;

QUEUE * Create (int capacity) ;

int IsEmpty (QUEUE *myQueue) ;

int IsFull (QUEUE *myQueue);

void Put( QUEUE *myQueue, int a);

int Get(QUEUE *myQueue);

int GetSum(QUEUE *myQueue);

int print(QUEUE *myQueue);

int Front_element(QUEUE *myQueue);

void Destroy(QUEUE *myQueue);

#endif //DSA_PROJECT_QUEUE_H
