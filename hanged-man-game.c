#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<conio.h>
#include <windows.h>


// using struct -----------------------------------------------------------------------------------------------------------------------------------------
typedef struct { char name[16];  
                                   }  player;

 // drwing the Hangedman----------------------------------------------------------------------------------------------------------------------------------------        
void draw1(int t) {
  
switch(t) {
// To change colors-------------------------------------------------------------------------------------------------------------------------------------------------------
   HANDLE hConsole;
   hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
 
 
case 1 : 
SetConsoleTextAttribute(hConsole,7);	
puts(" _______________________");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|_______________________________");
puts("|||||||||||||||||||||||||||||||| ");
puts("|------------------------------| ");
puts("|||||||||||||||||||||||||||||||| ");
puts("|______________________________|");
	
break;	
	
case 2 :
SetConsoleTextAttribute(hConsole,7);
puts(" _______________________");
puts("|                      |");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|_______________________________");
puts("|||||||||||||||||||||||||||||||| ");
puts("|------------------------------| ");
puts("|||||||||||||||||||||||||||||||| ");
puts("|______________________________|");	
break;


case 3: 
SetConsoleTextAttribute(hConsole,7);	
puts("_______________________");
puts("|                      |");
puts("|                      |");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|_______________________________");
puts("|||||||||||||||||||||||||||||||| ");
puts("|------------------------------| ");
puts("|||||||||||||||||||||||||||||||| ");
puts("|______________________________|");
break;
case 4 :
SetConsoleTextAttribute(hConsole,7);
puts("_______________________");
puts("|                      |");
puts("|                      |");
puts("|                    (^_^)");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|_______________________________");
puts("|||||||||||||||||||||||||||||||| ");
puts("|------------------------------| ");
puts("|||||||||||||||||||||||||||||||| ");
puts("|______________________________|");	
break;	
case 5:
SetConsoleTextAttribute(hConsole,7);
puts("_______________________");
puts("|                      |");
puts("|                      |");
puts("|                    (^_^)");
puts("|                      |");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|_______________________________");
puts("|||||||||||||||||||||||||||||||| ");
puts("|------------------------------| ");
puts("|||||||||||||||||||||||||||||||| ");
puts("|______________________________|");	
break;	
case 6:
SetConsoleTextAttribute(hConsole,7);
puts("_______________________");
puts("|                      |");
puts("|                      |");
puts("|                    (^_^)");
puts("|                      |");
puts("|                     /|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|_______________________________");
puts("|||||||||||||||||||||||||||||||| ");
puts("|------------------------------| ");
puts("|||||||||||||||||||||||||||||||| ");
puts("|______________________________|");	
break;	
case 7:
SetConsoleTextAttribute(hConsole,7);
puts("_______________________");
puts("|                      |");
puts("|                      |");
puts("|                    (^_^)");
puts("|                      |");
puts("|                     /|\\");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|_______________________________");
puts("|||||||||||||||||||||||||||||||| ");
puts("|------------------------------| ");
puts("|||||||||||||||||||||||||||||||| ");
puts("|______________________________|");	
break;		
	case 8:
		SetConsoleTextAttribute(hConsole,7);
puts("_______________________");
puts("|                      |");
puts("|                      |");
puts("|                    (^_^)");
puts("|                      |");
puts("|                     /|\\");
puts("|                      |    ");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|_______________________________");
puts("|||||||||||||||||||||||||||||||| ");
puts("|------------------------------| ");
puts("|||||||||||||||||||||||||||||||| ");
puts("|______________________________|");	
break;

	case 9:
		SetConsoleTextAttribute(hConsole,7);
puts("_______________________");
puts("|                      |");
puts("|                      |");
puts("|                    (^_^)");
puts("|                      |");
puts("|                     /|\\");
puts("|                    / |    ");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|_______________________________");
puts("|||||||||||||||||||||||||||||||| ");
puts("|------------------------------| ");
puts("|||||||||||||||||||||||||||||||| ");
puts("|______________________________|");	
break;
case 10:
	SetConsoleTextAttribute(hConsole,7);
puts("_______________________");
puts("|                      |");
puts("|                      |");
puts("|                    (^_^)");
puts("|                      |");
puts("|                     /|\\");
puts("|                    / | \\   ");
puts("|                        ");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|_______________________________");
puts("|||||||||||||||||||||||||||||||| ");
puts("|------------------------------| ");
puts("|||||||||||||||||||||||||||||||| ");
puts("|______________________________|");	
break;
		
case 11:
	SetConsoleTextAttribute(hConsole,7);
puts("_______________________");
puts("|                      |");
puts("|                      |");
puts("|                    (^_^)");
puts("|                      |");
puts("|                     /|\\");
puts("|                    / | \\   ");
puts("|                     /  ");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|_______________________________");
puts("|||||||||||||||||||||||||||||||| ");
puts("|------------------------------| ");
puts("|||||||||||||||||||||||||||||||| ");
puts("|______________________________|");	
break;
case 12:
	SetConsoleTextAttribute(hConsole,7);
puts("_______________________");
puts("|                      | ");
puts("|                      | ");
puts("|                      | ");
puts("|                      | ");
puts("|                    (^_^)");
puts("|                      |");
puts("|                     /|\\");
puts("|                    / | \\   ");
puts("|                     /|\\ ");
puts("|");
puts("|");
puts("|");
puts("|");
puts("|_______________________________");
puts("|||||||||||||||||||||||||||||||| ");
puts("|------------------------------| ");
puts("|||||||||||||||||||||||||||||||| ");
puts("|______________________________|");	
break;
case 13:
	SetConsoleTextAttribute(hConsole,7);
puts("_______________________");
puts("|                      | ");
puts("|                      | ");
puts("|                      | ");
puts("|                      | ");
puts("|                      | ");
puts("|                      | ");
puts("|                      | ");
puts("|                    (^_^)");
puts("|                      |");
puts("|                     /|\\");
puts("|                    / | \\   ");
puts("|                     /|\\ ");
puts("|_______________________________");
puts("|||||||||||||||||||||||||||||||| ");
puts("|------------------------------| ");
puts("|||||||||||||||||||||||||||||||| ");
puts("|______________________________|");	
break;

case 14:
SetConsoleTextAttribute(hConsole,7);
puts("_______________________");
puts("|                      | ");
puts("|                      | ");
puts("|                      | ");
puts("|                      | ");
puts("|                      | ");
puts("|                      | ");
puts("|                      | ");
puts("|                    (^_^)");
puts("|                      |");
puts("|                     /|\\");
puts("|                    / | \\   ");
puts("|                     /|\\ ");
puts("|___________________        ____"); 
puts("|||||||||||||||||||||||||||||||| ");
puts("|------------------------------| ");
puts("|||||||||||||||||||||||||||||||| ");
puts("|______________________________|");	
break;
case 15:
puts("_______________________");
puts("|                      | ");
puts("|                      | ");
puts("|                      | ");
puts("|                      | ");
puts("|                      | ");
puts("|                      | ");
puts("|                      | ");
puts("|___________________        ____"); 
puts("||||||||||||||||||||||||||||||| | ");
puts("|-------------------------------| ");
puts("|                    (^_^)      |");
puts("|                      |        |");
puts("|                     /|\\       |");
puts("|                    / | \\      |");
puts("|                     /|\\       |");
puts("|                    /   \\      |");
puts("||||||||||||||||||||||||||||||| |");
puts("|______________________________ |");
break;


default : puts("nothing");
		
		
}
 }

int main()

{ 

int h,k;  int e;   int r;  
    int v=1;

// Variables-----------------------------------------------------------------------------------------------------------------------------

// tables______________________________________________

//mistakes
 char mis[50];
// word
char wr[30];
// hide the word 
char njm[16]; 
// letters used before

// loop _____________________________________________

 int i=0,j,a=-1,d;
 char used[30];

// other uses ________________________________________

// help,chance,score,level, the letter entred by player 2
int score, chance=14,help=1;
char lev,ch;

// exit , or play again
 int exit,again; 
 
 // counteur of wining ( count the letters that are correct ) 
int w=0;

// counteur of losing ( count the letters that are wrong ) 
int s=1;

//help le conteur in each time 
int p=0;
//size of word 
 int n; 
 
  

// To change colors-------------------------------------------------------------------------------------------------------------------------------------------------------
   HANDLE hConsole;
   hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
   
// Welcome to our game---------------------------------------------------------------------------------------------------------------------

printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
   SetConsoleTextAttribute(hConsole,6);
   printf("                                                              __ __   ___    _  __  _____   __  ___   ___    _  __\n");
   printf("                                                             / // /  / _ |  / |/ / / ___/  /  |/  /  / _ |  / |/ /\n");
   SetConsoleTextAttribute(hConsole,4);
   printf("                                                            / _  /  / __ | /    / / (_ /  / /|_/ /  / __ | /    / \n");
   SetConsoleTextAttribute(hConsole,6);
   printf("                                                           /_//_/  /_/ |_|/_/|_/  \\___/  /_/  /_/  /_/ |_|/_/|_/ \n");


printf("\n");
printf("\n");
printf("\n");
printf("\n");

// information about the game -----------------------------------------------------------------------------------------------------------------------------------------------

SetConsoleTextAttribute(hConsole,4);
printf("   ABOUT THE GAME "); SetConsoleTextAttribute(hConsole,6); printf("==>");
SetConsoleTextAttribute(hConsole,7);
printf( " Hangman is a guessing game for two or more players. One player thinks of a word, phrase or sentence  and the other(s) tries to guess it by suggesting\n");
printf("\t\t      letters within a certain number of guesses Originally a Paper-and-pencil game,there are now electronic versions ,one of them are in your hands now.\n");
SetConsoleTextAttribute(hConsole,4);
printf( "\n   PRESS TO CONTINUE \n ");
getch();

// choose btween the history of the game  or to start ----------------------------------------------------------------------------------------------------------------------------------------

char o;
again :

SetConsoleTextAttribute(hConsole,6);

        printf("\n\n\n\t\t\t  ==> ");SetConsoleTextAttribute(hConsole,4);printf("To discover the history of this game press");SetConsoleTextAttribute(hConsole,6);printf(" 1\n");
        printf("  \t\t\t  ==> ");SetConsoleTextAttribute(hConsole,4);printf("To start the game press ");SetConsoleTextAttribute(hConsole,6);printf("2\n");
        printf("  \t\t\t  ==> ");SetConsoleTextAttribute(hConsole,4);printf("To exit enter ");SetConsoleTextAttribute(hConsole,6);printf("3\n");
        printf("\n");
        printf("\n");
	    scanf("%c",&o);
	    printf("\n \n LOADING.");
	    sleep(1);
	    printf("..");
	    Sleep(2);
	     printf("..\n");
	     
 while(o!='1' && o!='2' && o!='3' ) { printf("your choice is not valid , please try again :");
	                                  scanf("%c",&o);
								                             }
// the history of the game----------------------------------------------------------------------------------------------------------------------------
     if(o=='1') {

	            printf("\n");
                printf("\n");
                 SetConsoleTextAttribute(hConsole,4);
	           printf("   HISTORY ");SetConsoleTextAttribute(hConsole,6);printf("========> ");SetConsoleTextAttribute(hConsole,7);
	           printf("In 17th and 1ery incoand. 5 wrong guesses, anuessed, the condemnednwould be set free from that sentence and nagain on that crime.");
	              SetConsoleTextAttribute(hConsole,4);
	           printf("\n\n   PRESS TO START THE GAME ");SetConsoleTextAttribute(hConsole,6);printf(":");
	                   getch();
	                   printf("\n \n LOADING.");
	                   sleep(1);
	                   printf("..");
	                  Sleep(2);
	                  printf("..\n");
	                    o='2';                                                                              }

// Informations about levels and rules ------------------------------------------------------------------------------------------------------------------------

	if(o=='2') { system("cls");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\n");
               SetConsoleTextAttribute(hConsole,6);
	           printf("  ==>");SetConsoleTextAttribute(hConsole,4);printf(" LEVELS EXPLANATION ");SetConsoleTextAttribute(hConsole,6);printf("<==\n");
	           printf("\n");
	           printf("\n");
	           SetConsoleTextAttribute(hConsole,4);
	           printf("           LEVEL ");SetConsoleTextAttribute(hConsole,6);printf("1 :");SetConsoleTextAttribute(hConsole,7);printf(" - 5 letters word minimum.\n                     - lowercase only.\n                     - 15 chances only.\n                     - 1 hints available.\n");
	           printf("\n");
	           SetConsoleTextAttribute(hConsole,4);
	           printf("           LEVEL ");SetConsoleTextAttribute(hConsole,6);printf("2 :");SetConsoleTextAttribute(hConsole,7);printf(" - lowercase and uppercase.\n                     - 15 chances only .\n                     - 2 hints available.\n");
               printf("\n");
               SetConsoleTextAttribute(hConsole,4);
	           printf("           LEVEL ");SetConsoleTextAttribute(hConsole,6);printf("3 :");SetConsoleTextAttribute(hConsole,7);printf(" - lowercase and uppercase.\n                     - 15 chances only .\n                     - 3 hints available.\n");
	           printf("\n");
	           printf("\n");
	           SetConsoleTextAttribute(hConsole,6);
	           printf("  ==>");SetConsoleTextAttribute(hConsole,4);printf(" INSTRUCTIONS ");SetConsoleTextAttribute(hConsole,6);printf("<==\n");
	           printf("\n");
	           SetConsoleTextAttribute(hConsole,7);
	           printf("                     - To use the hint press :");SetConsoleTextAttribute(hConsole,6);printf(" @\n");
	           SetConsoleTextAttribute(hConsole,7);
	           printf("                     - Void is not allowed in level 1 and 2 , expet level 3.\n");
	           printf("                     - To use the void or space enter : '_' .\n");
               printf("                     - each letter you find");SetConsoleTextAttribute(hConsole,6);printf(" = ");SetConsoleTextAttribute(hConsole,7);printf("5 points.\n");
	           SetConsoleTextAttribute(hConsole,4);
	           printf("\n\n    PRESS TO CONTINUE ");
	           getch();
	           printf("\n");
	           printf("\n");
	           SetConsoleTextAttribute(hConsole,6);}
// 3 to exit , Besides to give each level the hints that should be in it--------------------------------------------------------------------------
	 if(o=='3') {   goto exit; }
// Select the level-----------------------------------------------=-------------------------------------------------------------------------

	printf("\n    ==>");SetConsoleTextAttribute(hConsole,4);printf(" Enter the level number ");SetConsoleTextAttribute(hConsole,6);printf(":");
	scanf("%c",&lev);
    scanf("%c",&lev);
     printf("\n \n LOADING.");
	                   sleep(1);
	                   printf("..");
	                  Sleep(2);
	                  printf("..\n");
	                   
    while(lev!='1' && lev !='2' && lev!='3') {
                                                SetConsoleTextAttribute(hConsole,6);
                                                printf("\n");
                                                printf("\n");
               									printf("   ==> ");SetConsoleTextAttribute(hConsole,4);
			 									printf("Your choice is not valid , please try again ");
												SetConsoleTextAttribute(hConsole,6);printf(":");
	                        					scanf("%c",&lev);
	                        					 printf("\n \n LOADING.");
	             						       sleep(1);
	                  						   printf("..");
	                 						  Sleep(2);
	                 						 printf("..\n");
	                  						 
												 printf("\n");}                                  



     if(lev=='2') {  help=2; }
     if(lev=='3') {  help=3; }

// player 1 name----------------------------------------------------------------------------------------------------------------------------

player player1;
player player2;
                printf("\n");
                printf("\n    ==>");SetConsoleTextAttribute(hConsole,4);printf(" PLAYER 1 enter your name please ");SetConsoleTextAttribute(hConsole,6);printf(":");
                  scanf("%s",player1.name);
                   printf("\n \n LOADING.");
	                   sleep(1);
	                   printf("..");
	                  Sleep(2);
	                  printf("..\n");
	                   

// read the word with the condtions in each level------------------------------------------------------------------------------------------------------------------------------------

SetConsoleTextAttribute(hConsole,6);
printf("\n");
printf("\n");
printf("    %s",player1.name);
SetConsoleTextAttribute(hConsole,7);
printf(" - ");
SetConsoleTextAttribute(hConsole,4);
printf("ENTER YOUR WORD PLEASE : ");
SetConsoleTextAttribute(hConsole,6);
gets(wr);
gets(wr);
 printf("\n \n LOADING.");
	                   sleep(1);
	                   printf("..");
	                  Sleep(2);
	                  printf("..\n");
	                   
n = strlen(wr);

if(lev=='2') {   for(i=0;i<n;i++) {
  while(wr[i]<65 || wr[i]>90 && wr[i]<97 || wr[i]>122) {
      													printf("\n"); printf("\n");SetConsoleTextAttribute(hConsole,6);printf("    ==> ");
 														SetConsoleTextAttribute(hConsole,4);;printf("Incorrect try again with lower cases ");
 														SetConsoleTextAttribute(hConsole,6);printf(":");
               											gets(wr);
														n =strlen(wr);   }  } 														}

     if(lev=='1') {  for(i=0;i<n;i++) {
while(wr[i]<97 || wr[i]>122 ) {
								printf("\n"); printf("\n");SetConsoleTextAttribute(hConsole,6);printf("    ==> ");
								SetConsoleTextAttribute(hConsole,4);;printf("Incorrect try again with lower and upper cases ");
								SetConsoleTextAttribute(hConsole,6);printf(":");
                                                            gets(wr);
															 n =strlen(wr);  }  } 										}
	if(lev=='3') {   for(i=0;i<n;i++) {
while((wr[i]>=1 && wr[i]<=64) || (wr[i]>=91 && wr[i]<=94)  || wr[i]==96  || wr[i]>=122) {
																							printf("\n"); printf("\n");SetConsoleTextAttribute(hConsole,6);printf("    ==> ");
																							SetConsoleTextAttribute(hConsole,4);;printf("Incorrect try again with upper and lower cases and '_' as a space ");
																							SetConsoleTextAttribute(hConsole,6);printf(":");
                                                                							 gets(wr);
                                                                							 
																							  n =strlen(wr);   }  } 																					}


                                     system("cls");
// read the second table that contain the word hiden depend on the size ------------------------------------------------------------------------------------------------------------------------------------

printf("\n");
for( j=0; j<n; j++){ njm[j] ='*';}

// Player 2 name--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

printf("\n");
printf("\n");
printf("\n    ==>");SetConsoleTextAttribute(hConsole,4);printf(" PLAYER 2 enter your name please ");SetConsoleTextAttribute(hConsole,6);printf(":");
scanf("%s",player2.name);
 printf("\n \n LOADING.");
	                   sleep(1);
	                   printf("..");
	                  Sleep(2);
	                  printf("..\n");
	                   

// The game start and Plyer should fin the word  ------------------------------------------------------------------------------------------------------------------------------------

  printf("\n");
  printf("    %s",player2.name);
  SetConsoleTextAttribute(hConsole,7);
  printf(" - ");
  SetConsoleTextAttribute(hConsole,4);
  printf("TRY TO FIND THE CORRECT WORD");SetConsoleTextAttribute(hConsole,6);printf(" :");
  printf("\n\n");
  printf("  ");
 for(i=0;i<n;i++) { printf("  ");printf(" %c",njm[i]); }

    for(d=0;d>=0;d++){
// conditon if player 2 tried to enter something forebiden if a level  ------------------------------------------------------------------------------------------------------------------------------------

    printf("\n");
        scanf(" %c",&ch);

                                            system("cls");
											printf("\n\n\n");

// this loop check if character belong to the table or not  ------------------------------------------------------------------------------------------------------------------------------------
    for (j=0; j<n; j++){

// the character belong ---------------------------------------------------------------------------------------------
                         if (ch == wr[j] &&  njm[j]!=wr[j] ){ njm[j] = ch; w++; score=score+5; a=j; }

// loop for the help , add limit to the help  ------------------------------------------------------------------------------------------------------------------------------------
	    for(r=1;r<n;r++) {
						  if(ch=='@' &&  help<1 ) {  SetConsoleTextAttribute(hConsole,6);printf("  ==>");SetConsoleTextAttribute(hConsole,4);printf(" You are out of hints"); break;}
                          if(ch=='@' && a+r<n && njm[a+r]=='*' && help>=1 ) { SetConsoleTextAttribute(hConsole,6); a++; njm[a]=wr[a];  for(e=0;e<n;e++) {   printf("        ");  printf(" %c",njm[e]); }; w++; score=score+5;  help--; break;}
                          if(ch=='@'&& a-r>=0 && njm[a-r]=='*' && help>=1 ) {SetConsoleTextAttribute(hConsole,6); a=a-r; njm[a]=wr[a];  for(e=0;e<n;e++) {  printf("        "); printf("  %c",njm[e]); }; score=score+5;  w++;help--; break;}}
                          if(ch=='@'){ break;}

// the character does not belong  ------------------------------------------------------------------------------------------------------------------------------------
                          if(ch!=wr[j] && ch!='@' ) { p++;}
                          
// detect error , the case to daw , the mistakes---------------------------------------------------------------------------------------------------------------------------------
                                          if(p==n && s<=15) { s++; chance --;  }
						                  if(p==n && s<=15 && ch!=mis[s]) { mis[s]=ch; }
						                 printf("        "); SetConsoleTextAttribute(hConsole,6);  printf(" %c",njm[j]);}

 printf("\n\t\t\t\t\t\t");

//  showing the lettres that used before , chances,drawing ------------------------------------------------------------------------------------------------------------------------------------
SetConsoleTextAttribute(hConsole,6);
printf("                             ==>");SetConsoleTextAttribute(hConsole,4);printf(" Used before ");SetConsoleTextAttribute(hConsole,6);printf(":");
if(s>=1) { for(i=1;i<=s;i++) { SetConsoleTextAttribute(hConsole,6);  printf(" %c ",mis[i]);}}
 SetConsoleTextAttribute(hConsole,4);
if(chance>=0) {
      
        printf("\t\t%d chance left ",chance);}
printf("    \n\n");
printf("\n");
printf("\n");
printf("\n");

if(s<=13){  SetConsoleTextAttribute(hConsole,7);
}
if(s==14){  SetConsoleTextAttribute(hConsole,6);
}
if(s==15){  SetConsoleTextAttribute(hConsole,4);
}
draw1(s);


printf("\n");
p=0;

// wining and losing   ------------------------------------------------------------------------------------------------------------------------------------
 if(w==n) {
           SetConsoleTextAttribute(hConsole,6);
           printf("\n");
           printf("\n");
           printf("\n");
           printf("\n");
           printf("\n");
           printf("\n");
           printf("                                                                                                      _          \n");
           printf("                                                                 __ __  ___   __ __      _      __   (_)   ____  \n");
           printf("                                                                / // / / _ \\ / // /     | | /| / /  / /   / __ \\ \n");
           printf("                                                                \\_, /  \\___/ \\_,_/      | |/ |/ /  / /   / / / / \n");
           printf("                                                               /___/                    |__/|__/  /_/   /_/ /_/  \n");
           printf("\n");
           printf("\n");










           break; }
if(s==15) {

           SetConsoleTextAttribute(hConsole,4);
           printf("\n");
           printf("\n");
           printf("\n");
           printf("\n");
           printf("\n");
           printf("                                                                                          __            __ \n");
           printf("                                                                 __ __  ___   __ __      / / ___   ___ / /_\n");
           printf("                                                                / // / / _ \\ / // /     / / / _ \\ (_-</ __/\n");
           printf("                                                                \\_, /  \\___/ \\_,_/     /_/  \\___//___/\__/ \n");
           printf("                                                               /___/ \n");
           printf("\n");
           printf("\n");












        ; break;  }}

// File to save information about the game : names,score, chances lefted,the word that used----------------------------------------------------------------------------------------

FILE *memory=NULL;
// opening the file---------------------------------------------------------------------------------------------------------------------------------------------------

memory = fopen("resultat.txt","a");
SetConsoleTextAttribute(hConsole,4);
if(memory==NULL) {   printf(" There is a problem\n");
                                                     }
	else { 	fprintf(memory,"---------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        	fprintf(memory,"In this game : \n");
            fprintf(memory," the word entred by player 1 : %s \n",wr);
            fprintf(memory,"Player 1 name : %s \n",player1.name);
            fprintf(memory,"Player 2 name : %s \n",player2.name);
             fprintf(memory,"Level choosen  : %c \n",lev);
            fprintf(memory,"chance lefted from  this game : %d \n",chance);
      		fprintf(memory,"Your score is  : %d \n",score);
      		fclose(memory);
     	  							}



// choose to exit or to play again-----------------------------------------------------------------------------------------------------------------------
SetConsoleTextAttribute(hConsole,6);
printf("\n");
printf("\n");
printf("\n");
printf("   ==> ");SetConsoleTextAttribute(hConsole,4);printf("Enter");SetConsoleTextAttribute(hConsole,6);printf(" 1 ");SetConsoleTextAttribute(hConsole,4);printf("to play again or");SetConsoleTextAttribute(hConsole,6);printf(" 2 ");SetConsoleTextAttribute(hConsole,4);printf("to close the game\n");

char x;

scanf("%c",&x); scanf("%c",&x);
 printf("\n \n LOADING.");
	                   sleep(3);
	                   printf("..");
	                  Sleep(1);
	                  printf("..");
	                   sleep(1);
while(x!='1'&& x!='2') {
        SetConsoleTextAttribute(hConsole,4);
        printf(" Your choice not valid \n Try again");SetConsoleTextAttribute(hConsole,4);printf(":\n");
scanf("%c",&x);
 printf("\n \n LOADING.");
	                   sleep(3);
	                   printf("..");
	                  Sleep(1);
	                  printf("..");
	                   sleep(1); }

if(x=='1'){ s=1; chance=14; w=0; system("cls"); v++; goto again; }
if(x=='2'){ goto exit ; }


exit :






return 0 ;
}
