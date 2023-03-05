/* Identitas Diri
    Nama    : Muhammad Fikri Nur Sya'Bani
    Kelas   : 1A D4
    NIM     : 221524019
    File    : body.h
    Materi  : Deque
 */

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    char data;
    struct Node *next;
    struct Node *prev;
};

struct Node *front = NULL;
struct Node *rear = NULL;

void pushFront(char data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;

    if (front == NULL)
    {
        rear = newNode;
        newNode->next = NULL;
    }
    else
    {
        front->prev = newNode;
        newNode->next = front;
    }
    front = newNode;

    printf("Data %c berhasil ditambahkan di depan deque\n", data);
}

void pushRear(char data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (rear == NULL)
    {
        front = newNode;
        newNode->prev = NULL;
    }
    else
    {
        rear->next = newNode;
        newNode->prev = rear;
    }
    rear = newNode;

    printf("Data %c berhasil ditambahkan di belakang deque\n", data);
}

void popFront()
{
    if (front == NULL)
    {
        printf("Deque kosong\n");
        return;
    }

    struct Node *temp = front;

    if (front == rear)
    {
        front = NULL;
        rear = NULL;
    }
    else
    {
        front = front->next;
        front->prev = NULL;
    }

    printf("Data %c berhasil dihapus dari depan deque\n", temp->data);
    free(temp);
}

void popRear()
{
    if (rear == NULL)
    {
        printf("Deque kosong\n");
        return;
    }

    struct Node *temp = rear;

    if (front == rear)
    {
        front = NULL;
        rear = NULL;
    }
    else
    {
        rear = rear->prev;
        rear->next = NULL;
    }

    printf("Data %c berhasil dihapus dari belakang deque\n", temp->data);
    free(temp);
}

void printDeque()
{
    if (front == NULL)
    {
        printf("Deque kosong\n");
        return;
    }

    struct Node *temp = front;
    while (temp != NULL)
    {
        printf("%c ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}