/* Identitas Diri
    Nama    : Muhammad Fikri Nur Sya'Bani
    Kelas   : 1A D4
    NIM     : 221524019
    File    : main.cpp
    Materi  : Deque
 */

#include <stdio.h>
#include <stdlib.h>
#include "body.h"


int main()
{
    int input = 0;
    char karakter;

    while (input != 5)
    {
        system("cls");
        printDeque();
        printf("Menu:\n");
        printf("1. Push Front\n");
        printf("2. Push Rear\n");
        printf("3. Pop Front\n");
        printf("4. Pop Rear\n");
        printf("5. Keluar\n");
        printf("Masukkan Input: ");
        scanf("%d", &input);

        switch (input)
        {
        case 1:
            fflush(stdin);
            printf("Masukkan Karakter: ");
            scanf("%c", &karakter);
            pushFront(karakter);
            break;
        case 2:
            fflush(stdin);
            printf("Masukkan Karakter: ");
            scanf("%c", &karakter);
            pushRear(karakter);
            break;
        case 3:
            popFront();
            break;
        case 4:
            popRear();
            break;
        case 5:
            printf("Terimakasih!");
            return;
        default:
            printf("Pilihan tidak diketahui!");
            break;
        }
    }
    return 0;
}