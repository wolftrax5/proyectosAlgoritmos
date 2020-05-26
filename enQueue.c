#include <stdio.h>
#define SIZE 5
int values[SIZE], front = -1, rear = -1;

void enQueue(int value)
{
    if (front == 0 && rear == SIZE - 1)
        printf("Nuestro Queue esta lleno\n");
    else
    {
        if (front == -1)
        {
            front = 0;
        }

        if (rear == SIZE - 1 && front > 0)
        {
            rear = -1;
        }

        rear++;
        values[rear] = value;
        printf("Se inserto el valor %d correctamente\n", value);
    }

    imprimir(values);
}

void deQueue()
{
    if (front == -1)
        printf("Nuestro Queue esta vacio\n");
    else
    {
        printf("se elimino el valor %d\n", values[front]);
        front++;
        if (front == SIZE)
        {
            if (rear > -1)
                front = 0;
            else
                front = -1;
        }
    }
    imprimir(values);
}

void imprimir(int v[])
{
    /*for(int i=front; i<=rear; i++){
        printf("%d, ", v[i]);
        if(rear<front && i==SIZE-1){
            i=-1;
        }
    }*/
    int last = SIZE;
    for (int i = front; i < last; i++)
    {
        printf("%d, ", v[i]);
    }
    if (rear < front)
    {
        for (int i = 0; i <= rear; i++)
        {
            printf("%d, ", v[i]);
        }
    }
    printf("\n");
}

main(int argc, char const *argv[])
{
    enQueue(1);
    enQueue(2);
    enQueue(3);
    deQueue();
    enQueue(4);
    deQueue();
    enQueue(5);
    enQueue(6);
    enQueue(7);
    deQueue();
    enQueue(1);
    return 0;
}