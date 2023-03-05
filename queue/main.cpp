/* Identitas Diri
    Nama    : Muhammad Fikri Nur Sya'Bani
    Kelas   : 1A D4
    NIM     : 221524019
    File    : main.cpp
    Materi  : Queue
 */

#include <stdio.h>
#include <stdlib.h>
#include "body.h"

int main()
{
    int input = 0;
    char karakter;

    while (input != 4)
    {
        system("cls");
        printQueue();
        printf("Menu:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Print Queue\n");
        printf("4. Keluar\n");
        printf("Masukkan Input: ");
        scanf("%d", &input);

        switch (input)
        {
        case 1:
            fflush(stdin);
            printf("Masukkan Karakter: ");
            scanf("%c", &karakter);
            enqueue(karakter);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            printQueue();
            break;
        case 4:
            printf("Terima kasih telah menggunakan program ini\n");
            break;
        default:
            printf("Input tidak valid\n");
            break;
        }
        system("pause");
    }
    return 0;
}
