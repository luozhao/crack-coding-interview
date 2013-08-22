#include <iostream>
#include <cstring>

using namespace std;

void swap(char &a, char &b)
{
  a = a^b;
  b = a^b;
  a = a^b;
}

void reverse1(char *s)
{
  int len = s.length();
  for(int i = 0; i < len/2; i++)
    swap[s[i],s[len-i-1]];
}

void reverse2(char *s)
{
  char *p = s, *q = s;
  while(*q) ++q;
  --q;
  while(p < q)
    swap(*p++,*--q);
}

int main()
{
  char s[] = "123456789";
  reverse1(s);
  cout<<s<<endl;
  return 0;
}
