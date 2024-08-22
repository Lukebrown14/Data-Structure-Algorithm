#include <stdio.h>

// A linear DS that follows the First in, First out (FiFo) principle. It has 2 main
// operations Enqueue (adds element to the REAR of the queue), Dequeue (removes a element
// from the FRONT of the queue)

// Array-based queue implemation

#define MAX 5

struct Queue {
  int iteams[MAX];
  int front, rear;
};

void initialize(struct Queue* q){
    q->front = -1;
    q->rear = -1;
}

int isEmpty(struct Queue* q){
    return q->front == -1;
}

int isFull(struct Queue* q){
    return q->rear == MAX - 1;
}

void enqueue(struct Queue* q, int value){
    if(isFull(q)){
        printf("Queue is full. Cannot enqueue %d\n", value);
    } else {
        if(q->front == -1){ // if the queue is initially empty
            q->front = 0;
        }
        q->rear++;
        q->iteams[q->rear] = value;
        printf("%d enqueued to the queue\n", value);
    }
}

int dequeue(struct Queue* q){
    int value;
    if(isEmpty(q)){
        printf("Queue is empty. Cannot dequeue");
        return -1;
    } else{
        value = q->iteams[q->front];

        if(q->front >= q->rear){ // queue is empty
            q->front = -1;
            q->rear = -1;
        }else{
            q->front++;
        }
        return value;
    }
}

int peek(struct Queue* q){
    if(isEmpty(q)){
        printf("Queue is empty\n");
        return -1;
    } else{
        return q->iteams[q->front];
    }
}


int main(){
    struct Queue q;
    initialize(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    printf("Front element is %d\n", peek(&q));
    printf("Dequeue element is %d\n", dequeue(&q));
    printf("Dequeue element is %d\n", dequeue(&q));

    if(isEmpty(&q)){
        printf("Queue is empty\n");
    }else {
        printf("Queue is NOT empty\n");
    }

    return 0;
}
