#include<iostream>
using namespace std;
int main()
{
int matA[2][2];
int matB[2][2];
int matC[2][2];
cout<<"****Matriz A****"<<endl;
for(int i=0;i<2;i++)
{
  for(int j=0;j<2;j++)
  {
  cout<<"Ingrese el elemento["<<i+1<<"]["<<j+1<<"]: "<<endl;
  cin>>matA[i][j];
  }
}
cout<<"****Matriz B****"<<endl;
for(int i=0;i<2;i++)
{
  for(int j=0;j<2;j++)
  {
  cout<<"Ingrese el elemento["<<i+1<<"]["<<j+1<<"]: "<<endl;
  cin>>matB[i][j];
  }
}

matC[0][0]=(matA[0][0]*matB[0][0])+(matA[0][1]*matB[1][0]);
matC[0][1]=(matA[0][0]*matB[0][1])+(matA[0][1]*matB[1][1]);
matC[1][0]=(matA[1][0]*matB[0][0])+(matA[1][1]*matB[1][0]);
matC[1][1]=(matA[1][0]*matB[0][1])+(matA[1][1]*matB[1][1]);
cout<<"****Producto de AxB****"<<endl;
for(int i=0;i<2;i++)
{
  cout<<endl;
  for(int j=0;j<2;j++)
  {
    cout<<matC[i][j]<<" ";
  }
}
cout<<endl;
return 0;
}
