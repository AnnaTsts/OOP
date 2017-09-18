

#include <iostream>
using namespace std ;
int i,j;
class OrientedGraph     //класс ориентированый граф
{
private:
    int n;          //размерность матрицы смежности
    int **arr;      //сама матрица смежности
    public :
  //  OrientedGraph();
    OrientedGraph(int n);   //конструктор для матрицы смежности
    void Print();           //выведение матрицы расстояния
    ~OrientedGraph();
};
///////////////////////////////////////////////////////////////////////////////////
OrientedGraph::OrientedGraph(int n):n(n),arr(new int*[n]){      //матрица смежности (конструктор)
 //  int **arr=new int *[n];
    for(i = 0;i<n; i++)
        arr[i]=new int [n];                         //выделение памяти под массив
    for(i=0;i<n;i++)
        for(j = 0;j<n;j++)
        {if(i != j)
        {cout<<"Введіть відстань між "<<i+1<<" та "<<j+1<<" вершинами(Якщо відповідного ребера не існує введіть від'ємне значення )"<<endl;   //заполнение массива
            cin>>arr[i][j];}
           // arr[j][i]=arr[i][j];}
            else arr[i][j]=0;
        }
    
}
////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////
void OrientedGraph::Print()
{
    for(i = 0;i<n;i++)
    {for(j = 0;j<n;j++)
           if(arr[i][j] >=0)
           cout<<arr[i][j]<<"   ";
         else cout <<"_"<<"   ";            //если ребра нет ---ставит _
        cout<<endl;
    }
}
/////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
OrientedGraph::~OrientedGraph(){
        for(int i = 0; i<n;i++)
        {
            delete [](arr[i]);
        }
        delete [](arr);
}
//////////////////////////////////////////////////////////


int main(int argc, const char * argv[]) {
    int n;
    cout<<"Введіть кількість вершин графу";
    cin>>n;
    OrientedGraph MyGraf(n);
    MyGraf.Print();
    
    return 0;
}
