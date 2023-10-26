#include <iostream>
#include<fstream>
#include <string>
#include <cstdlib> 
#include<time.h>
#include<windows.h>
using namespace std;
void intro();
void mainmenu();
void add_a_record();
void see_all_record();
void view_specific_record(string playername);
void modify_record(string playername);
void delete_record(string playername);
struct User
{
string playerName;
int balance; 
int bettingAmount;
}obj;
struct User2
{
	int  guess;
	int dice; 
}obj2;
int main()
{
	int choice;
	cout<<endl;
	cout<<endl;
	cout<<"\t\t\t<==========:ONLINE GAMING SYSTEM:===============>"<<endl<<endl;
	cout<<endl;
	cout<<endl;
	intro();
	cout<<"\t\t\t=================================================="<<endl<<endl;
	cout<<"\t\t\t                    1.Main Menu            "<<endl<<endl;
	cout<<"\t\t\t                    2.Exit                 "<<endl<<endl;
	cout<<"\t\t\t==================================================="<<endl<<endl;
	cout<<"\t\t\t                <==:ENTER YOUR CHOICE:==>  ";cin>>choice;
	if(choice==1)
	{
	mainmenu();
    }
			else
			exit(0);	
}
void intro()
{
	  cout<<"\n==========================================================================";
    cout<<"\n   CCCCC      A        SSSSSSSSS   IIIIIIIII  NN     NN    OOOOOOOO     ";
    cout<<"\n CC          A  A      SS             III     NN N   NN   OO      OO    ";
    cout<<"\nCC          A    A     SSSSSSSSS      III     NN  N  NN   OO      OO    ";
    cout<<"\n CC        AAAAAAAA           SS      III     NN   N NN   OO      OO    ";
    cout<<"\n   CCCCC  A        A   SSSSSSSSS   IIIIIIIII  NN     NN    OOOOOOOO     ";
    cout<<"\n============================================================================\n";
}
void mainmenu()
{
	int choice;
	string p_name;
	do{
	cout<<"\n\n\n";
	cout<<"\t\t\t\t<=============================>"<<endl<<endl;
	cout<<"\t\t\t\t            MAIN MENU          "<<endl;
	cout<<"\t\t\t\t<=============================>"<<endl<<endl;
	cout<<"\t\t\t\t 1.Enter a Record              "<<endl<<endl;
	cout<<"\t\t\t\t 2.View Record Of all Player"<<endl<<endl;
	cout<<"\t\t\t\t 3.view specific Player Record"<<endl<<endl;
	cout<<"\t\t\t\t 4.Modify Record               "<<endl<<endl;
	cout<<"\t\t\t\t 5.Delete Record                "<<endl<<endl;
	cout<<"\t\t\t\t 6.Exit                        "<<endl<<endl;
	cout<<"\t\t\t\t<=============================>"<<endl<<endl;
	cout<<"\t\t\t\t   <==:ENTER YOUR CHOICE:==>  ";cin>>choice;
	cout<<endl;
	switch(choice)
	{
		case 1:
			add_a_record();
			break;
		case 2:
		see_all_record();
		break;
		case 3:
			cout<<"\t\t\tEnter id-card no\n";
			cin.ignore();
			getline(cin,p_name);
		view_specific_record(p_name);	
		break;
		case 4:
			cout<<"\t\t\tEnter id-card no\n";
			cin.ignore();
			getline(cin,p_name);
			modify_record(p_name);
			break;
			case 5:
	       cout<<"\t\t\tEnter id-card no\n";
	       cin.ignore();
			getline(cin,p_name);
			delete_record(p_name);
			break;
	}
}
while(choice!=6);
}
void add_a_record()
{
    char choice;
	ofstream write;
	write.open("file2.txt",ios::app);
	if(write.fail())
	{
		cout<<"THE FILE COULD NOT BE OPEN...press any key";
		cin.ignore();
		cin.get();
	}
	cout<<"\n\n";
	cout<<"\t\t\t<========ADD A RECORD=========>\n\n";
 	cout<<"Enter you name"<<endl;
 	cin.ignore();
    	getline(cin, obj.playerName);
    	write<<"USER NAME :"<<obj.playerName<<endl;
    	cout<<"Enter your starting balance to play game :$";
    	cin>>obj.balance;
    	write<<endl<<"TOTAL BALANCE :"<<obj.balance;
    	do
        {
        
        	
            cout << "Hey, " << obj.playerName<<", enter amount to bet : $";
            cin >> obj.bettingAmount;
    	    write<<endl<<"BETTING AMOUNT "<<obj.bettingAmount<<endl;
    
            if(obj.bettingAmount > obj.balance)
                cout << "Betting balance can't be more than current balance!\n"
                       <<"\nRe-enter balance\n ";
        }while(obj.bettingAmount >obj.balance);
        do
    {
    
        system ("cls");
            system("cls");
    	char x=177;
	    system("cls");
	    
     	cout<<"\n\n\n\n\n\n\n\tTHAT'S THE TRUTH ABOUT PAKISTAN...WE'RE THE ONLY WINNERS. THE PLAYERS DON'T STAND A CHANCE.";
	    for(int i=1;i<=30;i++)
		{
		  cout<<x;
		  Sleep(250); 	
        }
    system("cls");
    cout<<"          ------------------------------\n";
    cout<< "         |CASINO NUMBER GUESSING RULES!|\n";
    cout<<"          ------------------------------\n";
    cout<<"          ------R-----------------------\n";
    cout<<"          --------U---------------------\n";
    cout<<"          ----------L-------------------\n";
    cout<<"          -------------E----------------\n";
    cout<<"          ---------------S--------------\n";
    cout << "\t1. Choose a number between 1 to 10\n";
    cout << "\t2. Winner gets 10 times of the money bet\n";
    cout << "\t3. Wrong bet, and you lose the amount you bet\n\n";
        do
        {
		    
	     system("cls");
		    cout<<"          ------------------------------\n";
            cout<< "         | BETTING ANY  NUMBER BETWEEN |\n";
            cout<<"          ------------------------------\n";
            cout<<"          ---1--------------------------\n";
            cout<<"          ----2-------------------------\n";
            cout<<"          ------3-----------------------\n";
            cout<<"          --------4---------------------\n";
            cout<<"          ----------5-------------------\n";
            cout<<"          ------------6-----------------\n";
            cout<<"          --------------7---------------\n";
            cout<<"          ----------------8-------------\n";
            cout<<"          ------------------9-----------\n";
            cout<<"          --------------------10--------\n";
            cout << "Guess any betting number between 1 & 10 :";
            cin >>obj2.guess ;
    	    write<<endl<<"USER GUESS NUMBER :"<<obj2.guess<<endl;
            if(obj2.guess <= 0 || obj2.guess > 10)
                cout << "\nNumber should be between 1 to 10\n"
                    <<"Re-enter number:\n ";
        }
		while(obj2.guess <= 0 ||obj2.guess > 10);
        obj2.dice = rand()%10 + 1;
    	write<<endl<<"COMPUTER GUESS NUMBER :"<<obj2.dice<<endl;
        if(obj2.dice == obj2.guess)
        {
        	cout<<"The bet amount was: "<<obj.bettingAmount << " after winning it will be the ten times of the bet amount";
            cout << "\n\nYou are in luck!! You have won Rs." << obj.bettingAmount * 10;
            obj.balance = obj.balance + obj.bettingAmount * 10;
    	    write<<endl<<"TOTAL BALANCE AFTER GAME :"<<obj.balance<<endl;
//    	 write.close();
    
        }
        else
        {
            cout << "Oops, better luck next time !! You lost $ "<< obj.bettingAmount <<"\n";
            obj.balance = obj.balance - obj.bettingAmount;
    	    write<<endl<<"TOTAL BALANCE AFTER GAME :"<<obj.balance<<endl;
    	
//      	    write.close();
    
            
        }
        cout << "\nThe winning number was : " << obj2.dice <<"\n";
        cout << "\n"<<obj.playerName<<", You have balance of $" << obj.balance << "\n";
        if(obj.balance == 0)
        {
            cout << "You have no money to play ";
            break;
        }
               cout << "\n\n-->Do you want to play again (y/n)? ";
        cin >> choice;
    }
        	while(choice =='Y'|| choice=='y');
      cout << "\n\n\n";
      cout << "\n\nThanks for playing the game. Your balance is $ " << obj.balance << "\n\n";
      	cout<<"\t\t\t\tTHE FILE SUCCESSFULLY SAVED"<<endl;
	cout<<endl;
	cout<<"Press Any Key To Continue...";
	cin.ignore();
	cin.get();
}
void see_all_record()
{
ifstream read;
bool check=true;
read.open("file2.txt",ios::app);
if(read.fail())
	{
		cout<<"THE FILE COULD NOT BE OPEN...press any key";
		cin.ignore();
		cin.get();
	}
	cout<<"\n\n";
	cout<<"\t\t\t<========ALL PLAYER RECORD=========>\n\n";
	cout<<"\t\t\t\t<=============================>"<<endl<<endl;
	while(read>>obj.playerName>>obj.balance>>obj.bettingAmount>>obj2.guess>>obj2.dice>>obj.balance)
	{
	cout<<"\t\t\tDisplay Player Name"<<endl;
	cout<<obj.playerName<<endl;
	cout<<"\t\t\tDisplay Balance"<<endl;
	cout<<obj.balance<<endl;
	cout<<"\t\t\tDisplay Player Amount"<<endl;
	cout<<obj.bettingAmount;
	cout<<"\t\t\tDisplay guess Player Number"<<endl;
	cout<<obj2.guess<<endl;
	cout<<"\t\t\tDisplay Computer Guess Number"<<endl;
	cout<<obj2.dice<<endl;
	cout<<"\t\t\tDisplay After Ending Game Balance"<<endl;
	cout<<obj.balance;
	cout<<"\t\t\t\t<=============================>"<<endl<<endl;
	check=false;
	}
	read.close();
	if(check)
	cout<<"\t\t\t\t  RECORD FOUND...."<<endl;
	cout<<endl;
	cout<<"Press Any Key To Continue...";
	cin.ignore();
	cin.get();
}
void view_specific_record(string playername)
{
	ifstream read;
bool check=true;
read.open("file2.txt",ios::app);
if(read.fail())
	{
		cout<<"THE FILE COULD NOT BE OPEN...press any key";
		cin.ignore();
		cin.get();
	}
	cout<<"\n\n";
	cout<<"\t\t\t<========SPECIFIC PLAYER RECORD=========>\n\n";
	cout<<"\t\t\t\t<=============================>"<<endl<<endl;
	while(read>>obj.playerName>>obj.balance>>obj.bettingAmount>>obj2.guess>>obj2.dice>>obj.balance)
	{
		if(obj.playerName==playername)
		{
	cout<<"\t\t\tDisplay Player Name"<<endl;
	cout<<obj.playerName<<endl;
	cout<<"\t\t\tDisplay Balance"<<endl;
	cout<<obj.balance<<endl;
	cout<<"\t\t\tDisplay Player Amount"<<endl;
	cout<<obj.bettingAmount;
	cout<<"\t\t\tDisplay guess Player Number"<<endl;
	cout<<obj2.guess<<endl;
	cout<<"\t\t\tDisplay Computer Guess Number"<<endl;
	cout<<obj2.dice<<endl;
	cout<<"\t\t\tDisplay After Ending Game Balance"<<endl;
	cout<<obj.balance;
	cout<<"\t\t\t\t<=============================>"<<endl<<endl;
	check=false;
     }
	}
	read.close();
	if(check)
	cout<<"\t\t\t\t  RECORD FOUND...."<<endl;
	cout<<endl;
	cout<<"Press Any Key To Continue...";
	cin.ignore();
	cin.get();	
}
void modify_record(string playername)
{
		bool check=true;  
    ifstream read("E:\salman/file2.txt");
    ofstream write("E:\salman/temp.txt");
	while(read>>obj.playerName>>obj.balance>>obj.bettingAmount>>obj2.guess>>obj2.dice>>obj.balance)
	{
	   if(obj.playerName==playername)
	    {
	cout<<"\n\n";
	cout<<"\t\t\t<========MODIFY PLAYER RECORD=========>\n\n";
	cout<<"\t\t\t\t<=============================>"<<endl<<endl;
	cout<<"\t\t\tChnge Player Name\n";
	cin.ignore();
	getline(cin,obj.playerName);
	cout<<"\t\t\tChange Player Balance\n";
	cin>>obj.balance;
	cout<"\t\t\tChnge Player Betting Amount\n";
	cin>>obj.bettingAmount;
	cout<<"\t\t\tChange Player Guess Number\n";
	cin>>obj2.guess;
	cout<<"\t\t\tChnge Computer Guess Number\n";
	cin>>obj2.dice;
	cout<<"\t\t\tChange Amount After Game\n";
	cin>>obj.balance;
	cout<<"\t\t\t\t<=============================>"<<endl<<endl;
	cout<<"\t\t\tDisplay Player Name"<<endl;
	write<<obj.playerName<<endl;
	cout<<"\t\t\tDisplay Balance"<<endl;
	write<<obj.balance<<endl;
	cout<<"\t\t\tDisplay Player Amount"<<endl;
    write<<obj.bettingAmount<<endl;
	cout<<"\t\t\tDisplay guess Player Number"<<endl;
	write<<obj2.guess<<endl;
	cout<<"\t\t\tDisplay Computer Guess Number"<<endl;
	write<<obj2.dice<<endl;
	cout<<"\t\t\tDisplay After Ending Game Balance"<<endl;
	write<<obj.balance<<endl;
	check = false;
    }
    else
    {
    cout<<"\t\t\tDisplay Player Name"<<endl;
	write<<obj.playerName<<endl;
	cout<<"\t\t\tDisplay Balance"<<endl;
	write<<obj.balance<<endl;
	cout<<"\t\t\tDisplay Player Amount"<<endl;
    write<<obj.bettingAmount<<endl;
	cout<<"\t\t\tDisplay guess Player Number"<<endl;
	write<<obj2.guess<<endl;
	cout<<"\t\t\tDisplay Computer Guess Number"<<endl;
	write<<obj2.dice<<endl;
	cout<<"\t\t\tDisplay After Ending Game Balance"<<endl;
	write<<obj.balance<<endl;
	}
    }
	if(check)
	{
	cout<<"\t\t\t\t NO RECORD FOUND...."<<endl;
	cout<<endl;
}
else
{
    cout<<"\t\t\tFILE IS UPDATED SUCCESSFULLY"<<endl;
    cout<<endl;
}
	cout<<"Press Any Key To Continue...";
	cin.ignore();
	cin.get();
	read.close();
	write.close();
	remove("file2.txt");
	rename("Temp.txt","file2.txt");
}
void delete_record(string playername)
{
	char choice;
	bool check= true;
	ifstream read("file2.txt");
	ofstream write("Temp.txt");
	while(read>>obj.playerName>>obj.balance>>obj.bettingAmount>>obj2.guess>>obj2.dice>>obj.balance)
	{
	if(obj.playerName==playername)
	{
	continue;
	}
	else
	{
	check=false;
	cout<<"\t\t\tDisplay Player Name"<<endl;
	write<<obj.playerName<<endl;
	cout<<"\t\t\tDisplay Balance"<<endl;
	write<<obj.balance<<endl;
	cout<<"\t\t\tDisplay Player Amount"<<endl;
    write<<obj.bettingAmount<<endl;
	cout<<"\t\t\tDisplay guess Player Number"<<endl;
	write<<obj2.guess<<endl;
	cout<<"\t\t\tDisplay Computer Guess Number"<<endl;
	write<<obj2.dice<<endl;
	cout<<"\t\t\tDisplay After Ending Game Balance"<<endl;
	write<<obj.balance<<endl;
	}
}
	if(check)
	{
		cout<<"\t\t\tRECORD NOT FOUND...."<<endl;
		cout<<endl;
	}
	else
	{
		cout<<"\t\t\t\tRECORD DELETED SUCCESSFULLY";
		cout<<endl;
	}
	cout<<"Press any key to continue....";
	cin.ignore();
	cin.get();
	read.close();
	write.close();
	remove("E:file2.txt");
	rename("temp.txt","file2.txt");
}
