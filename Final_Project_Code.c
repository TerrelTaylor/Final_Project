/*------------------------------*/
/*  
	Structured Programming Techniques 
	STUDENT NAME	: TERREL TAYLOR  
    STUDENT ID		: 20220368
    COURSE CODE		: INFO-0105
    LECTURER		: DR. STEVE WARNER
    PROGRAM NAME    : FINAL PROJECT
    CREATION DATE  	: 26th JUNE 2023
*/
/*-------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h> //for string functions
#include <ctype.h>  //for to upper function and others
#include <stdbool.h>//boolean variables
#include <windows.h>//for system function
#include <conio.h> // for the getch function



#define MaxVehicle 10

struct VehicleData //declaring struct array
{
    char ChassisNum[50];
    char Type[50];
    char Brand[50];
    int YearOfManu;
    float CostPrice;
    float MarkupPercent;
    int QtyInStock;
};
COORD coord= {0,0};
COORD max_res,cursor_size;
void gotoxy (int x, int y) //to do to specific coordinates
{
	coord.X = x; coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void read               (int *add_z, struct VehicleData VehicleItems[MaxVehicle]);
void SellingPrice       (int z, struct VehicleData VehicleItems[MaxVehicle]);
void Search             (int z, struct VehicleData VehicleItems[MaxVehicle]);
void StatisticsReport   (int s, struct VehicleData VehicleItems[MaxVehicle]);
void OutOfStockReport   (int o, struct VehicleData VehicleItems[MaxVehicle]);
void ReOrderReport      (int r, struct VehicleData VehicleItems[MaxVehicle]);
int main()
{ 
    int q, n, z, s, o, r, choice1, choice2, choice3, choice4, openfile; // variables declared
    struct VehicleData VehicleItems [MaxVehicle]; //struct array declared
    system("cls");//clear screen for windows
    printf("--------------------------------------------------------------------------------------\n");
    printf("PRESS (Windows key) + (Up arrow)--->(TO MAXIMIZE TAB) [OR] PRESS F11 --->(FULLSCREEN)\n");
    printf("YOU CAN DO IT WITH YOUR MOUSE AS WELL\n");
    printf("THIS IS FOR A BETTER DISPLAY INTERFACE, FOR THE PROGRAM\n");
    printf("-------------------------------------------------------\n");
    printf("PRESS ENTER TO (START PROGRAM)\n");
    printf("------------------------------\n");
		getch();//get any character to continue
    system("cls");
    printf("FINAL PROJECT "); //final project loading screen
    printf("LOADING");Sleep(450);printf(".");Sleep(450);printf(".");Sleep(450);printf(".");Sleep(450);printf(".");system("cls");
    printf("FINAL PROJECT ");
    printf("LOADING");Sleep(450);printf(".");Sleep(450);printf(".");Sleep(450);printf(".");Sleep(450);printf(".");system("cls");
    //Program Infomation
	printf("STUDENT NAME\t\t:\t\tTERREL TAYLOR\n");   
	printf("STUDENT ID\t\t:\t\t20220368\n");
	printf("COURSE CODE\t\t:\t\tINFO-0105\n");
	printf("LECTURER\t\t:\t\tDR. STEVE WARNER\n");
	printf("PROGRAM NAME\t\t:\t\tFINAL PROJECT\n");
	printf("CREATION DATE\t\t:\t\t26th JUNE 2023\n");
	printf("------------------------PROGRAM INFO---------------------");
	Sleep(3000);//sleep for 3000 milliseconds (i.e 3 seconds)
	system("cls");
	read(&z, VehicleItems); //Function to read VehicleData.txt
		
    // Loading screen 	
		gotoxy(0,8);
		printf("Creating Menu for 'VehicleData.txt'    ");
		Sleep(100);printf("\xDB");Sleep(200);printf("\xDB");Sleep(200);printf("\xDB");Sleep(200);printf("\xDB");
    	Sleep(100);printf("\xDB");Sleep(100);printf("\xDB");Sleep(20);printf("\xDB");Sleep(20);printf("\xDB");
    	Sleep(200);printf("\xDB");Sleep(10);printf("\xDB");Sleep(20);printf("\xDB");Sleep(200);printf("\xDB");
    	Sleep(100);printf("\xDB");Sleep(200);printf("\xDB");Sleep(100);printf("\xDB");Sleep(200);printf("\xDB");
    	Sleep(200);printf("\xDB");Sleep(200);printf("\xDB");Sleep(200);printf("\xDB");Sleep(200);printf("\xDB");
    	Sleep(100);printf("\xDB");Sleep(100);printf("\xDB");Sleep(200);printf("\xDB");Sleep(500);printf("\xDB");
    	gotoxy(0,7);
        printf("DONE!!");
do  
    {system("cls");
    	//mainmenu
        printf ("\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");  
        printf ("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf ("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf ("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf ("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf ("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf ("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf ("\xB2\xB2\xB2\xB2\xDB\n");
	    printf ("\xDB                             MAIN MENU                                   \xDB\n");       
	    printf ("\xDB                          CHOOSE AN OPTION                               \xDB\n");           
	    printf ("\xDB*************************************************************************\xDB\n");
	    printf ("\xDB     Menu 1 - Press [1] Display Vehicle Data                             \xDB\n");                   
	    printf ("\xDB     Menu 2 - Press [2] Search and Display Vehicle (WITH CHASSIS NUMBER) \xDB\n");               
	    printf ("\xDB     Menu 3 - Press [3] View Vehicle Inventory Reports                   \xDB\n");          
	    printf ("\xDB              Press [4] Quit                                             \xDB\n");      
	    printf ("\xDB*************************************************************************\xDB\n");   
	    //enter
        Sleep(10);printf("E");Sleep(10);printf("N");Sleep(10);printf("T");Sleep(10);printf("E");
        Sleep(10);printf("R ");Sleep(10);printf("M");Sleep(10);printf("E");Sleep(10);printf("N");
        Sleep(10);printf("U");Sleep(10);;printf(" N");Sleep(10);printf("U");
        Sleep(10);printf("M");Sleep(10);printf("B");Sleep(10);printf("E");Sleep(10);printf("R");
        Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");
        Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");
        Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");
        Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf(">");
    		//scans for choice
            scanf  ("%d", &choice1);
			    if (choice1==4)// Quit option (Menu [4])
                {   
                    system ("cls");
			        printf ("BYE BYE,\n");
			        printf("HAVE A NICE DAY\n");
			        printf("SOLI DEO GLORIA!!\n\n");
		 	        return 0;
            	}

switch(choice1) // switches pertaining to their choice
        {
                case 1:system("cls");
                        printf("SORTING SELLING PRICE TO DESCENDING ORDER ");
                        Sleep(20);printf("\xDB");Sleep(100);printf("\xDB");Sleep(10);printf("\xDB");Sleep(10);printf("\xDB");
                        Sleep(10);printf("\xDB");Sleep(10);printf("\xDB");Sleep(10);printf("\xDB");Sleep(100);printf("\xDB");
                        Sleep(10);printf("\xDB");Sleep(200);printf("\xDB"); Sleep(10);printf("\xDB");Sleep(10);printf("\xDB");
                        Sleep(10);printf("\xDB");Sleep(10);printf("\xDB");Sleep(100);printf("\xDB");Sleep(200);printf("\xDB");
                        Sleep(10);printf("\xDB");Sleep(10);printf("\xDB");Sleep(10);printf("\xDB");Sleep(100);printf("\xDB");
                        Sleep(10);printf("\xDB");Sleep(10);printf("\xDB");Sleep(10);printf("\xDB");Sleep(10);printf("\xDB");
                        Sleep(10);printf("\xDB");Sleep(10);printf("\xDB");Sleep(100);printf("\xDB");Sleep(10);printf("\xDB");
                        Sleep(100);printf("\xDB");Sleep(10);printf("\xDB");
                        Sleep(10);printf("\xDB");Sleep(10);printf("\xDB\n\n");
                        //Function to show records sorted and printed in descending order of selling price
                        SellingPrice(z,VehicleItems);
                        //------------------------------------------------------------------------------//
                        break;
                case 2:
                        do
                            {system("cls");
                                /*FUNCTION TO SEARCH VIA CHISSIS NUMBER*/
                                Search(z,VehicleItems);
                                /*-------------------------------------*/

                                //SAYS: TRY AGAIN? PRESS [1] FOR (YES)   |||   PRESS [2] FOR (NO)   |||   PRESS [3] TO (QUIT)
                                Sleep(20);printf("T");Sleep(20);printf("R");Sleep(20);printf("Y ");Sleep(20);printf("A");
                                Sleep(20);printf("G");Sleep(20);printf("A");Sleep(20);printf("I");Sleep(20);printf("N");
                                Sleep(20);printf("?\n");Sleep(20);printf("P");Sleep(20);printf("R");Sleep(20);printf("E");
                                Sleep(20);printf("S");Sleep(20);printf("S");Sleep(20);printf(" [1]");Sleep(20);printf(" F");
                                Sleep(20);printf("O");Sleep(20);printf("R");Sleep(20);printf(" (YES)");Sleep(20);printf("   |||   ");
                                printf("P");Sleep(20);printf("R");Sleep(20);printf("E");Sleep(20);printf("S");Sleep(20);printf("S");
                                Sleep(20);printf(" [2]");Sleep(20);printf(" F");
                                Sleep(20);printf("O");Sleep(20);printf("R");Sleep(20);printf(" (NO)   |||");
                                printf("   P");Sleep(20);printf("R");Sleep(20);printf("E");Sleep(20);printf("S");Sleep(20);printf("S");
                                Sleep(20);printf(" [3]");Sleep(20);printf(" T");
                                Sleep(20);printf("O");Sleep(20);printf(" (QUIT)\n");
                                Sleep(20);printf("E");Sleep(20);printf("N");Sleep(20);printf("T");Sleep(20);printf("E");
                                Sleep(20);printf("R");Sleep(20);printf("-");Sleep(20);printf("-");Sleep(20);printf("-");Sleep(20);printf("-");Sleep(20);printf(">");
                                scanf("%d", &choice2);//scans choice
                        	if(choice2 == 3) // quit
                            {system("cls");
                                printf ("BYE BYE,\nHAVE A NICE DAY\n\nSOLI DEO GLORIA!!\n");
                                return 0;
                            }
                            if(choice2==2)// 2 is to not try again
                            {system("cls");
                                choice1=1;// goes to back main
                                break;
                            }

                        	if(choice2 != 1)
                            {system("cls");
                                printf("INVALID INPUT\n");
                                choice2=1;// goes to back if invalid input
                            }               
                        	if(choice2 != 2)
                            {system("cls");
                                printf("INVALID INPUT\n");
                                choice2=1;// goes to back if invalid input
                            }
                        	if(choice2 != 3)
                            {system("cls");
                                printf("INVALID INPUT\n");
                                choice2=1;// goes to back if invalid input
                            }
                             

                            }
                        while   (choice2==1);// 1 is to try again
                       break;
                        
            
                case 3:system("cls");
                        do
                            {system("cls"); //seconday menu
                                printf ("***************************************************************************\n");   Sleep(10);
	                            printf ("*                       SECONDARY MENU OF REPORTS                         *\n");   Sleep(10);
                                printf ("*                          CHOOSE AN OPTION                               *\n");   Sleep(10);
                                printf ("***************************************************************************\n");   Sleep(10);
                                printf ("*     Option 1 - Press [1] *Display* (Vehicle Statistics Report)          *\n");   Sleep(100);
                                printf ("*     Option 2 - Press [2] *Display* (Out Of Stock Vehicle Report)        *\n");   Sleep(100);
                                printf ("*     Option 3 - Press [3] * Print * (Vehicle For Reorder Report)         *\n");   Sleep(100);
                                printf ("*     Option 4 - Press [4] * Back  * (Main Menu -PROMPT-)                 *\n");   Sleep(100);
                                printf ("*     Option 5 - Press [5] * Quit  *                                      *\n");   Sleep(100);
                                printf ("***************************************************************************\n");   Sleep(100);
                                
                                Sleep(10);printf("E");Sleep(10);printf("N");Sleep(10);printf("T");Sleep(10);printf("E");
                                Sleep(10);printf("R ");Sleep(10);printf("O");Sleep(10);printf("P");Sleep(10);printf("T");
                                Sleep(10);printf("I");Sleep(10);;printf("O");Sleep(10);printf("N ");
                                Sleep(10);printf("N");Sleep(10);printf("U");Sleep(10);printf("M");Sleep(10);printf("B");
                                Sleep(10);printf("E");Sleep(10);printf("R");Sleep(10);printf("-");Sleep(10);printf("-");
                                Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");
                                Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");
                                Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");
                                Sleep(10);printf("-");Sleep(10);printf(">");
                                
                                    scanf   ("%d", &choice3);//scans for choice
                                    if      (choice3==5) //quit
                                    {system("cls");
                                        printf ("BYE BYE,\nHAVE A NICE DAY\n\nSOLI DEO GLORIA!!\n");
                                        return 0;
                                    }
                                    if       (choice3==4) //back
                                    {
                                        choice1=1;//goes back to main
										break; 
                                    }

                                    switch  (choice3) // switches pertaining to their choice
                                    {
                                        case 1:system("cls");
                                                printf("\n-------------------------------------------------------------------------------------------------\n"); Sleep(10);
                                                printf ("\t\t\t\t  VEHICLE STATISTICS REPORT\n\n");                                                             Sleep(10);
                                                //Function to Display Vehicle Statistics Report
												StatisticsReport (s, VehicleItems);
												//-------------------------------------------//
                                                printf ("**BACK** PRESS [1]");                                                                                  Sleep(10);
                                                printf ("  ||  **QUIT PRESS** [0]\n");                                                                          Sleep(10);
                                                Sleep(10);printf("E");Sleep(10);printf("N");Sleep(10);printf("T");Sleep(10);printf("E");
                                                Sleep(10);printf("R");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");
                                                Sleep(10);printf("-");Sleep(50);printf(">");
                                                scanf("%d", &choice4);//scans for choice

                                                break;
                                        case 2:system("cls");
                                                //Function to Display Out of Stock Vehicles Report  
                                                OutOfStockReport ( o, VehicleItems);
                                                //----------------------------------------------//
                                                printf ("**BACK** PRESS [1]");                  Sleep(10);
                                                printf ("  ||  **QUIT PRESS** [0]\n");          Sleep(10);
                                                Sleep(10);printf("E");Sleep(10);printf("N");Sleep(10);printf("T");Sleep(10);printf("E");
                                                Sleep(10);printf("R");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");
                                                Sleep(10);printf("-");Sleep(50);printf(">");
                                                scanf("%d", &choice4);//scans for choice

                                                break;
                                        case 3: system("cls");  
                                                printf ("VEHICLE FOR RE-ORDER REPORT\n\n"); 
                                                //Function to Display Vehicles for Reorder Report  
												ReOrderReport(r, VehicleItems);
												//----------------------------------------------//
												printf("THIS REPORT IS STORED IN THE 'Orders.txt' FILE\n");Sleep(500);
												printf("DO YOU WANT TO OPEN FILE NOW??\t\nType (1) FOR YES\nType (2) FOR NO\n");
												scanf ("%d",&openfile);
												if (openfile==1)
												{
													system ("start Orders.txt"); //opens file
													choice4=1;
												}
												else
												{
													choice4=1;
												}
                                                break;
                                    }
                                    
                                    if      (choice4==0) //quit
                                    {system("cls");
                                        printf ("BYE BYE,\nHAVE A NICE DAY\n\nSOLI DEO GLORIA!!\n");
                                        return 0;
                                    }

                            }
                        while(choice4==1);// do while this choice is 1 to loop
            
          
        }
        // BACK TO MAIN MENU OR QUIT
        printf("------------------------------------------------");        Sleep(100);
        printf("\nMAIN MENU -PROMPT-");                                         Sleep(100);
        printf("\n(BACK TO MENU) PRESS [1] ");                                 Sleep(100);
        printf("||| (QUIT) PRESS [0]\n");                                       Sleep(100);
        Sleep(10);printf("E");Sleep(10);printf("N");Sleep(10);printf("T");Sleep(10);printf("E");
        Sleep(10);printf("R");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");
        Sleep(10);printf("-");Sleep(50);printf(">");
		
        scanf ("%d", &choice1);

    }
while   (choice1==1);
if      (choice1==0)//quit screen
    {system("cls");
        printf ("BYE BYE,\nHAVE A NICE DAY\n\nSOLI DEO GLORIA!!\n");
    }
return 0;
  
}


/*---------------------------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------------------------*/

void read(int *add_z, struct VehicleData VehicleItems[MaxVehicle])
{system("cls");
int i = 0; int n;
char entry[500]; //the string from the response
char line [500]; //the information from the file
gotoxy(0,0);//SAYS: NOT CASE SENSITIVE
Sleep(10);printf("N");Sleep(10);printf("O");Sleep(10);printf("T");Sleep(10);printf(" C");
Sleep(10);printf("A");Sleep(10);printf("S");Sleep(10);printf("E");Sleep(10);printf(" S");
Sleep(10);printf("E");Sleep(100);printf("N");Sleep(10);printf("S");Sleep(10);printf("I");
Sleep(10);printf("T");Sleep(10);printf("I");Sleep(200);printf("V");Sleep(10);printf("E");
gotoxy(0,1);
Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("--");
Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("--");
Sleep(10);printf("-");Sleep(100);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");
Sleep(10);printf("-");Sleep(10);printf("-");Sleep(200);printf("-");Sleep(10);printf("-");
gotoxy(0,2);//go to a coordinates
printf("Is 'VehicleData.txt',");
gotoxy(0,3);
printf("In The Same Folder With The Program File 'TerrelTaylor.20220368.INFO105.FinalProject.cpp'?");
printf(" (This Program)");
gotoxy(0,4);
printf("TYPE ( YES ) TO SEARCH || TYPE ( NO ) IF UNSURE\n");
gotoxy(0,5);
Sleep(10);printf("E");Sleep(10);printf("N");Sleep(10);printf("T");Sleep(10);printf("E");Sleep(10);printf("R ");
Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");
Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");
Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");
Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("> ");
scanf("%s", entry);
int length = strlen(entry); //length will equal the string length
    
	for (int e = 0; e < length; e++) //goes through the string and stops at its length
    {
    	entry[e] = toupper (entry[e]); //makes it not case sensitive (ALL UPPERCASE EITHER WAY)
	}
        
    
	if(strcmp(entry,"NO")==0) // NO
	{
		printf("\n\nPlace 'VehicleData.txt' in the same folder as the program!\n\n");
		exit(1);
	}

if(strcmp(entry,"YES")==0) //if yess then open file
{

FILE *file;
file = fopen ("VehicleData.txt", "r"); //opens file
gotoxy(0,7);
printf("Searching for 'VehicleData.txt'        "); // wait screen shows searching filw
    Sleep(10);printf("\xB2");Sleep(10);printf("\xB2");Sleep(10);printf("\xB2");Sleep(100);printf("\xB2");
    Sleep(10);printf("\xB2");Sleep(10);printf("\xB2");Sleep(100);printf("\xB2");Sleep(10);printf("\xB2");
    Sleep(10);printf("\xB2");Sleep(10);printf("\xB2");Sleep(10);printf("\xB2");Sleep(50);printf("\xB2");
    Sleep(10);printf("\xB2");Sleep(200);printf("\xB2");Sleep(10);printf("\xB2");Sleep(10);printf("\xB2");
    Sleep(10);printf("\xB2");Sleep(800);printf("\xB2");Sleep(20);printf("\xB2");Sleep(100);printf("\xB2");
    Sleep(10);printf("\xB2");Sleep(100);printf("\xB2");Sleep(20);printf("\xB2");

if (file == NULL) //if while searching the file is not there then EXIT
{ 
    printf("\nERROR! - 'VehicleData.txt' NOT FOUND\n\n\n");
    printf("NOTE: I have designed this program (TerrelTaylor.20220368.INFO105.FinalProject.cpp) to extract data from 'VehicleData.txt'\n");Sleep(1-0);
    printf("Place 'VehicleData.txt' in the same folder as the program!\n");Sleep(100);
    printf("The 'VehicleData.txt' that was sent to you, needs to be in the same folder as the program (TerrelTaylor.20220368.INFO105.FinalProject.cpp)\n\n\n\n\n\n");Sleep(100);
    Sleep(2500);
    printf("If you have not received this file (VehicleData.txt)\n");
    printf("CONTACT ME: 20220368.roytec.edu\n");
    exit(1);
}
    //else do this
    gotoxy(0,7);
	printf("Extracting data from 'VehicleData.txt' "); // wait screen 
    Sleep(10);printf("\xDB");Sleep(10);printf("\xDB");Sleep(10);printf("\xDB");Sleep(10);printf("\xDB");
    Sleep(100);printf("\xDB");Sleep(10);printf("\xDB");Sleep(10);printf("\xDB");Sleep(100);printf("\xDB");
    Sleep(10);printf("\xDB");Sleep(10);printf("\xDB");Sleep(10);printf("\xDB");Sleep(10);printf("\xDB");
    Sleep(10);printf("\xDB");Sleep(10);printf("\xDB");Sleep(100);printf("\xDB");Sleep(100);printf("\xDB");
    Sleep(100);printf("\xDB");Sleep(100);printf("\xDB");Sleep(500);printf("\xDB");Sleep(050);printf("\xDB");
    Sleep(10);printf("\xDB");Sleep(50);printf("\xDB");Sleep(50);printf("\xDB\n");

while (!feof(file)) //scans file and stores stuct
{
    fgets (line, 500, file);
    sscanf(line,"%s %s %s %d %f %f %d", VehicleItems[i].ChassisNum, VehicleItems[i].Type, VehicleItems[i].Brand, &VehicleItems[i].YearOfManu, &VehicleItems[i].CostPrice, &VehicleItems[i].MarkupPercent, &VehicleItems[i].QtyInStock);
    i++;
}   
n = i;
fclose(file);   //closes file
*add_z = n;
}
else
{
	printf("\nINVALID ENTRY");
	gotoxy(0,8);
	printf("Redo - 3");
	Sleep(1000);
	gotoxy(0,8);
	printf("Redo - 2");
	Sleep(1000);
	gotoxy(0,8);
	printf("Redo - 1");
	Sleep(1000);
	main();
}
}
/*---------------------------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------------------------*/

void SellingPrice(int z, struct VehicleData VehicleItems[MaxVehicle]) {
    int i, j;
    float MP; // Value After Markup Percentage
    float SP; // Selling price
    float SPJ;
    float SPJPlus1;
    // Bubble sort
    for (i = 0; i < z - 1; i++) 
    {
        for (j = 0; j < z - i - 1; j++) 
        {
            // Calculate selling price for the jth and (j+1)th elements
            MP = VehicleItems[j].MarkupPercent / 100 * VehicleItems[j].CostPrice;
            SPJ = VehicleItems[j].CostPrice + MP;
            
            MP = VehicleItems[j+1].MarkupPercent / 100 * VehicleItems[j+1].CostPrice;
            SPJPlus1 = VehicleItems[j+1].CostPrice + MP;
            
            if (SPJ < SPJPlus1) 
            {
                // Swap the elements if they are out of order
                struct VehicleData temp = VehicleItems[j];
                VehicleItems[j] = VehicleItems[j+1];
                VehicleItems[j+1] = temp;
            }
        }
    }
    

    printf("ChassisNum\t\tType\t\tYearOfManu\tCostPrice\t\tMarkupPercent\tSellingPrice\tQtyInStock\tBrand\n");Sleep(10);
    printf("--------------------------------------------------------------------------------------------------------------------------------------\n\n");Sleep(10);
    //prints out selling pice in decending order after sort
    for (i = 0; i < z; i++) 
    {
        MP = VehicleItems[i].MarkupPercent / 100 * VehicleItems[i].CostPrice;
        SP = VehicleItems[i].CostPrice + MP;
        printf ("%s\t\t%s\t\t%d\t\t%.2f\t\t%.2f\t\t%.2f\t%d\t\t%s\t\n", VehicleItems[i].ChassisNum, VehicleItems[i].Type, VehicleItems[i].YearOfManu, VehicleItems[i].CostPrice, VehicleItems[i].MarkupPercent, SP, VehicleItems[i].QtyInStock, VehicleItems[i].Brand);
    }
    printf("--------------------------------------------------------------------------------------------------------------------------------------\n\n");Sleep(10);

}
/*---------------------------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------------------------*/

void Search (int z,struct VehicleData VehicleItems[MaxVehicle])
{system("cls");
    char chassisNumIn [50]; //entering chassis number
    int i;
    float SP, MP;//declaring Selling price and MarkUP Percentaage
    printf("\n-------------------------------------------------------------\n");    Sleep(100);
    printf("\t\tVALID CHASSIS NUMBERS\n");    Sleep(100);
    printf("-------------------------------------------------------------\n");      Sleep(100);
    printf("\t\tVEHICLE  1: SV300169266\n");    Sleep(100);
    printf("\t\tVEHICLE  2: 1C4NJPFB578\n");    Sleep(100);
    printf("\t\tVEHICLE  3: 1047FE3331B\n");    Sleep(100);
    printf("\t\tVEHICLE  4: MG1025437A \n");    Sleep(100);
    printf("\t\tVEHICLE  5: RB45974F412\n");    Sleep(100);
    printf("\t\tVEHICLE  6: 125MT45978S\n");    Sleep(100);
    printf("\t\tVEHICLE  7: 488MZ458GT \n");    Sleep(100);
    printf("\t\tVEHICLE  8: 78FD145LO4 \n");    Sleep(100);
    printf("\t\tVEHICLE  9: 9656CV4523Q\n");    Sleep(100);
    printf("\t\tVEHICLE 10: 79FS532DE78\n");    Sleep(100);
    //SAYS: (------------------------)
    Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");
    Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");
    Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");
    Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");
    Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");
    Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");
    Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");
    Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");
    Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");
    Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-\n");
    
    
   //SAYS: (NOT CASE SENSITIVE)
    Sleep(10);printf("N");Sleep(10);printf("O");Sleep(10);printf("T");Sleep(10);printf(" C");
    Sleep(10);printf("A");Sleep(10);printf("S");Sleep(10);printf("E");Sleep(10);printf(" S");
    Sleep(10);printf("E");Sleep(100);printf("N");Sleep(10);printf("S");Sleep(10);printf("I");
    Sleep(10);printf("T");Sleep(10);printf("I");Sleep(200);printf("V");Sleep(10);printf("E\n");

    Sleep(10);printf("T");Sleep(10);printf("Y");Sleep(10);printf("P");Sleep(10);printf("E ");
    Sleep(10);printf("( /");Sleep(10);printf("S");Sleep(10);printf("T");Sleep(10);printf("O");
    Sleep(10);printf("P");Sleep(100);printf(" )");Sleep(10);printf(" T");Sleep(10);printf("O");
    Sleep(250);printf(" *STOP*\n");
    //SAYS: (ENTER CHASSIS NUMBER-->)
    Sleep(10);printf("E");Sleep(10);printf("N");Sleep(10);printf("T");Sleep(10);printf("E");
    Sleep(10);printf("R ");Sleep(10);printf("C");Sleep(10);printf("H");Sleep(10);printf("A");
    Sleep(10);printf("S");Sleep(100);printf("S");Sleep(10);printf("I");Sleep(10);printf("S ");
    Sleep(10);printf("N");Sleep(10);printf("U");Sleep(200);printf("M");Sleep(10);printf("B");
    Sleep(10);printf("E");Sleep(100);printf("R");Sleep(20);printf("-");Sleep(200);printf("-");
    Sleep(10);printf(">");
    scanf("%s", chassisNumIn); // SCANS FOR CHASSIS NUMBER ENTERED
    
    
    
    int length = strlen(chassisNumIn);//checks string length
    for (int x = 0; x < length; x++)//goes through the string and stops at its length
        chassisNumIn[x] = toupper (chassisNumIn[x]);//make all uppercase
    for (i = 0; i < 11; i++)
    {   
        if(strcmp(chassisNumIn,"/STOP")==0) //to stop 
        {
            Sleep(10);printf("S");Sleep(10);printf("T");Sleep(10);printf("O");Sleep(10);printf("P");Sleep(10);printf("P");Sleep(10);printf("I");
            Sleep(10);printf("N");Sleep(10);printf("G");Sleep(10);printf("."); Sleep(10);printf(".");Sleep(10);printf(".");Sleep(10);printf(".");Sleep(10);printf(".");
            Sleep(10);printf(".");Sleep(100);printf(".");Sleep(10);printf(".");Sleep(20);printf(".");Sleep(10);printf(".");Sleep(10);printf(".");Sleep(10);printf(".");
            Sleep(10);printf(".");Sleep(10);printf(".");Sleep(10);printf(".");Sleep(10);printf(".");Sleep(10);printf(".");Sleep(100);printf(".");Sleep(10);printf(".\n");
           
            break;
        }
        if(strcmp(VehicleItems[i].ChassisNum, chassisNumIn)==0) //to search in array for Valid chassis number
        {   //SAYS: (SEARCHING.............)
            Sleep(10);printf("S");Sleep(10);printf("E");Sleep(10);printf("A");Sleep(10);printf("R");Sleep(10);printf("C");Sleep(10);printf("H");
            Sleep(10);printf("I");Sleep(10);printf("N");Sleep(10);printf("G"); Sleep(10);printf(".");Sleep(10);printf(".");Sleep(10);printf(".");Sleep(10);printf(".");
            Sleep(10);printf(".");Sleep(100);printf(".");Sleep(10);printf(".");Sleep(20);printf(".");Sleep(10);printf(".");Sleep(10);printf(".");Sleep(10);printf(".");
            Sleep(10);printf(".");Sleep(10);printf(".");Sleep(10);printf(".");Sleep(10);printf(".");Sleep(10);printf(".");Sleep(100);printf(".");Sleep(10);printf(".\n");
            MP = VehicleItems[i].MarkupPercent / 100 * VehicleItems[i].CostPrice;
            SP = VehicleItems[i].CostPrice + MP; //to find selling price
            printf("---------------------------------------------\n");
            printf("YOU ENTERED:\t\t        %s\n",chassisNumIn);
            printf("VEHICLE FOUND");Sleep(500);printf("!");Sleep(250);printf("!");Sleep(250);printf("!");Sleep(259);printf("!");Sleep(250);printf("!\n");
            printf("---------------------------------------------\n");
            printf("Chassis Number:\t\t\t%s\nBrand: \t\t\t\t%s\nType: \t\t\t\t%s\nYearOfManu: \t\t\t%d\n",VehicleItems[i].ChassisNum, VehicleItems[i].Brand, VehicleItems[i].Type, VehicleItems[i].YearOfManu);
            printf("Cost Price: \t\t\t%.2f\nMarkup Percent: \t\t%.2f\nSelling Price: \t\t\t%.2f\nQuantity In Stock: \t\t%d\n", VehicleItems[i].CostPrice, VehicleItems[i].MarkupPercent, SP, VehicleItems[i].QtyInStock);
            printf("---------------------------------------------\n");Sleep(10);
            break;
        }
    }
    if (i>=11) // if go loop and go pass ten vehicles the (Says: VEHICLE NOT FOUND)
    {
        printf("YOU ENTERED----> %s\n", chassisNumIn);
        Sleep(20);printf("V");Sleep(20);printf("E");Sleep(20);printf("H");Sleep(20);printf("I");
        Sleep(20);printf("C");Sleep(20);printf("L");Sleep(20);printf("E");Sleep(20);printf(" N");
        Sleep(20);printf("O");Sleep(20);printf("T ");Sleep(20);printf("F");Sleep(20);printf("O");
        Sleep(20);printf("U");Sleep(20);printf("N");Sleep(20);printf("D\n");Sleep(20);printf("I");
        Sleep(20);printf("N");Sleep(20);printf("V");Sleep(20);printf("A");Sleep(20);printf("L");
        Sleep(20);printf("I");Sleep(20);printf("D");Sleep(20);printf(" E");Sleep(20);printf("N");
        Sleep(20);printf("T");Sleep(20);printf("R");Sleep(20);printf("Y\n");Sleep(20);
    }
   
    
}
/*---------------------------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------------------------*/

void StatisticsReport (int s, struct VehicleData VehicleItems[MaxVehicle])
{
    int i;
    int j;
    float TotalCP = 0;//Total Cost Price
    float SP;// Value After Markup Percentage
    float MP;//MarkUp percentage
    float TotalSP;//Total Selling Price
    float AvgSP;//Average Selling Price
        printf ("Type\t\t\tCost Price\t\t\tSelling Price\t\t\tBrand\n");                                                    Sleep(20);
        printf ("-------------------------------------------------------------------------------------------------\n");     Sleep(20);
    for(i = 0; i < 10; i++)
    {
        MP     = VehicleItems[i].MarkupPercent / 100 * VehicleItems[i].CostPrice;
        SP      = VehicleItems[i].CostPrice + MP;
        printf("%s\t\t\t%.2f\t\t\t%.2f\t\t\t%s\n", VehicleItems[i].Type, VehicleItems[i].CostPrice, SP, VehicleItems[i].Brand);
        TotalCP = TotalCP + VehicleItems[i].CostPrice;
    }
    for(j = 0; j < 10; j++)
    {
        MP      = VehicleItems[j].MarkupPercent / 100 * VehicleItems[j].CostPrice; //tofind markup percentage
        SP      = VehicleItems[j].CostPrice + MP; //to find selling price
        TotalSP = TotalSP + SP; //to find Total selling price
    }

    AvgSP = TotalSP/10; //to find average selling price

    printf("-------------------------------------------------------------------------------------------------");            Sleep(250);
    printf("\n\nTOTOL COST PRICE:----->%.2f\n",TotalCP);                                                                    Sleep(250);//print total cost price
    printf("AVERAGE SELLING PRICE:--------------------------------->%.2f\n\n",AvgSP);                                       Sleep(250);//prints average selling price
    printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^SUMMARY^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");         Sleep(250);
}
/*---------------------------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------------------------*/

void OutOfStockReport (int o, struct VehicleData VehicleItems[MaxVehicle])
{
int i;
	int OutOfStock;
	//loading screem
        printf("LOADING>");printf("(1%%)");Sleep(500);system("cls");
        printf("LOADING-->");printf("(8%%)");Sleep(500);system("cls");
        printf("LOADING--->");printf("(12%%)");Sleep(500);system("cls");
        printf("LOADING---->");printf("(24%%)");Sleep(500);system("cls");
        printf("LOADING----->");printf("(28%%)");Sleep(500);system("cls");
        printf("LOADING------>");printf("(45%%)");Sleep(250);system("cls");
        printf("LOADING------->");printf("(67%%)");Sleep(400);system("cls");
        printf("LOADING-------->");printf("(70%%)");Sleep(300);system("cls");
        printf("LOADING--------->");printf("(76%%)");Sleep(500);system("cls");
        printf("LOADING---------->");printf("(89%%)");Sleep(500);system("cls");
        printf("LOADING----------->");printf("(97%%)");Sleep(1000);system("cls");
        printf("LOADING------------>");printf("(100%%)");Sleep(500);system("cls");
        printf("DONE\n");

        Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");
        Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");
        Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");
        Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");
        Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);

        Sleep(20);printf("\nO");Sleep(20);printf("U");Sleep(20);printf("T");
        Sleep(20);printf(" O");Sleep(20);printf("F");
        Sleep(20);printf(" S");Sleep(20);printf("T");Sleep(20);printf("O");Sleep(20);printf("C");Sleep(20);printf("K");
        Sleep(20);printf(" V");Sleep(20);printf("E");Sleep(20);printf("H");Sleep(20);printf("I");Sleep(20);printf("C");Sleep(20);printf("L");Sleep(20);printf("E");
        Sleep(20);printf(" R");Sleep(20);printf("E");Sleep(20);printf("P");Sleep(20);printf("O");Sleep(20);printf("R");Sleep(20);printf("T\n");
	for (i =0;i<10;i++)
	{
		if (VehicleItems[i].QtyInStock == 0) // Searches to see if Stock =0
		{
            Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");
            Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");
            Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");
            Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");
            Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);
			printf ("-\nChassis Number:\t%s\nBrand:\t\t%s\nType:\t\t%s\nQty In Stock:\t%d\n", VehicleItems[i].ChassisNum, VehicleItems[i].Brand, VehicleItems[i].Type, VehicleItems[i].QtyInStock); //prints all stock = 0
		}
			  
	}
            Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");
            Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");
            Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");
            Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);printf("-");
            Sleep(10);printf("-");Sleep(10);printf("-");Sleep(10);Sleep(10);printf("-\n");
}
/*---------------------------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------------------------*/

void ReOrderReport (int r, struct VehicleData VehicleItems[MaxVehicle])
{
 
  	int i;
	int numofvehicles = 0;
	int numofvan = 0;
	int numoftruck = 0;
	float TotalCP = 0;// total cost price
	float AvgCP; //average cost price
	

	FILE *reorder;
	reorder = fopen("Orders.txt", "w"); //creates a file to write
  	fprintf(reorder, "\t\tVEHICLE RE-ORDER REPORT\n\n");
  	fprintf(reorder, "%-15s%-15s%-15s\n", "Type", "Brand", "Cost Price");
  	fprintf(reorder,"\n");
  	for (i =0;i<10;i++)
	{
		if (VehicleItems[i].QtyInStock == 0)// Searches to see if Stock =0
		{
			fprintf(reorder, "%-15s%-15s$%-15.2f\n", VehicleItems[i].Type, VehicleItems[i].Brand, VehicleItems[i].CostPrice);
			numofvehicles++; //adds to the number of vehicles that need to be reorders
			
			if(strcmp(VehicleItems[i].Type,"Van")==0)//adds to the number of vans that need to be reorders
			{
				numofvan++;	
			}
			if(strcmp(VehicleItems[i].Type,"Truck")==0)//adds to the number of tucks that need to be reorders
			{
				numoftruck++;	
			}
			
			TotalCP = TotalCP + VehicleItems[i].CostPrice;//adds to the Costprice of all vehicles at 0 stock 
			
			
		}
	}
	fprintf(reorder, "----------------------------SUMMARY----------------------------\n");
	AvgCP = TotalCP / numofvehicles;//to find avg cost price
	
	
	fprintf(reorder,"TOTAL NUMBER OF VEHICLES\t\t(TO RE-ORDER):\t\t%d\n",numofvehicles);//prints out 
	fprintf(reorder,"TOTAL COST PRICE OF VEHICLES\t\t(TO RE-ORDER):\t\t$%.2f\n", TotalCP);//prints out
	fprintf(reorder,"AVERAGE COST PRICE OF VEHICLES\t\t(TO RE-ORDER):\t\t$%.2f\n", AvgCP);//prints out
	fprintf(reorder,"TOTAL NUMBER OF VANS\t\t\t(TO RE-ORDER):\t\t%d\n", numofvan);//prints out
	fprintf(reorder,"TOTAL NUMBER OF TRUCKS\t\t\t(TO RE-ORDER):\t\t%d", numoftruck);//prints out
	
	fclose(reorder); //closes file
}