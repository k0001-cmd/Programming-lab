//1) TAKE AN ARRAY AS AN INPUYT AND REVERE THE ARRAY IN PLACE WITHOUT TAKING ANY SECONDARY ARRAY
#include <iostream>
using namespace std;


class arrr
{
    public:
    int arr[10];
    
    arrr()
    {
        for(int i=0;i<10;i++)
        arr[i]=0;
    }
    arrr(int a[])
    {
        for(int i=0;i<10;i++)
        arr[i]=a[i];
    }
};

void reverse(arrr obj,arrr obj1)
{
    for(int i=0,j=9;i<10,j>-1;i++,j--)
    {
        obj.arr[j]=obj1.arr[i];
    }
  cout<<"The reversed array :"<<endl;
    for(int i=0;i<10;i++)
    cout<<obj.arr[i]<<"\t";
}
int main()
{
    int ar[10];
    arrr obj;
    
    cout <<"Enter elements"<<endl;
    for(int i=0;i<10;i++)
    cin >>ar[i];
    arrr obj1(ar);
    
    reverse(obj,obj1);
    
  
    return 0;
}
