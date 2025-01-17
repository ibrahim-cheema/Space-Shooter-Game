#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
#include <conio.h>
using namespace std;
const int ROWS = 20;
const int COLS = 30;
char arr[ROWS][COLS];
int health = 3;
int score = 0;
int x = COLS / 2, y = ROWS - 2;
int q=0;
bool computerPlayerEnabled = true;
int computerPlayerX = 0, computerPlayerY = 0;

void show()
{

	 string hearts = " ";
    for (int i = 0; i < health; i++)
    {
        hearts =hearts+ " *+* ";
    }
    cout << "LIFE : " << hearts << endl;
    // rest of the code
	
	
  //  cout << "LIFE : " << health << endl;
    cout << "SCORE : " << score << endl;
    
    cout << "DISTANCE : " << q<< endl;   
    if (health == 0)
    {
        system("cls");
    string game_over = "  _____          __  __ ______    ______      ________ _____  \n"
                        " / ____|   /\\   |  \\/  |  ____|  / __ \\ \\    / /  ____|  __ \\ \n"
                        "| |  __   /  \\  | \\  / | |__    | |  | \\ \\  / /| |__  | |__) |\n"
                        "| | |_ | / /\\ \\ | |\\/| |  __|   | |  | |\\ \\/ / |  __| |  _  / \n"
                        "| |__| |/ ____ \\| |  | | |____  | |__| | \\  /  | |____| | \\ \\ \n"
                        " \\_____/_/    \\_\\_|  |_|______|  \\____/   \\/   |______|_|  \\_\\ \n";

   
    cout << game_over;
        system("pause");
    }
}


void spawnEnemy()
{
    int pos = rand() % COLS + 1;
    arr[1][pos] = '#';            // add new enemy at top row
}


void moveEnemies()
{
	
	{
		
	
    for (int i = ROWS - 2; i >= 0; i--)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (arr[i][j] == '#')
            {
                arr[i][j] = ' ';
                if (arr[i + 1][j] == 'S') // check collision with spaceship
                {
                    arr[i + 1][j] = ' ';                   // remove enemy
                    health--;                          // subtract health
                }
                else
                {
                    arr[i + 1][j] = '#'; // move enemy down
                }
            }
        }
    }
}
}



void spawncoins()
{
    // check if there's already a coin present
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (arr[i][j] == '^')
            {
                return; // exit if there's already a coin present
            }
        }
    }
    
    // if there's no coin present, spawn one
    int posc = rand() % COLS;
    arr[0][posc] = '^';
}


void movecoins()
{
    // find the coin (if any) and move it down
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (arr[i][j] == '^')
            {
                // move the coin down if possible
                if (i < ROWS - 1)
                {
                    arr[i][j] = ' ';
                    if (arr[i + 1][j] == 'S') // check collision with spaceship
                    {
                        score++;
                    }
                    else
                    {
                        arr[i + 1][j] = '^';
                    }
                }
                return;
            }
        }
    }
}


void dis_tance()
{
	q++;
	
}



void Board()
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (i == 0 || i == ROWS - 1 )
            {
                arr[i][j] = '*'; // add border
            }
            else if( j == 0 || j == COLS - 1)
            {
                arr[i][j] = '|'; // add border
            }
            else if (i == y && j == x)
            {
                arr[i][j] = 'S'; // add spaceship
            }
        
            
			else if (i == computerPlayerY && j == computerPlayerX && computerPlayerEnabled)
            {
                arr[i][j] = 'C'; // add computer spaceship
            }
             
            else if (arr[i][j] != '#' && arr[i][j] != '^')
            {
                arr[i][j] = ' '; // clear other cells
            }
        }
    }
}


void printboard()
{
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}



void updateComputerPlayerPosition(int playerX, int playerY)
{
    // Calculate the position of the computer spaceship based on the player
    computerPlayerX = playerX;
    computerPlayerY = playerY + 3;
}

void handleMovement()
{
    char m;
    if (_kbhit())
    {
        m = _getch();
        switch (m)
        {
            case ' ':									
                y=y-2;
                break;
            case 72: // up arrow key
                y--;
                break;
            case 75: // left arrow key
                x--;
                break;
            case 80: // down arrow key
                y++;
                break;
            case 77: // right arrow key
                x++;
                break;
        }
    }
    if (x == 0)
    {
        x = 1;
    }
    if (x == COLS - 1)
    {

        x = COLS - 2;
    }
    if (y == 0)
    {
        y = 1;
    }
    if (y == ROWS - 1)
    {

        y = ROWS - 2;
    }

    updateComputerPlayerPosition(x, y);
}







int main()
{
    srand(time(0));
     

     int temp=0;
    
    

int em=0;
int se=0;
int gift=0;
int c = 1;
int m=48;
int x;
int n;
int distance=0;
int z=0;
int i=0;
int v=0;


   

    cout << "\n\n\n\n\n\n\n\n\n";
    cout << "\t\t\t\t==============================================" << endl;
    cout << "\t\t\t\t|                 WELCOME TO                 |" << endl;
    cout << "\t\t\t\t|                 THE GAME OF                |" << endl;
    cout << "\t\t\t\t|                  ADVENTURE                 |" << endl;
    cout << "\t\t\t\t==============================================" << endl;
    cout << "\t\t\t\t|                                             |" << endl;
    cout << "\t\t\t\t|        ENTER A NUMBER TO BEGIN THE GAME     |" << endl;
    cout << "\t\t\t\t|                                             |" << endl;
    cout << "\t\t\t\t|        1. START GAME                        |" << endl;
    cout << "\t\t\t\t|        2. READ INSTRUCTIONS                 |" << endl;
    cout << "\t\t\t\t|                                             |" << endl;
    cout << "\t\t\t\t============================================== " << endl;

		cin>>x;
		
		
		if (x==2)
		{
			system("cls"); 
			
			cout<<"\n\n\n\n\n\n\n";
			cout<<"\t\t  DONT EVER FEEL INFERIOR TO OTHERS"<<endl;
		    cout<<"\t\t                             LIKE ONCE TOLD HAVE SOME STRONG WALLS TO PROTECT YOU  :) # cheema  ";                             
	     	cout<<"\n\n\n\n\n\n\n";
			
			cout<<"TO START THE GAME PRESS 1 :) :";
			cin>>x;
		}
					

if(x==1)
{


	while(1)
	{
		
		 system("cls");;
		  show();                       //to show health and score	   
	     Board();
	    if (computerPlayerEnabled) {
        updateComputerPlayerPosition(x, y);
    }
     
		 printboard();
		  
		


		
		
	//from onward this code we will look at distane of the game
		    distance++;
			if(distance==2)
			{
		       dis_tance();
		   	 distance=0;	
		    	}
		    	
		    	
	    //from onward this we see spped of spawn enemy and speed of movement downward enemy
		                 se++;
		                if(se==7)
		               {
			
		                    spawnEnemy();
		                  
		                        se=0;
		    
	                           }
	  
			          
	                        	  em++;  
	                           	if(em==5)
	                              	{	
	                            moveEnemies();
	                            
                                    em=0;
                                      	}
		    	
	  	
		    	//this would be the first lvl of spped increase
		    		if(q>100)
          //  spawnComputerPlayer();
            //moveComputerPlayer();
         
			          {
	                    z++;	
	                 	if(z==3)
	                    	{	
	                        moveEnemies();
                                  z=0;
                              	}
                        }   
                 	//this would be the second lvl of spped increase
		                       if(q>150)
               
			                   {
 
                            	 i++;	
	                       	if(i==2)
	                         	{	
	                               moveEnemies();
                             i=0;
      	                         }
                               }
				           
		  
		    
	
      

        spawncoins();
       
        movecoins();
    
       
         
      	//onward this is ship movement
           handleMovement();
        
	       
		}
		//above bracket is the end of infinite while loop
		
	
	

    } 
	return (0);              
}
