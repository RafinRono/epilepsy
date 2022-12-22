#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
 for (int i=0 ; i<2000 ; i++)
{
cout<<i<<". REDACTED ";
if(i>100)
{system("Color 02");}
if(i>200)
{system("Color 04");}
if(i>250)
{system("Color 01");}
}
return 0;
}
