/*
Задача 1. Перемещение объектов
Описание
Вам нужно реализовать шаблонную функцию, которая перемещает содержимое одного std::vector в другой.

std::vector <std::string> one = { "test_string1", "test_string2" };
std::vector <std::string> two;
move_vectors(...)
*/

#include <iostream>
#include<vector>

template <class T>

void move_vectors(std::vector<T> *a, std::vector<T>*b)
{
    auto temp = *a;
    *a = *b;
    *b = temp;
}

void main()
{
    std::vector <std::string> one = { "test_string1", "test_string2" };
    std::vector <std::string> two;
    move_vectors(&one, &two);

    //for (auto elem : two) std::cout << elem << " ";
}

