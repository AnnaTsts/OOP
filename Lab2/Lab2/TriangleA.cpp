//
//  TriangleA.cpp
//  Lab2
//
//  Created by Анна Цицилюк on 02.10.17.
//  Copyright © 2017 Анна Цицилюк. All rights reserved.
//

#include "TriangleA.hpp"
#include "math.h"
void TriangleA::InputValue()
{
    do{
    std::cout<<"Введіть значення сторін 1 трикутника"<<std::endl;
        std::cin>>a2>>a3;}
    while (a2<0||a3<0);
    
}


TriangleA::TriangleA()

{InputValue();};
bool TriangleA:: IsTiangle()
{
    if(length+a2>a3&&a2+a3>length&&length+a3>a2)
        return 1;
    else return 0;
}

float TriangleA::GetAr()
{
    float p=(length+a2+a3)/2;
    float s=sqrt(p*(p-length)*(p-a2)*(p-a3));
    return s;
}
