#include<iostream>
using namespace std;
int main()
{
  int matA[3][3];
  int det;
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      cout<<"Ingrese el elemento ["<<i<<"]["<<j<<"]: "<<endl;
      cin>>matA[i][j];
    }
  }
  det=+matA[0][0]*(matA[1][1]*matA[2][2]-matA[1][2]*matA[2][1])-matA[0][1]*(matA[1][0]*matA[2][2]-matA[2][0]*matA[1][2])+matA[0][2]*(matA[1][0]*matA[2][1]-matA[2][0]*matA[1][1]);
  cout<<"La determinante de la matriz es: "<<det<<endl;
  return 0;
}
