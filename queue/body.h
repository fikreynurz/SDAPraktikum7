/* Identitas Diri
    Nama    : Muhammad Fikri Nur Sya'Bani
    Kelas   : 1A D4
    NIM     : 221524019
    File    : body.h
    Materi  : Double Linked List Berdasarkan Algoritma Masing - Masing
 */

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    char data;
    struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

void enqueue(char data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (front == NULL)
    {
        front = newNode;
        rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }

    printf("Data %c berhasil ditambahkan pada queue\n", data);
}

void dequeue()
{
    if (front == NULL)
    {
        printf("Queue kosong\n");
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
    }

    printf("Data %c berhasil dihapus dari queue\n", temp->data);
    free(temp);
}

void printQueue()
{
    if (front == NULL)
    {
        printf("Queue kosong\n");
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