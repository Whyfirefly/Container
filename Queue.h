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
    void PushQ(T value)
    {
        container.push_back(value);
    }

    //удаление первого элемента из очереди (первый пришел->первый ушёл) - не сработало
    T Remove() {
        if (isEmpty()) {
            throw Exception::Bottom;
        } else {
            //container.erase(container.begin() + index);
            container.erase(&container[1]);
        }
    }

    T FetchQ() {
        while (!isEmpty()) {
            // считываем данные , начиная с первого элемента очереди
            auto line = move(container.front());
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
