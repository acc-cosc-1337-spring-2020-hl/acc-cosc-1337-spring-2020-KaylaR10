//write include statements
#include <iostream>
#include "dna.h"
//write using statements
using std::cin; using std::cout;
/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main()
{
   char choice;
   string dna;
   do{
       cout<<"Enter\n1 for Get GC Content\n";
       cout<<"2 for Get DNA Complement\n";
       cout<<"Enter option: ";
       cin>>choice;
       if(choice!='n' && choice!='N'){
           cout<<"Enter DNA string: ";
           cin>>dna;
       }
       switch(choice){
           case '1':
               cout<<"calculated GC content: "<<get_gc_content(dna);
               break;
           case '2':
               cout<<"DNA Complement: "<<get_dna_complement(dna);
               break;
           case 'n':
               break;
           default:
               cout<<"Please enter valid option";
               break;
       }
      
   }while(choice!='n' && choice!='N');
   return 0;
}
