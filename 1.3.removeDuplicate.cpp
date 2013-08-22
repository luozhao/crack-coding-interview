#include <iostream>
#include <cstring>
using namespace std;

string removeDuplicate1(string s)
{
  int check = 0;
  int len = s.length();
  if(len < 2) return s;
  string str = "";
  for(int i = 0; i < len; i++)
  {
    int v = (int)(s[i] - 'a');
    if((check & (1<<v)) == 0)
    {
      str += s[i];
      check |= (1<<v);
    }
  }
  return str;
}

string removeDuplicate2(string s)
{
  int len = s.length();
  if(len < 2) return s;
  string str = "";
  for(int i = 0; i < len; ++i)
  {
    if(s[i] != '\0')
    {
      str += s[i];
      for(int j = i + 1; j < len; j++)
        if(s[j] == s[i])
          s[j] = '\0';
    }
  }
  return str;
}

void removeDuplicate3(char s[])
{
  int len = strlen(s);
  if(len < 2) return;
  int p = 0;
  for(int i = 0; i < len; ++i)
  {
    if(s[i] != '\0')
    {
      s[p++] = s[i];
      for(int j = i + 1; j < len; ++j)
        if(s[j] == s[i])
          s[j] = '\0';
    }
  }
  s[p] = '\0';
}

void removeDuplicate4(char s[])
{
  int len = strlen(s);
  if(len < 2) return s;
  int p = 0;
  for(int i=0; i < len; ++i)
  {
    if(!c[s[i]])
    {
      s[p++] = s[i];
      c[s[i]] = true;
    }
  }
  s[p] = '\0';
}

void removeDuplicate(char s[])
{
  int len = strlen(s);
  if(len < 2) return;
  int check = 0, p = 0;
  for(int i = 0; i < len; ++i)
  {
    int v = (int)(s[i] - 'a');
    if((check & (1<<v)) == 0)
    {
      s[p++] = s[i];
      check |= (1<<v);
    }
  }
  s[p] = '\0';
}

int main()
{
  string s1 = "abcde";
  string s2 = "aaabbb";
  string s3 = "";
  
  cout<<removeDuplicate1(s1)<<" "<<endl;
  return 0;
}
