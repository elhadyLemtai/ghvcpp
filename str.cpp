#include<iostream>
#include<string>
using namespace std;
int main(){
 string str1="Hello123456789";
 string str2="World987654321";
 string str3;
 int len;

 strcpy(str3,str1);

 cout << "strcpy(str3,str1):" << str3 << endl;
 strcat(str1, str2);

 cout << "strcat(str1, str2):" << str1 << endl;
 len = strlen(str1);

 cout << "strlen(str1):" << len << endl;

 return 0;

 }