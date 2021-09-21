//Created by Ali Jamil

#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	char fplayer, splayer;
	string fplayerName, splayerName;
	cout<<"\t\t\t\tTIC-TAC-TOE GAME"<<endl<<endl;
	cout<<endl;
	// first player name //
	cout<<"Enter firt player name: ";
	cin.ignore();
	getline(cin,fplayerName);
	// first player symbol //
	cout<<"Enter their player symbol: ";
	cin>>fplayer;
	// second player name //
	cout<<"Enter second player name: ";
	cin.ignore();
	getline(cin,splayerName);
	// second player symbol //
	cout<<"Enter their player symbol: ";
	cin>>splayer;
	// decalaring data types with varibles and array //
	char placement[9] = {'0','0','0','0','0','0','0','0','0'};
	int box;
	int i,j,z;
	// display pattern //
	cout<<endl;
	cout<<"\t\t\t\t";
	for(j=0;j<9;j++)
    {
    	if(j==3)
    	{
    			cout<<endl;
    			cout<<"\t\t\t\t";
		}
		if(j==6)
		{
			cout<<endl;
			cout<<"\t\t\t\t";
		}
    		cout<<placement[j]<<" ";	
	}
	cout<<endl;
	// game start //
	bool check = false;
	for(i=0;i<5;i++)
	{
FirstPlayer:
	// first player turn //
		               box=0; 
	cout<<endl;
	cout<<"\t\t\t    First player turn."<<endl<<endl;
	cout<<"Enter place of box: ";
	cin>>box;

    if((box<1) || (box>9))
    {
    	cout<<"\n\t\t============ INVALID BOX ============\n";
    	goto FirstPlayer;
	}
	else if((placement[box-1] != fplayer) && (placement[box-1] != splayer))
	{
		placement[box-1] = fplayer;
	}
	else
	{
		cout<<"\n\t\t============ BOX FILLED ============\n";
		goto FirstPlayer;
	}
	            
	// update first player pattern //
	cout<<endl;
	cout<<"\t\t\t\t";          
	for(j=0;j<9;j++)
    {
    	if(j==3)
    	{
    			cout<<endl;
    			cout<<"\t\t\t\t";
		}
		if(j==6)
		{
			cout<<endl;
			cout<<"\t\t\t\t";
		}
		placement[box-1] = fplayer;
    	cout<<placement[j]<<" ";	
	}
	cout<<endl;
	if(i==4)
	{
		break;
	}
	
        // first check //
	
                                    	// For player One //
         // rows conditons //
    	if(/*1ST ROW*/((placement[0]) == fplayer && (placement[1]) == fplayer && (placement[2]) == fplayer) || /*2ND ROW*/(((placement[3]) == fplayer && (placement[4]) == fplayer && (placement[5] == fplayer) || /*3RD ROW*/(((placement[6]) == fplayer && (placement[7]) == fplayer && (placement[8]) == fplayer)))))
		{
				cout<<"\n\t\t\tWinner: "<<fplayerName<<"("<<fplayer<<")"<<endl;
				cout<<"\n\t\t\tLoser: "<<splayerName<<"("<<splayer<<")"<<endl;
				check = true;
				break;
		}
		// cols conditons //
		else if( /*1ST COL*/((placement[0]) == fplayer && (placement[3]) == fplayer && (placement[6]) == fplayer) || /*2ND COL*/(((placement[1]) == fplayer && (placement[4]) == fplayer && (placement[7]) == fplayer) || /*3RD COL*/(((placement[2]) == fplayer && (placement[5]) == fplayer && (placement[8]) == fplayer))))   
		{
				cout<<"\n\t\t\tWinner: "<<fplayerName<<"("<<fplayer<<")"<<endl;
				cout<<"\n\t\t\tLoser: "<<splayerName<<"("<<splayer<<")"<<endl;
				check = true;
				break;
		}
		// left to right diagonal conditions //
		else if((((placement[0]) == fplayer && (placement[4]) == fplayer && (placement[8]) == fplayer)))
		{
				cout<<"\n\t\t\tWinner: "<<fplayerName<<"("<<fplayer<<")"<<endl;
				cout<<"\n\t\t\tLoser: "<<splayerName<<"("<<splayer<<")"<<endl;
				check = true;
				break;
		}
		// right to left diagonal conditions //
		else if((((placement[2]) == fplayer && (placement[4]) == fplayer && (placement[6]) == fplayer)))
		{
				cout<<"\n\t\t\tWinner: "<<fplayerName<<"("<<fplayer<<")"<<endl;
				cout<<"\n\t\t\tLoser: "<<splayerName<<"("<<splayer<<")"<<endl;
				check = true;
				break;
		}
	                                            	    // For player Two //
		// rows conditons //
		else if(/*1ST ROW*/((placement[0]) == splayer && (placement[1]) == splayer && (placement[2]) == splayer) || /*2ND ROW*/(((placement[3]) == splayer && (placement[4]) == splayer && (placement[5]) == splayer) || /*3RD ROW*/(((placement[6]) == splayer && (placement[7]) == splayer && (placement[8]) == splayer))))  
		{
				cout<<"\n\t\t\tWinner: "<<splayerName<<"("<<splayer<<")"<<endl; 
				cout<<"\n\t\t\tLoser: "<<fplayerName<<"("<<fplayer<<")"<<endl;
				check = true;
				break;	
		}
		// cols conditons //
		else if(/*1ST COL*/((placement[0]) == splayer && (placement[3]) == splayer && (placement[6]) == splayer) || /*2ND COL*/(((placement[1]) == splayer && (placement[4]) == splayer && (placement[7]) == splayer) || (/*3RD COL*/((placement[2]) == splayer && (placement[5]) == splayer && (placement[8]) == splayer))))
		{
			cout<<"\n\t\t\tWinner: "<<splayerName<<"("<<splayer<<")"<<endl; 
			cout<<"\n\t\t\tLoser: "<<fplayerName<<"("<<fplayer<<")"<<endl;
			check = true;
				break;
		}
		// left to right diagonal conditions //
		else if((((placement[0]) == splayer && (placement[4]) == splayer && (placement[8]) == splayer)))
		{
			cout<<"\n\t\t\tWinner: "<<splayerName<<"("<<splayer<<")"<<endl; 
			cout<<"\n\t\t\tLoser: "<<fplayerName<<"("<<fplayer<<")"<<endl;
			check = true;
				break;
		}
		// right to left diagonal conditions //
		else if((((placement[2]) == splayer && (placement[4]) == splayer && (placement[6]) == splayer)))
		{
			cout<<"\n\t\t\tWinner: "<<splayerName<<"("<<splayer<<")"<<endl; 
				cout<<"\n\t\t\tLoser: "<<fplayerName<<"("<<fplayer<<")"<<endl;
				check = true;
				break;
		}
SecondPlayer:		
	// second player turn //
			              box =0;  
	cout<<endl;
	cout<<"\t\t\t    Second player turn."<<endl<<endl;
	cout<<"Enter place of box: ";
	cin>>box;

	 if((box<1) || (box>9))
    {
    	cout<<"\n\t\t============ INVALID BOX ============\n";
    	goto SecondPlayer;
	}
	else if((placement[box-1] != fplayer) && (placement[box-1] != splayer))
	{
		placement[box-1] = splayer;
	}
	else
	{
		cout<<"\n\t\t============ BOX FILLED ============\n";
		goto SecondPlayer;
	}
	                    
	// update second player pattern //
	cout<<endl;
	cout<<"\t\t\t\t";
	for(j=0;j<9;j++)
    {
    	if(j==3)
    	{
    			cout<<endl;
    			cout<<"\t\t\t\t";
		}
		if(j==6)
		{
			cout<<endl;
			cout<<"\t\t\t\t";
		}
		placement[box-1] = splayer;
    	cout<<placement[j]<<" ";	
	}
	cout<<endl;
	 // second check //
	
                                            	// For player One //
         // rows conditons //
    	if(/*1ST ROW*/((placement[0]) == fplayer && (placement[1]) == fplayer && (placement[2]) == fplayer) || /*2ND ROW*/(((placement[3]) == fplayer && (placement[4]) == fplayer && (placement[5] == fplayer) || /*3RD ROW*/(((placement[6]) == fplayer && (placement[7]) == fplayer && (placement[8]) == fplayer))))) 
		{
				cout<<"\n\t\t\tWinner: "<<fplayerName<<"("<<fplayer<<")"<<endl;
				cout<<"\n\t\t\tLoser: "<<splayerName<<"("<<splayer<<")"<<endl;
				check = true;
				break;
		}
		// cols conditons //
		else if( /*1ST COL*/((placement[0]) == fplayer && (placement[3]) == fplayer && (placement[6]) == fplayer) || /*2ND COL*/(((placement[1]) == fplayer && (placement[4]) == fplayer && (placement[7]) == fplayer) || /*3RD COL*/(((placement[2]) == fplayer && (placement[5]) == fplayer && (placement[8]) == fplayer))))   
		{
				cout<<"\n\t\t\tWinner: "<<fplayerName<<"("<<fplayer<<")"<<endl;
				cout<<"\n\t\t\tLoser: "<<splayerName<<"("<<splayer<<")"<<endl;
				check = true;
				break;
		}
		// left to right diagonal conditions //
		else if((((placement[0]) == fplayer && (placement[4]) == fplayer && (placement[8]) == fplayer)))
		{
				cout<<"\n\t\t\tWinner: "<<fplayerName<<"("<<fplayer<<")"<<endl;
				cout<<"\n\t\t\tLoser: "<<splayerName<<"("<<splayer<<")"<<endl;
				check = true;
				break;
		}
		// right to left diagonal conditions //
		else if((((placement[2]) == fplayer && (placement[4]) == fplayer && (placement[6]) == fplayer)))
		{
				cout<<"\n\t\t\tWinner: "<<fplayerName<<"("<<fplayer<<")"<<endl;
				cout<<"\n\t\t\tLoser: "<<splayerName<<"("<<splayer<<")"<<endl;
				check = true;
				break;
		}
	                                            	    // For player Two //
		// rows conditons //
		else if(/*1ST ROW*/((placement[0]) == splayer && (placement[1]) == splayer && (placement[2]) == splayer) || /*2ND ROW*/(((placement[3]) == splayer && (placement[4]) == splayer && (placement[5]) == splayer) || /*3RD ROW*/(((placement[6]) == splayer && (placement[7]) == splayer && (placement[8]) == splayer))))  
		{
				cout<<"\n\t\t\tWinner: "<<splayerName<<"("<<splayer<<")"<<endl; 
				cout<<"\n\t\t\tLoser: "<<fplayerName<<"("<<fplayer<<")"<<endl;
				check = true;
				break;	
		}
		// cols conditons //
		else if(/*1ST COL*/((placement[0]) == splayer && (placement[3]) == splayer && (placement[6]) == splayer) || /*2ND COL*/(((placement[1]) == splayer && (placement[4]) == splayer && (placement[7]) == splayer) || (/*3RD COL*/((placement[2]) == splayer && (placement[5]) == splayer && (placement[8]) == splayer))))
		{
			cout<<"\n\t\t\tWinner: "<<splayerName<<"("<<splayer<<")"<<endl; 
			cout<<"\n\t\t\tLoser: "<<fplayerName<<"("<<fplayer<<")"<<endl;
			check = true;
				break;
		}
		// left to right diagonal conditions //
		else if((((placement[0]) == splayer && (placement[4]) == splayer && (placement[8]) == splayer)))
		{
			cout<<"\n\t\t\tWinner: "<<splayerName<<"("<<splayer<<")"<<endl; 
			cout<<"\n\t\t\tLoser: "<<fplayerName<<"("<<fplayer<<")"<<endl;
			check = true;
				break;
		}
		// right to left diagonal conditions //
		else if((((placement[2]) == splayer && (placement[4]) == splayer && (placement[6]) == splayer)))
		{
			cout<<"\n\t\t\tWinner: "<<splayerName<<"("<<splayer<<")"<<endl; 
				cout<<"\n\t\t\tLoser: "<<fplayerName<<"("<<fplayer<<")"<<endl;
				check = true;
				break;
		}
		// Draw match //
		
		
    }
    if(check == false)
		{
		 	cout<<"\n\t\t\tDRAW : NO ONE WINNER";
	    }
                           
    getch();      	
}
