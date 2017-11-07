//
//  Intercept.cpp
//  Lab2
//
//  Created by Анна Цицилюк on 02.10.17.
//  Copyright © 2017 Анна Цицилюк. All rights reserved.
//

#include "Intercept.hpp"

Intercept::Intercept()
{
    do InputValue();
    while (length<0);
}
void Intercept::InputValue(){
    std::cout<<"Введіть довжину відрізка основи "<<std::endl;
    std::cin>>length;
}
 
