//
//  Array.cpp
//  Lab4
//
//  Created by Анна Цицилюк on 03.11.17.
//  Copyright © 2017 Анна Цицилюк. All rights reserved.
//

#include "Array.hpp"
#include <iostream>

//констуктор без параметров

static int SizeOfArr;

Arr::Arr()
{
    SizeOfArr=15;
    SizeNow=10;

  n=new Node[15];
   //   std::cout<<"New Arr";
}

//констуктор с параметром размера массива
Arr::Arr(int k)
{
    
    n=new Node[k+5];
    SizeOfArr=k+5;
    SizeNow=k;
    
     //std::cout<<"New Arr k "<<k;
}
//проверка что еще есть место в массиве
bool Arr::Check()
{
    if(SizeOfArr==SizeNow+1)
        return 1;
    return 0;
}
//увелечение размера массива
void Arr::BiggerArr()
{
    //std::cout<<std::endl<<"It come bigger"<<std::endl;
       Node *nptr=new Node[SizeNow+6];
    
    for(int i=0;i<SizeNow;i++)
    {nptr[i].key=n[i].key;
    nptr[i].value=n[i].value;}
    SizeOfArr=SizeNow+6;
   // delete n;
    n=nptr;
   // print();

    
}

//инициализация массива
void Arr::Initialisation()
{
    for(int i=0;i<SizeNow;i++)
    {
        do
        { std::cout<<std::endl<<i+1<<")Введіть ключ і значення"<<std::endl;
        std::cin>>n[i].key>>n[i].value;
        }
        while (!KeyIsOriginal(n[i].key,i));
        
    }
}

//чисто проверка
void Arr::print()
{
    std::cout<<std::endl<<"MaxSize"<<SizeOfArr<<std::endl;
    std::cout<<"SizeNow"<<SizeNow<<std::endl;

    for(int i=0;i<SizeNow;i++)
    {
        std::cout<<std::endl<<i+1<<")"<<std::endl;
        std::cout<<n[i].key<<std::endl<<n[i].value<<std::endl;
        
    }

}

Arr Arr:: operator<< (Node N)
{
    if(Check())
       BiggerArr();
    if(KeyIsOriginal(N.key,SizeNow))
    {
    n[SizeNow].key=N.key;
    n[SizeNow].value=N.value;
    SizeNow++;
    }
    else std::cout<<"Ключ не є оригінальним"<<std::endl;
    return *this;
}

Arr Arr:: operator>> (int k)
{
    for(int i=0;i<k;i++)
    SizeNow--;
    
  //  delete n[SizeNow];
    return *this;
}

Node &Arr::operator [](int j)
{
    return n[j];
}

Arr* Arr::operator+(Arr N)
{
    Arr *tmp;
    tmp=new Arr(this->SizeNow+N.SizeNow);
    //tmp->n=new Node[this->SizeOfArr+N.SizeOfArr];
    for(int i=0;i<this->SizeNow;i++)
    { tmp->n[i].key=this->n[i].key;
      tmp->n[i].value=this->n[i].value;
    }
    for(int i=0;i<N.SizeNow;i++)
    { tmp->n[i+this->SizeNow].key=N.n[i].key;
        tmp->n[i+this->SizeNow].value=N.n[i].value;
    }
    
    return tmp;
}

Arr  Arr:: operator+=(Arr N)
{
    Node *nptr=new Node[SizeNow+N.SizeNow];
    
    for(int i=0;i<SizeNow;i++)
    {nptr[i].key=n[i].key;
        nptr[i].value=n[i].value;}
    
    for(int i=0;i<N.SizeNow;i++)
    {nptr[i+SizeNow].key=N.n[i].key;
        nptr[i+SizeNow].value=N.n[i].value;}
    
    n=nptr;
    SizeOfArr=SizeNow+N.SizeNow+6;
    SizeNow+=N.SizeNow;
    
    return *this;
}

Node &Arr::operator [](std::string s)
{
    Node K("0","0");
    //int j;
    for(int i=0;i<SizeNow;i++)
     if(!std::strcmp(n[i].key.c_str(),s.c_str()))
            return n[i];
    
    //std::cout<<"Ключ не знайдений"<<std::endl;
    return K;
    //return NULL;
}

bool Arr::CheckKey(std::string k)
{
    for(int i=0;i<SizeNow;i++)
        if(!std::strcmp(n[i].key.c_str(),k.c_str()))
            return true;
    std::cout<<"Ключ не знайдений"<<std::endl;
    return false;
}

bool Arr :: KeyIsOriginal(std::string k,int l)
{
    for(int i=0;i<l;i++)
        if(!std::strcmp(n[i].key.c_str(),k.c_str()))
        {return false;
            std::cout<<"Повторюваний ключ,введіть значення ще раз"<<std::endl;
        }
    //std::cout<<"Ключ не знайдений"<<std::endl;
    return true;

    
}


//TODO проверка ключей
