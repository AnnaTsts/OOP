//
//  main.cpp
//  Lab4
//
//  Created by Анна Цицилюк on 02.11.17.
//  Copyright © 2017 Анна Цицилюк. All rights reserved.
//

#include <iostream>
#include "Array.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    int p;
    cout<<"розмір масива"<<endl;
    cin>>p;
  
    Arr N(p);
    N.Initialisation();
    N.print();
//    Node L("122","123");
//    N<<L;
//    N.print();
//    N<<L;
//    N.print();
//    N>>(1);
//    N.print();
//    N[1][0]="YEEESSS";
//    cout<<endl<<endl<<N[1][0];
    
    Arr M(p);
    M.Initialisation();
    M.print();
    cout<<endl<<"============================="<<endl;
    N+=M;
    N.print();
 //   Arr *D;
    
//    D=N+M;
//    cout<<"____________________________________"<<endl;
//    D->print();
//    
//    Arr T;
//    T=*(N+M);
//    cout<<"++++++++++++++++++++"<<endl;
//    T.print();
    string s;
    cout<<"Введіть ключ"<<endl;
    cin>>s;
   if( N.CheckKey(s))
   { N[s][1]="Yes";
       cout<<N[s][1];
   }
     return 0;
   //std::cout<<N.n[0].key;
}
