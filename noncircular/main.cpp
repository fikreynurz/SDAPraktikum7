/* Identitas Diri
    Nama    : Muhammad Fikri Nur Sya'Bani
    Kelas   : 1A D4
    NIM     : 221524019
    File    : main.cpp
    Materi  : Double Linked List Berdasarkan Algoritma Masing - Masing
 */

#include <stdio.h>
#include <stdlib.h>
#include "body.h"

int main()
{
    addNodeFirst('d');

    addNodeFirst('b');

    addNodeFirst('a');

    addNodeLast('e');

    addNodeMiddle('c', 'b', 'd');

    printList();
    
    deleteNode('e');

    printList();

    addNodeLast('e');

    printList();

    return 0;
}