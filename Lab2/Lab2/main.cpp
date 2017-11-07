//
//  main.cpp
//  Lab2
//
//  Created by Анна Цицилюк on 02.10.17.
//  Copyright © 2017 Анна Цицилюк. All rights reserved.
//

#include <iostream>
#include "CroppedPyramid.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    cout<<"Цицилюк Анна"<<endl<<"Варіант 19 рівень В"<<endl<<"Спроектувати діаграму класів-відрізок-трикутники А і В та зрізана піпаміда"<<endl;
    int yes=1;
    do
    { Pyramid MyPir;
    if(MyPir.IsTiangle())
    {cout<<MyPir.GetArea()<<endl;
   cout<< MyPir.GetVolume()<<endl;
    }
    else cout<<"Введеного трикутника основи не існує"<<endl;
        cout<<"введіть 0 для виходу";cin>>yes;
    }
    while (yes);
    
    return 0;
}
