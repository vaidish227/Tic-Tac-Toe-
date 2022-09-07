#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>

char sq[10] = {'o','1','2','3','4','5','6','7','8','9'};
int checkWin();
void drawBoard();


int main()
  {
  	int player = 1,i,choice;
  	char mark;// X or O
do{
  		     drawBoard();
  		     system("COLOR F0");
			player=(player%2) ? 1:2; // system("COLOR 4");
  		     printf("\n\n\t\t\tPLayer %d, Enter the choice : ",player);
		     scanf("%d",&choice);
  		    mark = (player==1) ? 'X':'O';
  	     	if(choice == 1 && sq[1] == '1')
  		    sq[1] = mark;
  		    else if(choice == 2 && sq[2] =='2')
	         sq[2] = mark; 
	         else if(choice == 3 && sq[3] =='3')
		     sq[3] = mark;
	         else if(choice == 4 && sq[4] =='4')
		     sq[4] = mark;
		     else if(choice == 5 && sq[5] =='5')
		     sq[5] = mark;
		     else if(choice == 6 && sq[6] =='6')
		     sq[6] = mark;
	         else if(choice == 7 && sq[7] =='7')
		     sq[7] = mark;
	         else if(choice == 8 && sq[8] =='8')
		     sq[8] = mark;
		     else if(choice == 9 && sq[9] =='9')
		     sq[9] = mark; 

  		     else
			    {
		          system("COLOR C0");
  		  	      printf("\n\n\t\t\t***** !!!!Invalid option!!!!*****");
  		  	      player--;
  		  	    getch();
			   }
			  i=checkWin();
			  player++;
  }while(i==-1);
	  
	  drawBoard();
	  if(i==1)
	  {
	  	system("COLOR B9");
	  	printf("\n\n\t\t*******************************************\n");
	  	printf("\n\n\t\t\t\tPLAYER %d WON",--player);
	  	printf("\n\n\t\t*******************************************\n");
	  }
	  else
	  {
	  	system("COLOR C");
	  	printf("\n\n\t\t*******************************************\n");
	  	printf("\n\n\t\t\t\tGAMEDRAW");
	  	printf("\n\n\t\t*******************************************\n");
	  }
	
	  getch();
	  return 0;
  }
  
  int checkWin()
  {
    if(sq[1] == sq[2] && sq[2] == sq[3])
	return 1;
	else if(sq[4] == sq[5] && sq[5] == sq[6])
	return 1;	
	else if(sq[7] == sq[8] && sq[8] == sq[9])
	return 1;
	else if(sq[1] == sq[4] && sq[4] == sq[7])
	return 1;
	else if(sq[2] == sq[5] && sq[5] == sq[8])
	return 1;
	else if(sq[3] == sq[6] && sq[6] == sq[9])
	return 1;
	else if(sq[1] == sq[5] && sq[5] == sq[9])
	return 1;
	else if(sq[3] == sq[5] && sq[5] == sq[7])
	return 1;
	
	else if(sq[1] !='1' && sq[2] != '2' && sq[3] != '3' && sq[4] != '4' && sq[5] != '5' && sq[6] != '6' && sq[7] != '7' && sq[8] != '8' && sq[9] != '9')
	return 0;
	else
	return -1; 
  }
  
  void drawBoard()
  {
   system("cls");
    printf("\n\n\t\t\t ********TIC TAC TOE******** \n\n");
    printf("\n\n\t\t\tPlayer 1 (X) - Player 2 (O)\n\n\n");
    printf("\t\t\t\t   |   |   \n");
    printf("\t\t\t\t %c | %c | %c \n",sq[1],sq[2],sq[3]);
    printf("\t\t\t\t___|___|___ \n");
    printf("\t\t\t\t   |   |    \n"); 
    printf("\t\t\t\t %c | %c | %c \n",sq[4],sq[5],sq[6]);
    printf("\t\t\t\t___|___|___ \n");
    printf("\t\t\t\t   |   |    \n");
    printf("\t\t\t\t %c | %c | %c \n",sq[7],sq[8],sq[9]);
  }


