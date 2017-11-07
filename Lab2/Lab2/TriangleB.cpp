//
//  TriangleB.cpp
//  Lab2
//
//  Created by Анна Цицилюк on 02.10.17.
//  Copyright © 2017 Анна Цицилюк. All rights reserved.
//

#include "TriangleB.hpp"
TriangleB::TriangleB(){};

void TriangleB::InputValue()
{
    do
    {std::cout<<"Введіть значення сторін 2 трикутника"<<std::endl;
        std::cin>>b;}
    while (b<0);

}
bool TriangleB::IsTr()
{
    if(b+b>length)
        return 1;
    else return 0;
}
