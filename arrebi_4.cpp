#include<iostream>
using namespace std;
int main()
{
  int matA[3][3];
  int matAdj[3][3];
  int matAd[3][3];
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      cout<<"Ingrese el elemento ["<<i<<"]["<<j<<"]: "<<endl;
      cin>>matA[i][j];
    }
  }
  matAdj[0][0]=(matA[1][1]*matA[2][2])-(matA[2][1]*matA[1][2]);
  matAdj[0][1]=-1*((matA[1][0]*matA[2][2])-(matA[2][0]*matA[1][2]));
  matAdj[0][2]=(matA[1][0]*matA[2][1])-(matA[2][0]*matA[1][1]);
  matAdj[1][0]=-(matA[0][1]*matA[2][2])-(matA[2][1]*matA[1][2]);
  matAdj[1][1]=(matA[0][0]*matA[2][2])-(matA[2][0]*matA[1][2]);
  matAdj[1][2]=-1*((matA[0][0]*matA[2][1])-(matA[2][0]*matA[0][2]));
  matAdj[2][0]=(matA[0][1]*matA[1][2])-(matA[1][1]*matA[0][2]);
  matAdj[2][1]=-1*((matA[0][0]*matA[1][2])-(matA[1][0]*matA[0][2]));
  matAdj[2][2]=(matA[0][0]*matA[1][1])-(matA[1][0]*matA[0][1]);
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      matAd[i][j]=matAdj[j][i];
    }
  }
  cout<<"****Matriz adjunta de A****"<<endl;
  for(int i=0;i<3;i++)
  {
    cout<<endl;
    for(int j=0;j<3;j++)
    {
      cout<<matAd[i][j]<<" ";
    }
  }
  cout<<endl;
  return 0;
}
