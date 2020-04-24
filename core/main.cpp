#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

// Variable for Choosing 
int x = 0;

cout<< "\n\t\t\t   S      A        M    V , The Hard For u...\n" <<endl;
cout<< "\n\t\t\t   Silent Assassin Mail Valider v1.0" <<endl;
cout<< "\t\t\t======================================="<<endl;

cout<<endl;

cout<< "#~PrograMmer:ABDO10\n=============" <<endl;
cout<< "#~Tool:Mail Valdier\n=======" <<endl;
cout<< "#~CopyRight(C):2018-2019 Reserved\n===============" <<endl;
cout<<endl<<endl;

cout<<"Select From The Menu:"<<endl;
cout<< " (1) Valid One E-Mail" <<endl;
cout<< " (2) Valid E-Mails Here[Paste]" <<endl;
cout<< " (3) Valid E-Mails From File[Mailist.txt]" <<endl;
cout<< " (4) Info"<<endl;
cout<< "\n(99) Exit" <<endl;

cout<< " SAMV>" ;
cin>>x;

switch(x){

case 1:
      system("./pkgs/one");
   break;
case 2:
      system("./pkgs/multi");
   break;
case 3:
      system("./pkgs/file");
   break;
case 4:
cout<< "\n ProgramMer: ABDO10 "<<endl;
cout<< " Tool: Silent Assassin Mail Valider [SAMV] "<<endl;
cout<< " Version: 1.0"<<endl; 
cout<<"\n Where U Can Find me on:"<<endl;
cout<< "  gmail: defacerdz@gmail.com" <<endl;
cout<< "  GitHub: /ABDO10DZ" <<endl;
cout<< "  Facebook: /abdo10hacker" <<endl; 
cout<<endl;
break;

case 99:
      cerr<< "[!] Session Terminated." <<endl;
      exit(1);
   break;
default :

cout<< "[-] SAMV: "<<x<< " Doesn't Exist!" <<endl;

}

      return 0;
}
