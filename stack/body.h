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

struct Node *top = NULL;

void push(char data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = top;
    top = newNode;
    printf("Data %c berhasil ditambahkan pada stack\n", data);
}

void pop()
{
    if (top == NULL)
    {
        printf("Stack kosong\n");
        return;
    }

    struct Node *temp = top;
    top = top->next;
    printf("Data %c berhasil dihapus dari stack\n", temp->data);
    free(temp);
}

void printStack()
{
    if (top == NULL)
    {
        printf("Stack kosong\n");
        return;
    }

    struct Node *temp = top;
    while (temp != NULL)
    {
        printf("%c ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}