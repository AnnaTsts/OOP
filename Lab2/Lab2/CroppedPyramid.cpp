//
//  CroppedPyramid.cpp
//  Lab2
//
//  Created by Анна Цицилюк on 02.10.17.
//  Copyright © 2017 Анна Цицилюк. All rights reserved.
//

#include "CroppedPyramid.hpp"
#include "math.h"
using namespace std;
    Pyramid::Pyramid():TriangleA(),TriangleB(){
        do
        {std::cout<<"Введіть значення сторін 2 трикутника"<<std::endl;
            std::cin>>b;}
        while (b<0);
        do{cout<<"H"<<endl;
            cin>>h;}
        while(h<0);
    
}

float Pyramid::getK(){
    float k;
    float l=length/2;
    float H=sqrt(b*b-l*l);
    k=H/h;
    return k;
}

float Pyramid::GetArea(){
    float k=getK();
    float S;
    float H=sqrt(pow((k-1),2)+pow(h,2));
    
      //      cout<<a1<<endl<<a2<<endl<<a3<<endl;
    S=((k+1)/2)*H*(length+a2+a3);
    return S;
}

float Pyramid::GetVolume()
{
    float k=getK();
    float S1=GetAr();
   //cout<<"S1 "<<S1<<endl;
    float S2=S1*k*k;
  //  cout<<"S2"<<S2<<endl;
    float V=(h/3)*(S1+S2+sqrt(S1*S2));
    return V;
    
}

