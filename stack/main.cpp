/* Identitas Diri
    Nama    : Muhammad Fikri Nur Sya'Bani
    Kelas   : 1A D4
    NIM     : 221524019
    File    : main.cpp
    Materi  : Stack
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
        printStack();
        printf("Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print Stack\n");
        printf("4. Keluar\n");
        printf("Masukkan Input: ");
        scanf("%d", &input);

        switch (input)
        {
        case 1:
            fflush(stdin);
            printf("Masukkan Karakter: ");
            scanf("%c", &karakter);
            push(karakter);
            break;
        case 2:
            pop();
            break;
        case 3:
            printStack();
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
