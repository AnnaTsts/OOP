//
//  Array.hpp
//  Lab4
//
//  Created by Анна Цицилюк on 03.11.17.
//  Copyright © 2017 Анна Цицилюк. All rights reserved.
//

#ifndef Array_hpp
#define Array_hpp
#include "Node.hpp"
#include <string>
#include <stdio.h>
class Node;
class  Arr
{
private:
   Node *n;
    int SizeOfArr;
    int SizeNow;
    

    
public:
    Arr();
    Arr(int);
    void Initialisation();  //присвоение значения массива
    bool Check();           //переполнение
    void BiggerArr();       //увелечение массива
    void print();           //!!!!!!!!ПРОВЕРКА!!!!
    
    bool CheckKey(std::string);
    bool KeyIsOriginal(std::string,int);
    
    Arr operator<<(Node N);
    Arr operator>>(int);
    Node &operator [](int);
    
    Node &operator [](std::string);

    Arr * operator +(Arr);
    
    Arr operator +=(Arr);
    
    
};

#endif /* Array_hpp */
