/******************************************************************************
4. Napisi program koji broji koliko u unesenom tekstu ima samoglasnika, 
a koliko suglasnika.
ULAZ: Ana voli Milovana. IZLAZ: Tekst ima 8 samoglasnika i 7 suglasnika
ULAZ: Ja imam 12 godina IZLAZ: Teks ima 6 samoglasnika i 6 suglasnika

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;
int isVowel(char c);
int isConsonant(char c);
int main()
{   char str[500];
    int v=0,c=0,i;
    cout<<"Enter a string \n";
    getline(str);
    for(i=0;str[i]!='\0';i++){ if(isVowel(str,[i])){ v++;}
    else if (isConsonant(str[i])){c++;}}
    cout<<"Vowels:"<<v<<endl;
    cout<<"Consonants: "<<c<<endl;
    return 0;}
    int isVowel(char c){if(c=='a' ||c=='e' ||c=='i'|| c=='o'|| c=='u' || c=='A'
    || c=='E' || c=='I' || c=='O' || c=='U') { return 1; } else { return 0;}}
    int isConsonant (char c){ if (((c>='a' && c<='z') || (c>='A' && c<='Z')) && !isVowel(c))
    { return 1;} else { return 0;}}
