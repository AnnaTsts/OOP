//
//  TriangleB.hpp
//  Lab2
//
//  Created by Анна Цицилюк on 02.10.17.
//  Copyright © 2017 Анна Цицилюк. All rights reserved.
//

#ifndef TriangleB_hpp
#define TriangleB_hpp
#include "Intercept.hpp"
#include <stdio.h>
class TriangleB:virtual public Intercept
{
protected:
    float b;
public:
    TriangleB();
    void InputValue();
    bool IsTr();
 //s    float GetVolume();
};


#endif /* TriangleB_hpp */
