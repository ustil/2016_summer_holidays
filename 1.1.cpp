#include<iostream>

using namespace std;

int main(int argc,char* argv[])
{
      int i=0,sum=0;
      do
      {
        i++;
        sum+=i;
      }
      while(i<=100);
      cout<<sum<<endl;
      system("pause");
      return 0;
}

