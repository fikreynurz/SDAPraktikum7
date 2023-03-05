/* Identitas Diri
    Nama    : Muhammad Fikri Nur Sya'Bani
    Kelas   : 1A D4
    NIM     : 221524019
    File    : main.cpp
    Materi  : Double Linked List Circular
 */

#include <stdio.h>
#include <stdlib.h>
#include "body.h"

int main()
{
    int input = 0;
    char karakter, karPrev, karNext;

    while (input != 5)
    {
        system("cls");
        printList();
        printf("Menu:\n");
        printf("1. Tambah Node Diawal\n");
        printf("2. Tambah Node Diakhir\n");
        printf("3. Tambah Node Diantara Dua Node\n");
        printf("4. Hapus Node\n");
        printf("5. Keluar\n");
        printf("Masukkan Input: ");
        scanf("%d", &input);

        switch (input)
        {
        case 1:
            fflush(stdin);
            printf("Masukkan Karakter: ");
            scanf("%c", &karakter);
            printf("karakter %c telah terdaftar!", karakter);
            addNodeFirst(karakter);
            break;
        case 2:
            fflush(stdin);
            printf("Masukkan Karakter: ");
            scanf("%c", &karakter);
            addNodeLast(karakter);
            break;
        case 3:
            fflush(stdin);
            printf("Masukkan Karakter: ");
            scanf("%c", &karakter);
            fflush(stdin);
            printf("Masukkan Sebelah Kiri Karakter: ");
            scanf("%c", &karPrev);
            fflush(stdin);
            printf("Masukkan Sebelah Kanan Karakter: ");
            scanf("%c", &karNext);
            fflush(stdin);
            addNodeMiddle(karakter, karPrev, karNext);
            break;

        case 4:
            fflush(stdin);
            printf("Masukkan Karakter: ");
            scanf("%c", &karakter);
            deleteNode(karakter);
            break;
        default:
            printf("Input tidak terdaftar!");
            break;
        }
    }

    return 0;
}