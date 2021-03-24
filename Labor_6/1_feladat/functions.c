//
// Created by Legion on 3/24/2021.
//

#include "functions.h"
#include "stdlib.h"
#include "stdio.h"
QUEUE *create(int capacity){
    QUEUE *queue=(QUEUE*)malloc(sizeof (QUEUE*));
    if(!queue){
        printf("Error#1");
        return 0;
    }
    queue->maxSize=capacity;
    queue->front=-1;
    queue->rear=-1;

    queue->item=(int*)malloc(queue->maxSize*sizeof (int));
    if(!queue->item){
        printf("Erorr#2");
        return 0;
    }
    return queue;

}
bool isEmpty(QUEUE* queue){
    return (queue->rear==queue->front)&&(queue->front==-1);
}
bool isFull(QUEUE* queue){
    return queue->maxSize-1==queue->rear;
}
void put(QUEUE* queue, int a){
    if(!isEmpty(queue)){
        if(!isFull(queue)) {
            queue->rear++;
            queue->item[queue->rear]=a;
        }else{
           printf("A verem tele van!");
        }
    }else{
        queue->rear++;
        queue->item[queue->rear]=a;
        queue->front++;
    }
}
int Front_Element(QUEUE*queue){
    if(!isEmpty(queue))
        return queue->item[queue->front];
}
int get(QUEUE* queue){
    int tmp=Front_Element(queue);
    queue->front++;
    return tmp;
}