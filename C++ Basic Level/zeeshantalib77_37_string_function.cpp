#include <iostream>
#include <string.h> //gives you the string functions
using namespace std;
int main(int argc, const char *argv[])
{

   string zeeshan;
   cin>>zeeshan; //only reads upto the first whitespace
   cout<<"The string I entered is " <<zeeshan<<endl;

   string x;
   getline(cin,x); //gets the whole line form input
   cout<<x<<endl;

   string s1("Legend "); //creating string with constructor
   string s2;
   string s3;
  
   s2=s1;
   s3.assign(s2);
  
   cout<<s1<<s2<<s3<<endl;

   string s1 = "zeeshan";
   cout<<s1.at(3)<<endl;

  for(int x=0;x<s1.length();x++)
  {
    cout<<s1.at(x);
  }
  return 0;
}
