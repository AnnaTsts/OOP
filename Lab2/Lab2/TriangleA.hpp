//
//  TriangleA.hpp
//  Lab2
//
//  Created by Анна Цицилюк on 02.10.17.
//  Copyright © 2017 Анна Цицилюк. All rights reserved.
//

#ifndef TriangleA_hpp
#define TriangleA_hpp
#include "Intercept.hpp"
#include <stdio.h>
//#include <iostream>

class TriangleA:virtual public Intercept
{
protected:
    float a2,a3;
public:
    bool IsTiangle();
    TriangleA();
    void InputValue();
     float GetAr();
};
#endif /* TriangleA_hpp */
