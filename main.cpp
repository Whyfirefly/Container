#include <iostream>
#include "Stack.h"
#include "utilites.h"
#include "Exception.h"
#include "Queue.h"

using namespace std;

int main() {
    system("chcp 65001");

    /*Stack<int> stack;
    PrintEmpty(stack);

    stack.Push(5);
    stack.Push(7);
    PrintEmpty(stack);

    stack.ForEach(Print);
    stack.ForEach(Add10);
    stack.ForEach(Print);*/

    Queue<int> queue;
    PrintEmptyQ(queue);

    queue.PushQ(6);
    queue.PushQ(8);
    queue.PushQ(9);
    PrintEmptyQ(queue);

    queue.ForEach(Print);
    queue.ForEach(Add10);
    queue.ForEach(Print);

    //функция удаления не сработала :(
    cout << endl;
    queue.Remove();
    queue.ForEach(Print);




    return 0;
}
