#include<stdio.h>

int main(){
	
mulai:
	char board[3][3]={
		{'-','-','-'},
		{'-','-','-'},
		{'-','-','-'}
		};
	int x,y;
	char selesai,mulai,keluar;

	do{
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("Tic Tac Toe Game\n----------------\n     1   2   3\n");
		printf("  1  %c   %c   %c\n",board[0][0],board[0][1],board[0][2]);
		printf("  2  %c   %c   %c\n",board[1][0],board[1][1],board[1][2]);
		printf("  3  %c   %c   %c\n",board[2][0],board[2][1],board[2][2]);
		printf("----------------\n\n");
		
		do{
			do{
				printf("Input x coordinate(1~3) for player O: ");
				scanf("%d",&x); fflush stdin;
				printf("\n");
				if(x > 3 || x < 1)
				{
					printf("Coordinate is not valid, re-input!\n\n");
				}
			}while(x > 3 || x < 1);
		x=x--;
			do{
				printf("Input y coordinate(1~3) for player O: ");
				scanf("%d",&y); fflush stdin;
				printf("\n");
				if(y > 3 || y < 1) 
				{
					printf("Coordinate is not valid, re-input!\n\n");
				}
			}while(y > 3 || y < 1);
		y=y--;
		if(board[x][y]!='-'){
			printf("X is already there, input other coordinates!\n\n");
		}
	}while(board[x][y]!='-');
		board[x][y]='O';

		if(board[0][0]=='O' && board[0][1]=='O' && board[0][2]=='O')
		{
			goto selesai;
		}
		else if(board[1][0]=='O' && board[1][1]=='O' && board[1][2]=='O')
		{
			goto selesai;
		}
		else if(board[2][0]=='O' && board[2][1]=='O' && board[2][2]=='O')
		{
			goto selesai;
		}
		else if(board[0][0]=='O' && board[1][0]=='O' && board[2][0]=='O')
		{
			goto selesai;
		}
		else if(board[0][1]=='O' && board[1][1]=='O' && board[2][1]=='O')
		{
			goto selesai;
		}
		else if(board[0][2]=='O' && board[1][2]=='O' && board[2][2]=='O')
		{
			goto selesai;
		}
		else if(board[0][0]=='O' && board[1][1]=='O' && board[2][2]=='O')
		{
			goto selesai;
		}
		else if(board[0][2]=='O' && board[1][1]=='O' && board[2][0]=='O')
		{
			goto selesai;
		}
		else if(board[0][0]!='-' && board[0][1]!='-' && board[0][2]!='-' && board[1][0]!='-' && board[1][1]!='-' && board[1][2]!='-' && board[2][0]!='-' && board[2][1]!='-' && board[2][2]!='-')
		{
			goto selesai;
		}

		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("Tic Tac Toe Game\n----------------\n     1   2   3\n");
		printf("  1  %c   %c   %c\n",board[0][0],board[0][1],board[0][2]);
		printf("  2  %c   %c   %c\n",board[1][0],board[1][1],board[1][2]);
		printf("  3  %c   %c   %c\n",board[2][0],board[2][1],board[2][2]);
		printf("----------------\n\n");
		
		do{
			do{
				printf("Input x coordinate(1~3) for player X: ");
				scanf("%d",&x); fflush stdin;
				printf("\n");
					if(x > 3 || x < 1)
					{
						printf("Coordinate is not valid, re-input!\n\n");
					}
				}while(x > 3 || x < 1);
		x=x--;
				do{
					printf("Input y coordinate(1~3) for player X: ");
					scanf("%d",&y); fflush stdin;
					printf("\n");
						if(y > 4 || y < 1) 
						{
							printf("Coordinate is not valid, re-input!\n\n");
						}
					}while(y > 4 || y < 1);
		y=y--;
		if(board[x][y]!='-'){
			printf("O is already there, input other coordinates!\n\n");
			}
		}while(board[x][y]!='-');
		board[x][y]='X';

		if(board[0][0]=='X' && board[0][1]=='X' && board[0][2]=='X')
		{
			goto selesai;
		}
		else if(board[1][0]=='X' && board[1][1]=='X' && board[1][2]=='X')
		{
			goto selesai;
		}
		else if(board[2][0]=='X' && board[2][1]=='X' && board[2][2]=='X')
		{
			goto selesai;
		}
		else if(board[0][0]=='X' && board[1][0]=='X' && board[2][0]=='X')
		{
			goto selesai;
		}
		else if(board[0][1]=='X' && board[1][1]=='X' && board[2][1]=='X')
		{
			goto selesai;
		}
		else if(board[0][2]=='X' && board[1][2]=='X' && board[2][2]=='X')
		{
			goto selesai;
		}
		else if(board[0][0]=='X' && board[1][1]=='X' && board[2][2]=='X')
		{
			goto selesai;
		}
		else if(board[0][2]=='X' && board[1][1]=='X' && board[2][0]=='X')
		{
			goto selesai;
		}
		else if(board[0][0]!='-' && board[0][1]!='-' && board[0][2]!='-' && board[1][0]!='-' && board[1][1]!='-' && board[1][2]!='-' && board[2][0]!='-' && board[2][1]!='-' && board[2][2]!='-')
		{
			goto selesai;
		}
}while((x>1||x<4) && (y>1||y<4));

selesai:
	char yorn = 'N';

	do{
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("Result:\n\n");
	printf("Tic Tac Toe Game\n----------------\n     1   2   3\n");
	printf("  1  %c   %c   %c\n",board[0][0],board[0][1],board[0][2]);
	printf("  2  %c   %c   %c\n",board[1][0],board[1][1],board[1][2]);
	printf("  3  %c   %c   %c\n",board[2][0],board[2][1],board[2][2]);
	printf("----------------\n\n");
		if(board[0][0]=='X' && board[0][1]=='X' && board[0][2]=='X')
		{
			printf("Player X wins!\n\n");
		}
		else if(board[1][0]=='X' && board[1][1]=='X' && board[1][2]=='X')
		{
			printf("Player X wins!\n\n");
		}
		else if(board[2][0]=='X' && board[2][1]=='X' && board[2][2]=='X')
		{
			printf("Player X wins!\n\n");
		}
		else if(board[0][0]=='X' && board[1][0]=='X' && board[2][0]=='X')
		{
			printf("Player X wins!\n\n");
		}
		else if(board[0][1]=='X' && board[1][1]=='X' && board[2][1]=='X')
		{
			printf("Player X wins!\n\n");
		}
		else if(board[0][2]=='X' && board[1][2]=='X' && board[2][2]=='X')
		{
			printf("Player X wins!\n\n");
		}
		else if(board[0][0]=='X' && board[1][1]=='X' && board[2][2]=='X')
		{
			printf("Player X wins!\n\n");
		}
		else if(board[0][2]=='X' && board[1][1]=='X' && board[2][0]=='X')
		{
			printf("Player X wins!\n\n");
		}
		else if(board[0][0]!='-' && board[0][1]!='-' && board[0][2]!='-' && board[1][0]!='-' && board[1][1]!='-' && board[1][2]!='-' && board[2][0]!='-' && board[2][1]!='-' && board[2][2]!='-')
		{
			printf("Draw! Player X is as strong as player O.\n\n");
		}
		else printf("Player O wins!\n\n");

	printf("The End.\n\nPlay again? (Y/N)\n");
	scanf("%c",&yorn); fflush stdin;

	if(yorn=='Y' || yorn=='y')
		{
			goto mulai;
		}
		else if(yorn=='N' || yorn=='n')
		{
			goto keluar;
		}
		else printf("Not a valid input, input only Y or N!");
	
	}while(yorn!='Y' || yorn!='y' || yorn!='N' || yorn!='n');

keluar:
	printf("\n\nBye bye!\n\nPress any button to exit.");
	getchar();
	return 0;
}