#ifndef CONTAINER_QUEUE_H
#define CONTAINER_QUEUE_H

#include <vector>
#include "Exception.h"
#include "Stack.h"

using namespace std;

template<class T>
class Queue
{
private:
    vector<T> container;

public:
    Queue() {}

    Queue(vector<T> container) {
        this->container = container;
    }

    //добавление элементов в очередь
    void Push(T value)
    {
        container.push_back(value);
    }

    //удаление первого элемента из очереди (первый пришел->первый ушёл) - не сработало
    T Pop() {
        if (isEmpty()) {
            throw Exception::Bottom;
        } else {
            //container.erase(container.begin() + index);
            int temp = container.erase(&container[0]);
            return temp;
        }
    }

    T Fetch() {
        while (!isEmpty()) {
            // считываем данные , начиная с первого элемента очереди
            int line = move(container.front());
            return line;
        }
    }

    //пуста ли очередь?
    bool isEmpty()
    {
        /*
        if (container.empty()) {
            return true;
        } else {
            return false;
        }
        */

        return container.empty();
    }

    //чистка
    void Clear()
    {
        container.clear();
    }

    void ForEach(void(*Func)(T))
    {
        for (auto i = container.rend()-1; i > container.rbegin()-1; i--) {
            Func(*i);
        }
    }
    void ForEach(T(*Func)(T))
    {
        for (auto i = container.rend()-1; i > container.rbegin()-1; i--) {
            *i = Func(*i);
        }
    }

};


#endif //CONTAINER_QUEUE_H
