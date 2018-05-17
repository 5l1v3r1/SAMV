#include <iostream>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include "valider.h"
using namespace std;

// Analyze the list if has illegal characters
void find_error(char search_for[]){

//reading
     for (int i = 0 ; i < 30  ; i++ ){

             if (strstr(search_for,fails[i])){

   cout<< " [-] Refused  [ERROR]: illegal character> ("<<fails[i]<<") [=>]: "<<search_for<<endl;
count += 1;
}
 }
  }

// search for ((@)-(.)) in the list
void find_needed(char search_for[]){


for (int l = 0 ; l < 3 ; l++ ){

if (strstr(search_for,needed[l])){

}
else {
cout<< " [-] Refused  [ERROR]: Missing character> ("<<needed[l]<<") [=>]: "<<search_for<<endl;
count += 1;
}
 }
  }

// result 
void result(char search_for[]){

//condition:
if (count != 0){
//Blank clause !
}
else {
cout<< " [+] Accepted [CLEAN]: ( No Errors For Show ) [=>]: "<<search_for<<endl;
}
count *= 0;
}

int main(){
 
// valid && open path
 ifstream get;
  string path;


//loop
  int x;
// list input
cout<<"[MaiList]:"; 
getline(cin,path);
get.open(path); 
  if (get.fail()) {
cerr<<"[-] Path Doesn't Exist : "<<path<<endl;
return 1;

}else {

// inputs
 cout<< "\n[?] How Many mail u need To Valid:";
 cin>>x;
 cout<<endl<<endl;

// read The file's mails

cout<< "[!] Report of : "<<path<<endl<<endl;
cout<< "Result:\n=======" <<endl;
cout<<" [STATUS]:    [ERRORS]:\t\t\t      [MAILS]("<<x<<"):"<<endl;
cout<<" =========    ========="<<"\t\t\t      ==========="<<endl;
  for (int o = 1 ; o <= x ; o++){
 get>>search_for;
 find_needed(search_for);
 find_error(search_for);
 result(search_for);
  }
    }

 cout<<endl<<"[*] Fin..." <<endl;

   return 0;

}
