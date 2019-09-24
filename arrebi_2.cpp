#include <iostream>
using namespace std;

int main()
{
    int matA[3][3];
    int matB[3][3];
    int matR[3][3];
  cout<<"****Matriz A****"<<endl;
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
    cout<<"Ingrese el elemento["<<i+1<<"]["<<j+1<<"]: "<<endl;
    cin>>matA[i][j];
    }
  }
  cout<<"****Matriz B****"<<endl;
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
    cout<<"Ingrese el elemento["<<i+1<<"]["<<j+1<<"]: "<<endl;
    cin>>matB[i][j];
    }
  }
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
    matR[i][j]=matA[i][j]+matB[i][j];
    }
  }
  cout<<"****Suma de /Matrices A+B****"<<endl;
  for(int i=0;i<3;i++)
  {
    cout<<endl;
    for(int j=0;j<3;j++)
    {
    cout<<matR[i][j]<<"  ";
    }
  }
  cout<<endl;
  int matC[2][2];
  int matrC[2][2];
  cout<<"****Matriz C****"<<endl;
  for(int i=0;i<2;i++)
  {
    for(int j=0;j<2;j++)
    {
    cout<<"Ingrese el elemento["<<i+1<<"]["<<j+1<<"]: "<<endl;
    cin>>matC[i][j];
    }
  }
  cout<<"****Traspuesta de C****"<<endl;
  for(int i=0;i<2;i++)
  {
    for(int j=0;j<2;j++)
    {
      matrC[i][j]=matC[j][i];
    }
  }
  for(int i=0;i<2;i++)
  {
    cout<<endl;
    for(int j=0;j<2;j++)
    {
    cout<<matrC[i][j]<<"  ";
    }
  }
  cout<<endl;
    return 0;
}
