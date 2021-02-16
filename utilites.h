#ifndef CONTAINER_UTILITES_H
#define CONTAINER_UTILITES_H

#include <iostream>
#include "Stack.h"
#include "Queue.h"

using namespace std;

template<typename D>
void PrintEmpty(Stack<D> stack)
{
    if (stack.isEmpty()) {
        cout << "Стек пустой" << endl;
    } else {
        cout << "Стек не пустой" << endl;
    }
}

template<typename D>
void PrintEmptyQ (Queue<D> queue)
{
    if (queue.isEmpty()) {
        cout << "Очередь пуста" << endl;
    } else {
        cout << "Очередь есть" << endl;
    }
}

void Print(int num)
{
    cout << num << endl;
}

int Add10(int num)
{
    return num + 10;
}

#endif //CONTAINER_UTILITES_H
