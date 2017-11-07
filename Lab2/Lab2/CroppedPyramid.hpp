//
//  CroppedPyramid.hpp
//  Lab2
//
//  Created by Анна Цицилюк on 02.10.17.
//  Copyright © 2017 Анна Цицилюк. All rights reserved.
//

#ifndef CroppedPyramid_hpp
#define CroppedPyramid_hpp
#include "TriangleA.hpp"
#include "TriangleB.hpp"
#include <stdio.h>

class Pyramid:public TriangleA, TriangleB
{
private:
    float getK();
    float h;
    float k;
public:
    Pyramid();
   float GetArea();
   float GetVolume();
   
    
    
};
#endif /* CroppedPyramid_hpp */
