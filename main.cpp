#include <iostream>
using namespace std;
int swap(*a,*b)
  {
    int temp;
    temp=a;
    a=b;
    b=temp;
    return(a,b);

  }
int main()
  {
    int a=7,b=3;
    cout<<"original value of a:"<<a<<endl;
    cout<<"original value of b:"<<b<<endl;
    swap(&a,&b);
    cout<<"swapped value of a:"<<a<<endl;
    cout<<"swapped value of b:"<<b<<endl;
    return 0;
  }
