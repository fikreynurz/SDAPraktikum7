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
    struct Node *prev;
};

struct Node *front = NULL;
struct Node *rear = NULL;

void addNodeFirst(char data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;

    if (front == NULL)
    {
        front = newNode;
        rear = newNode;
    }
    else
    {
        newNode->next = front;
        front->prev = newNode;
        front = newNode;
    }
    printf("Node pertama dengan data %c telah ditambahkan\n", newNode->data);
}

void addNodeLast(char data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;

    if (front == NULL)
    {
        front = newNode;
        rear = newNode;
    }
    else
    {
        rear->next = newNode;
        newNode->prev = rear;
        rear = newNode;
    }
    printf("Node terakhir dengan data %c telah ditambahkan\n", newNode->data);
}

void addNodeMiddle(char data, char prevData, char nextData)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;

    struct Node *temp = front;
    while (temp != NULL)
    {
        if (temp->data == prevData && temp->next->data == nextData)
        {
            break;
        }
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Node dengan data %c atau %c tidak ditemukan\n", prevData, nextData);
        return;
    }

    newNode->prev = temp;
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;

    printf("Node baru dengan data %c telah ditambahkan antara Node dengan data %c dan %c\n", data, prevData, nextData);
}

void deleteNode(char data)
{
    if (front == NULL)
    {
        printf("List kosong\n");
        return;
    }

    struct Node *temp = front;
    while (temp != NULL)
    {
        if (temp->data == data)
        {
            break;
        }
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Node dengan data %c tidak ditemukan\n", data);
        return;
    }

    if (temp == front)
    {
        front = temp->next;
    }
    if (temp == rear)
    {
        rear = temp->prev;
    }
    if (temp->prev != NULL)
    {
        temp->prev->next = temp->next;
    }
    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }

    free(temp);
    printf("Node dengan data %c telah dihapus\n", data);
}

void printList()
{
    if (front == NULL)
    {
        printf("List kosong\n");
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