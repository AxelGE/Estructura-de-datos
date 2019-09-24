#include<iostream>
using namespace std;
int main()
{
  float matA[3][3];
  float matAt[3][3];
  float matAdj[3][3];
  float matR[3][3];
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
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      matAt[i][j]=matA[j][i];
    }
  }
  matAdj[0][0]=(matAt[1][1]*matAt[2][2])-(matAt[2][1]*matAt[1][2]);
  matAdj[0][1]=-1*((matAt[1][0]*matAt[2][2])-(matAt[2][0]*matAt[1][2]));
  matAdj[0][2]=(matAt[1][0]*matAt[2][1])-(matAt[2][0]*matAt[1][1]);

  matAdj[1][0]=-1*((matAt[0][1]*matAt[2][2])-(matAt[2][1]*matAt[0][2]));
  matAdj[1][1]=(matAt[0][0]*matAt[2][2])-(matAt[2][0]*matAt[0][2]);
  matAdj[1][2]=-1*((matAt[0][0]*matAt[2][1])-(matAt[2][0]*matAt[0][1]));

  matAdj[2][0]=(matAt[0][1]*matAt[1][2])-(matAt[1][1]*matAt[0][2]);
  matAdj[2][1]=-1*((matAt[0][0]*matAt[1][2])-(matAt[1][0]*matAt[0][2]));
  matAdj[2][2]=(matAt[0][0]*matAt[1][1])-(matAt[1][0]*matAt[0][1]);
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      matR[i][j]=matAdj[i][j]/det;
    }
  }
  cout<<"****Matriz inversa de A****"<<endl;
  for(int i=0;i<3;i++)
  {
    cout<<endl;
    for(int j=0;j<3;j++)
    {
      cout<<matR[i][j]<<" ";
    }
  }
  cout<<endl;
  return 0;
}
