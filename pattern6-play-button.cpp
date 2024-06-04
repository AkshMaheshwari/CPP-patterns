#include <iostream>
using namespace std;
int main()
{
  int row,col;
  for(row =1;row<=4;row++)
    {
      for(col=1;col<=row;col++)
        {
          cout<<"*"<<" ";
        }
      for(col=1;col<=8-2*row;col++)
        {
          cout<<" ";
        }
      cout<<endl;
        
    }
  for(row = 3;row>=1;row--)
    {
      for(col=row;col>=1;col--)
        {
          cout<<"*"<<" ";
        }
      for(col=8-2*row;col>=1;col--)
        {
          cout<<" ";
        }
      cout<<endl;

    }
}
