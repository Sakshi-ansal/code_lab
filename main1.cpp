#include <iostream>

using namespace std;

int main()
{
  float a,b;
  cout<<"Enter the value of a and b";
  cin>>a>>b;
  if((a-int(a)==0)&&(b-int(b)==0))
  {
      cout<<"addition of Integer number"<<a+b;
  }
  else
  {
     cout<<"subtraction of float value"<<a-b;
  }
  return 0;

}
