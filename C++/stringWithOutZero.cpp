#include<iostream>
using namespace std;


int calculateString(const char* str){
  int len = 0;

  while(*str != '\0'){
       if(*str !=' '){

     len++;

  } str++;

  } return len;

}

int main(){

   const char* myStr = "Hello World";
   int len = calculateString(myStr);

   cout<< "The length of string is : "<<len <<endl;

   return 0;

}