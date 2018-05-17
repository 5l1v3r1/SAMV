#include <iostream>
#include <stdio.h>
#include <string.h>
#include "valider.h"
using namespace std;


void find_error(char search_for[]){


for (int i = 0 ; i < 30  ; i++ ){

if (strstr(search_for,fails[i])){


   cout<< "Refused  [ERROR]: illegal character> ("<<fails[i]<<") [=>]: "<<search_for<<endl;
count += 1;
}
else {


}

}
}
void find_needed(char search_for[]){

for (int l = 0 ; l < 3 ; l++ ){


if (strstr(search_for,needed[l])){

}else 
{
cout<<"Refused  [ERROR]: Missing character> ("<<needed[l]<<") [=>]: "<<search_for<<endl;

count += 1;

}
}
}

void result (char search_for[]){

if (count != 0 ){
//blank clause
}
else {
cout<< "Accepted [CLEAN]: ( No Errors For Show ) [=>]: "<<search_for <<endl;
}

count *= 0;
}
int main(){
 cout<< "\n[CTRL+C] For exit!"<<endl;
 cout<<"Paste The Mails Below:\n\n";

 while (o |= 1){ 
cin>>search_for;
  find_needed(search_for);
  find_error(search_for);
  result(search_for);
}
  return 0;

}
