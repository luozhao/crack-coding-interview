/*
  矩阵转置
*/
#include <iostream>
using namesapce std;

void swap(int &a, int &b)
{
  int t = a;
  a = b;
  b = t;
}

void transpose(int a[][4], int n)
{
  for(int i = 0; i < n; i++)
    for(int j = i + 1; j < n; ++j)
      swap(a[i][j],a[j][i]);
  for(int p = 0; p < n/2; ++p)
    for(int q = 0; q < n; ++q)
      swap(a[p][q], a[n-1-p][q]);
}


int main()
{
  int a[4][4] = {
  {1,2,3,4},
  {5,6,7,8},
  {9,10,11,12},
  {13,14,15,16}
  };
  for(int i = 0;i < 4; i++)
  {
    for(j = 0; j < 4; j++)
      cout<<a[][]<<" ";
    cout<<endl;
  }
  cout<<endl;
  transpose(a,4);
  for(int i = 0;i < 4; i++)
  {
    for(j = 0; j < 4; j++)
      cout<<a[][]<<" ";
    cout<<endl;
  }
}
