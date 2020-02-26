#include "dna.h"
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const string &str)
{
    int i=0,count=0;
    for(i=0;i<str.length();i++)
    {
        if(str[i] == 'G' || str[i] == 'C'){
           count++;
       }
   }
   return ((double)count)/str.length();
}



/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string str)
{
   string rstr = "";
   for(int i=str.length()-1;i>=0;i--)
   {
       rstr += str[i];
   }
   return rstr;
}



/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
string get_dna_complement(string str)
{
   string complement = "";
   str  = get_reverse_string(str);
   for(int i=0;i<str.length();i++)
   {
       if(str[i] == 'A')
       {
           complement += 'T';
       }
       else if(str[i] == 'T')
       {
           complement += 'A';
       }
       else if(str[i] == 'G')
       {
           complement += 'C';
       }
       else if(str[i] == 'C')
       {
           complement += 'G';
       }
   }
   return complement;
}
