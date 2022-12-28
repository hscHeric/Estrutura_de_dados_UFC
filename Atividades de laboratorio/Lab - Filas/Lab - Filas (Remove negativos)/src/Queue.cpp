#include "../include/Queue.h"

Queue::Queue(const int capacity) {
    this->capacity = capacity;
    this->m_size = 0;
    this->first = 0;
    this->array = new int[capacity];
}

Queue::~Queue()
{
    delete[] array;
}

bool Queue::empty()
{
    return m_size == 0;
}

bool Queue::full()
{
    return m_size == capacity;
}

int Queue::size()
{
    return m_size;
}

int &Queue::front()
{
    if (empty())
    {
        throw std::runtime_error(" erro: fila vazia ");
    }
    return array[first];
}

int &Queue::back()
{
    if (empty())
    {
        throw std::runtime_error(" erro: fila vazia ");
    }
    return array[(first + m_size - 1) % capacity];
}

void Queue::push_back(const int &data)
{
    if (full())
    {
        throw std::runtime_error(" erro: fila cheia ");
    }
    array[(first + m_size) % capacity] = data;
    m_size++;
}

void Queue::pop_front()
{
    if (empty())
    {
        throw std::runtime_error(" erro: fila vazia ");
    }
    first = (first + 1) % capacity;
    m_size--;
}
