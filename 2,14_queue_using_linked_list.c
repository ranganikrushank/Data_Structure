#include <stdio.h>
#include <stdlib.h>

typedef struct Node 
{
    int data;
    struct Node* next;
} Node;

typedef struct Queue 
{
    Node* front;
    Node* rear;
} Queue;

void enqueue(Queue* queue, int data) 
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if (queue->rear == NULL) 
    {
        queue->front = queue->rear = newNode;
        return;
    }

    queue->rear->next = newNode;
    queue->rear = newNode;
}

int dequeue(Queue* queue) 
{
    if (queue->front == NULL) 
    {
        printf("Queue is empty\n");
        return -1;
    }

    Node* temp = queue->front;
    int data = temp->data;
    queue->front = temp->next;

    if (queue->front == NULL) 
    {
        queue->rear = NULL;
    }

    free(temp);
    return data;
}

int main() 
{
    Queue queue;
    queue.front = queue.rear = NULL;

    enqueue(&queue, 1);
    enqueue(&queue, 2);
    enqueue(&queue, 3);

    printf("Dequeued: %d\n", dequeue(&queue));
    printf("Dequeued: %d\n", dequeue(&queue));

    enqueue(&queue, 4);
    enqueue(&queue, 5);

    printf("Dequeued: %d\n", dequeue(&queue));
    printf("Dequeued: %d\n", dequeue(&queue));

    return 0;
}