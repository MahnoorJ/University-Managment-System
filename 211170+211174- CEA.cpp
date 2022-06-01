/* OOP Project: CEA
   Group Members: Mahnoor Jabeen(211170), Muhammad Talha Imad El Din(211174)
   Class: BEBME-F-21
   Semester: 2nd
   Submitted To: Muhammad Farooq Khan
   
Instructions:[The (Read) code in the (portal) class is for one class if you wanna 
read the data of any other class kindly change the name of CSV File in code.Thanks]
*/

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <cmath>
using namespace std;



//Cafe
class UniCafe{
protected: 
    int option;
public:
	void Menu();
    void TakeOrder();};

//Game
class TicTacToe
{private:
    char game[],A[],mark[];
    int player,size,i;
		
public:
    int check(char game[]);
    int result(int player);
    int entry(char A[], int size, int i);
    void board(int player, char mark[]); 
    void play();};



//Reading From CSVs and Comprehending Results
class portal
{	protected:
	int s;	
	string cname;
	string name[10];
    int rollnum[10];
    float labperf[10];
    float labrep[10];
    float mid[10];
    float cea[10];
    float final[10];
    float tot[10];
    char grade[10];
    int wp;
    int wr;
    int wm;
    int wcea;
    int wf;

    
    public:
    void read();
    void weightage();
    void total();
    void grades();
    void display();
    void Manage(); };

//Writing on CSVs
class Write : public portal
{   private:
		char a;
		string name[5];
		int rollno[5],x;
		float labperf[5],labrep[5],mid[5],cea[5],final[5];
	public:
		void Open(){
			cout<<"Classes: "<<endl;
			cout<<"1. BEBME-OOP\n";
			cout<<"2. MTS A-CP\n";
			cout<<"3. MTS B-CP\n";
			cout<<"4. POWER CP\n";
			cout<<"In which of the Following class You want to write in?";
			cin>>x;
			if(x == 1)
			bebme();
			if(x == 2)
			mtsA();
			if(x == 3)
			mtsB();
			if(x == 4)
			power();
			else
			cout<<"\"Wrong Entry\"";
		}
		void bebme();
		void mtsA();
		void mtsB();
		void power();};

//MAIN
 
int main(){
    int opt;
	char op,x,A;
	Write W1;
    portal P1;
    UniCafe UC;
    TicTacToe T3;
	cout<<endl;
    cout<<"		\"WELCOME TO AIR UNIVERSITY M&T MANAGMENT\"\n";
    do{
	cout<<"\n Where Do You Wanna Go Now?\n";
    cout<<"1.	University Portal\n";
    cout<<"2.	Cafeteria\n";
    cout<<"3.	Gaming Zone\n";
    cout<<endl;
	cin>>opt;
    cout<<endl;
    if(opt == 1)
	{cout<<"{Enter A to Add Data.....Enter M to Manage Data}\n";
	cin>>op;
	if(op == 'A')
	W1.Open();
	if(op == 'M')
	{ W1.Manage();}                               //Inheritance
	}
	
	if(opt == 2)
	{UC.TakeOrder();}
	
	if(opt == 3)
	{T3.play();}
	cout<<"\n		Do You Wanna Stay?(y/Y) ";
	cin>>x;}
	while( x == 'y' || x == 'Y' );
    return 0;
}


void Write :: bebme(){
		fstream fout;
        fout.open("BEBME-OOP.csv", ios::out);
        
        for (int i=0;i<5;i++){
        cout<<"Enter Name of Student "<<i+1<<" :";
		cin>>name[i];}   
		
		for (int i=0;i<5;i++){
        cout<<"Enter Roll No of Student "<<i+1<<" :";
		cin>>rollno[i];} 
		
		for (int i=0;i<5;i++){
        cout<<"Enter Final Lab Performance Marks of Student "<<i+1<<" :";
		cin>>labperf[i];} 
		
		for (int i=0;i<5;i++){
        cout<<"Enter Final Lab Report Marks of Student "<<i+1<<" :";
		cin>>labrep[i];} 
		
		for (int i=0;i<5;i++){
        cout<<"Enter MidMarks of Student "<<i+1<<" :";
		cin>>mid[i];} 
		
	    for (int i=0;i<5;i++){
        cout<<"Enter CEA Marks of Student "<<i+1<<" :";
		cin>>cea[i];} 
		
		for (int i=0;i<5;i++){
        cout<<"Enter Final Marks of Student "<<i+1<<" :";
		cin>>final[i];}
		fout<<"\n";
	    for (int i=0;i<5;i++)
        {fout<<rollno[i]<<" , "<<name[i]<<" , "<<labperf[i]<<" , "<<labrep[i]<<" , "<<mid[i]<<" , "<<cea[i]<<" , "<<final[i]<<endl;}
}
void Write :: mtsA()
{
    	fstream f1;
        f1.open("MTSA-CP.csv", ios::out);
        
        for (int i=0;i<5;i++){
        cout<<"Enter Names of Student "<<i+1<<" :";
		cin>>name[i];}   
		
		for (int i=0;i<5;i++){
        cout<<"Enter Roll No of Student "<<i+1<<" :";
		cin>>rollno[i];} 
		
		for (int i=0;i<5;i++){
        cout<<"Enter Final Lab Performance Marks of Student "<<i+1<<" :";
		cin>>labperf[i];} 
		
		for (int i=0;i<5;i++){
        cout<<"Enter Final Lab Report Marks of Student "<<i+1<<" :";
		cin>>labrep[i];} 
		
		for (int i=0;i<5;i++){
        cout<<"Enter MidMarks of Student "<<i+1<<" :";
		cin>>mid[i];} 
		
	    for (int i=0;i<5;i++){
        cout<<"Enter CEA Marks of Student "<<i+1<<" :";
		cin>>cea[i];} 
		
		for (int i=0;i<5;i++){
        cout<<"Enter Final Marks of Student "<<i+1<<" :";
		cin>>final[i];}
		f1<<"\n";
	    for (int i=0;i<5;i++)
        {f1<<rollno[i]<<" , "<<name[i]<<" , "<<labperf[i]<<" , "<<labrep[i]<<" , "<<mid[i]<<" , "<<cea[i]<<" , "<<final[i]<<endl;
	}}

void  Write :: mtsB(){
	fstream f2;
        f2.open("MTSB-CP.csv", ios::out);
        
        for (int i=0;i<5;i++){
        cout<<"Enter Names of Student "<<i+1<<" :";
		cin>>name[i];}   
		
		for (int i=0;i<5;i++){
        cout<<"Enter Roll No of Student "<<i+1<<" :";
		cin>>rollno[i];} 
		
		for (int i=0;i<5;i++){
        cout<<"Enter Final Lab Performance Marks of Student "<<i+1<<" :";
		cin>>labperf[i];} 
		
		for (int i=0;i<5;i++){
        cout<<"Enter Final Lab Report Marks of Student "<<i+1<<" :";
		cin>>labrep[i];} 
		
		for (int i=0;i<5;i++){
        cout<<"Enter MidMarks of Student "<<i+1<<" :";
		cin>>mid[i];} 
		
	    for (int i=0;i<5;i++){
        cout<<"Enter CEA Marks of Student "<<i+1<<" :";
		cin>>cea[i];} 
		
		for (int i=0;i<5;i++){
        cout<<"Enter Final Marks of Student "<<i+1<<" :";
		cin>>final[i];}
		f2<<"\n";
	    for (int i=0;i<5;i++)
        {f2<<rollno[i]<<" , "<<name[i]<<" , "<<labperf[i]<<" , "<<labrep[i]<<" , "<<mid[i]<<" , "<<cea[i]<<" , "<<final[i]<<endl;}
}
    
void  Write :: power(){
    	
		fstream f3;
        f3.open("POWER-CP.csv", ios::out);
        
        for (int i=0;i<5;i++){
        cout<<"Enter Names of Student "<<i+1<<" :";
		cin>>name[i];}   
		
		for (int i=0;i<5;i++){
        cout<<"Enter Roll No of Student "<<i+1<<" :";
		cin>>rollno[i];} 
		
		for (int i=0;i<5;i++){
        cout<<"Enter Final Lab Performance Marks of Student "<<i+1<<" :";
		cin>>labperf[i];} 
		
		for (int i=0;i<5;i++){
        cout<<"Enter Final Lab Report Marks of Student "<<i+1<<" :";
		cin>>labrep[i];} 
		
		for (int i=0;i<5;i++){
        cout<<"Enter MidMarks of Student "<<i+1<<" :";
		cin>>mid[i];} 
		
	    for (int i=0;i<5;i++){
        cout<<"Enter CEA Marks of Student "<<i+1<<" :";
		cin>>cea[i];} 
		
		for (int i=0;i<5;i++){
        cout<<"Enter Final Marks of Student "<<i+1<<" :";
		cin>>final[i];}
		f3<<"\n";
	    for (int i=0;i<5;i++)
        {f3<<rollno[i]<<" , "<<name[i]<<" , "<<labperf[i]<<" , "<<labrep[i]<<" , "<<mid[i]<<" , "<<cea[i]<<" , "<<final[i]<<endl;}
    }


void portal::read(){
    cout<<"Reading CSV File:      "<<endl;
string line;
ifstream file3("POWER-CP.csv");
int i=0;
while (getline(file3, line)) // read whole line into line
{
    string temp;
    istringstream iss(line); // string stream
    iss >> rollnum[i];
    getline(iss, temp, ',');
    getline(iss, name[i], ',');
    iss >> labperf[i];
    getline(iss, temp, ',');
    iss >>  labrep[i];    
    getline(iss, temp, ',');
    iss >>  mid[i];    
    getline(iss, temp, ',');
    iss >>  cea[i];    
    getline(iss, temp, ',');
    iss >>  final[i];    
    i++;
}
for(int i=1;i<6;i++)
cout<<name[i]<<setw(10)<<rollnum[i]<<setw(10)<<labperf[i]<<setw(10)<<labrep[i]<<setw(10)<<mid[i]<<setw(10)<<cea[i]<<setw(10)<<final[i]<<endl;	
}

void portal::weightage(){
	cout<<endl;
    int	weight=100;
	cout<<"Weightage For Lab Performance: "<<endl;
	cin>>wp;
	if(wp>weight) {
	cout<<"Invalid input,  Try Again  : ";
	cin>>wp;
	}
	else{
	}
	
	cout<<"Weightage For Lab Report: "<<endl;
	cin>>wr;
	if(wp+wr>weight){
	cout<<"Invalid input,  Try Again  : ";
	cin>>wr;
	}
	else{
	}	
		
	cout<<"Weightage For MidTerm Exams: "<<endl;
	cin>>wm;
	if(wp+wr+wm>weight){
	cout<<"Invalid input,  Try Again  : ";
	cin>>wm;
	}
	else{
	}
		
	cout<<"Weightage For CEA: "<<endl;
	cin>>wcea;
	if(wcea+wp+wr+wm>weight){
	cout<<"Invalid input,  Try Again  : ";
	cin>>wcea;
	}
	else{
	}
		
	cout<<"Weightage For FinalTerm Exams: "<<endl;
	cin>>wf;	
	if(wf+wcea+wp+wr+wm>weight){
	cout<<"Invalid input,  Try Again  : ";
	cin>>wf;
	}
	cout<<endl;
	cout<<endl;
}

void portal::total(){
	for (int i=1;i<6;i++)
{
	tot[i]=(labperf[i]/20*wp)+(labrep[i]/20*wr)+(mid[i]/50*wm)+(cea[i]/20*wcea)+(final[i]/50*wf);
	}	

}

void portal::grades(){
for(int i=1;i<6;i++){

	if(tot[i]>=90 & tot[i]<=100 )
{   grade[i]='A';
	}
	
	else if(tot[i]<=89 & tot[i]>=65)
{  grade[i]='B';
	}
				
	else if(tot[i]<=64 & tot[i]>=40)
{   grade[i]='C'; 
	}
				
	else if(tot[i]<=49 & tot[i]>=30)
{  grade[i]='D';
	}
		
    else if(tot[i]<30)
{
	grade[i]='F';	
	}
	
}

}

void portal::display(){
	
	cout<<"TOTAL MARKS: "<<endl;
	for(int i=1;i<6;i++){
	cout<<rollnum[i]<<"    "<<tot[i] <<endl;			
	}
	cout<<endl;
	cout<<"GRADE: "<<endl;
	cout<<endl;
	for(int i=1;i<6;i++){
	cout<<rollnum[i]<<"    "<<grade[i] <<endl;			
	}
}


void portal::Manage()  

{   read();
    weightage();
	total();
	grades();
	display();
}


void UniCafe :: Menu(){
    cout<<"               \"WELCOME TO CAFE D'AIRIAN\""<<endl;
    cout<<endl;
	cout<<"*Explore Our Amazing Taste*"<<endl;
    cout<<endl;
    cout<<"Sr No    \"Menu\"   "<<"\t"<<" Prices"<<endl;
	cout<<"(1)     Espresso"<<"\t"<<"(Rs.180)"<<endl;
	cout<<"(2)     Americano"<<"\t"<<"(Rs.180)"<<endl;
	cout<<"(3)     Flat White"<<"\t"<<"(Rs.180)"<<endl;
	cout<<"(4)     Caffè Latte"<<"\t"<<"(Rs.180)"<<endl;
	cout<<"(5)     Caffè Mocha"<<"\t"<<"(Rs.180)"<<endl;
	cout<<"(6)     Caffè Breve"<<"\t"<<"(Rs.180)"<<endl;
	cout<<"(7)     Cappiccuno"<<"\t"<<"(Rs.180)"<<endl;
	cout<<endl;
	cout<<"     \"Cold Appetizers\""<<endl;
	cout<<"(8)     Iced Espresso"<<"\t"<<"(Rs.200)"<<endl;
	cout<<"(9)     Nitro    "<<"\t"<<"(Rs.250)"<<endl;
	cout<<"(10)    Frappiccuno"<<"\t"<<"(Rs.250)"<<endl;
	cout<<"(11)    Iced Latte"<<"\t"<<"(Rs.250)"<<endl;
	cout<<"(12)    Iced Mocha"<<"\t"<<"(Rs.250)"<<endl;
	cout<<"(13)    Iced Americano"<<"\t"<<"(Rs.230)"<<endl;
	cout<<endl;
	cout<<"  \"Desserts/cakes(1 serving)\""<<endl;
	cout<<"(14)    Choco Lava"<<"\t"<<"(Rs.400)"<<endl;
	cout<<"(15)    Mocha Mud Pie"<<"\t"<<"(Rs.380)"<<endl;
	cout<<"(16)    Chocomal Crunch"<<"\t"<<"(Rs.320)"<<endl;
	cout<<"(17)    Oreo Madness"<<"\t"<<"(Rs.350)"<<endl;
	cout<<"(18)    Nutella Waffle"<<"\t"<<"(Rs.400)"<<endl;
	cout<<endl;
}
void UniCafe :: TakeOrder(){
	char opt;
	int Espresso=180,Americano=180,FlatWhite=180,CaffeLatte=180,CaffeBreve=180,CaffeMocha=180,Cappuccino=180;
    int IcedEspresso=200,IcedAmericano=230,IcedLatte=250,IcedMocha=250,Frappiccuno=250,Nitro=250;
    int NutellaWaffle=400,OreoMadness=350,ChocomalCrunch=320,MochaMudPie=380,ChocoLava=400,Bill=0,TotalBill=0;
	Menu();
	do{
	cout<<"What would you like to Take?"<<endl;
	cout<<"Enter Sr No: ";
	cin>>option;
	if (option == 1)
	{cout<<"Your Item is served"<<endl;
	Bill=Espresso;
	cout<<"Your Bill is: "<<Bill<<endl;}
	if (option == 2)
	{cout<<"Your Item is served"<<endl;
	Bill=Americano;
	cout<<"Your Bill is: "<<Bill<<endl;}
	if (option == 3)
	{cout<<"Your Item is served"<<endl;
	Bill=FlatWhite;
	cout<<"Your Bill is: "<<Bill<<endl;}
	if (option == 4)
	{cout<<"Your Item is served"<<endl;
	Bill=CaffeLatte;
	cout<<"Your Bill is: "<<Bill<<endl;}
	if (option == 5)
	{cout<<"Your Item is served"<<endl;
	Bill=CaffeMocha;
	cout<<"Your Bill is: "<<Bill<<endl;}
	if (option == 6)
	{cout<<"Your Item is served"<<endl;
	Bill=CaffeBreve;
	cout<<"Your Bill is: "<<Bill<<endl;}
	if (option == 7)
	{cout<<"Your Item is served"<<endl;
	Bill=Cappuccino;
	cout<<"Your Bill is: "<<Bill<<endl;}
	if (option == 8)
	{cout<<"Your Item is served"<<endl;
	Bill=IcedEspresso;
	cout<<"Your Bill is: "<<Bill<<endl;}
	if (option == 9)
	{cout<<"Your Item is served"<<endl;
	Bill=Nitro;
	cout<<"Your Bill is: "<<Bill<<endl;}
	if (option == 10)
	{cout<<"Your Item is served"<<endl;
	Bill=Frappiccuno;
	cout<<"Your Bill is: "<<Bill<<endl;}
	if (option == 11)
	{cout<<"Your Item is served"<<endl;
	Bill=IcedLatte;
	cout<<"Your Bill is: "<<Bill<<endl;}
	if (option == 12)
	{cout<<"Your Item is served"<<endl;
	Bill=IcedMocha;
	cout<<"Your Bill is: "<<Bill<<endl;}
	if (option == 13)
	{cout<<"Your Item is served"<<endl;
	Bill=IcedAmericano;
	cout<<"Your Bill is: "<<Bill<<endl;}
	if (option == 14)
	{cout<<"Your Item is served"<<endl;
	Bill=ChocoLava;
	cout<<"Your Bill is: "<<Bill<<endl;}
	if (option == 15)
	{cout<<"Your Item is served"<<endl;
	Bill=MochaMudPie;
	cout<<"Your Bill is: "<<Bill<<endl;}
	if (option == 16)
	{cout<<"Your Item is served"<<endl;
	Bill=ChocomalCrunch;
	cout<<"Your Bill is: "<<Bill<<endl;}
	if (option == 17)
	{cout<<"Your Item is served"<<endl;
	Bill=OreoMadness;
	cout<<"Your Bill is: "<<Bill<<endl;}
	if (option == 18)
	{cout<<"Your Item is served"<<endl;
	Bill=NutellaWaffle;}
	TotalBill+=Bill;
	if (option>18 || option<1) 
	{cout<<endl;
	cout<<"                            ***FALSE ENTRY***"<<endl;}
	cout<<"Any Other Item?(y/Y) ";
	cin>>opt;}
	while (opt == 'y' || opt == 'Y');
	{cout<<endl;
	cout<<"\"TOTAL BILL\": "<<TotalBill;
	cout<<endl;}
	
	cout<<endl;  
	cout<<endl;
    cout<<"                          \"Thank You For Coming\""<<endl;}
    
    
void TicTacToe ::  play(){
	
	int player,size,i,m=0,e;
	int turn;
	char occupied,newgame;

do{
	char gamex[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
	for(i=1;i<=9;i++)
{
	(i%2 != 0)? player = 1 : player = 2;
	board(player, gamex);
	if (player == 1)
	{cin >> turn;
	
		while (!std::cin.good()){
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cout << "INVALID Slot! Try Again!" << endl;
		cin >> turn;}
		if(gamex[turn-1] == 'O' || gamex[turn-1] == 'X'){
		   cout << "OCCUPIED Slot! Enter Y/y to Try Again!" <<endl;
		   cin >> occupied;
	 	   i--;}
	    else if(turn<1 || turn >9){
		   cout << "INVALID Entry! Enter Y/y to Try Again!" <<endl;
		   cin >> occupied;
		   i--;}
		else{
	       size = turn;
		   entry(gamex, size, i);
		//to check if game is won
		m = check(gamex);
		    if (m != 0)
		    {board(player, gamex);
		    
		    result(player);
		    break;}}
	}
		
	else if (player == 2)
	{cin >> turn;	
		
		while (!std::cin.good()){
		std:: cin.clear();
		std :: cin.ignore(INT_MAX, '\n');
		cout << "INVALID Slot! Try Again!" << endl;
		cin >> turn;}
	    if(gamex[turn-1] == 'O' || gamex[turn-1] == 'X'){
		cout << "OCCUPIED Slot! Enter Y/y To Try Again!" <<endl;
		cin >> occupied;
		i--;}
	    else if(turn<1 || turn >9){
		cout << "INVALID Entry! Enter Y/y To Try Again!" <<endl;
		cin >> occupied;
		i--;}
		else{
		size = turn;
		entry(gamex, size, i);
		//to check if game is won
		 m = check(gamex);
		    if (m != 0){
		    result(player);
		    break;}}
    }
    }
    if (i == 10){
    
    player = 0;
    result(player);}
   
    cout << "\nEnter R/r for Another Game!!!";
    cin >> newgame;
}
while (newgame == 'r' || newgame == 'R');
}
int TicTacToe :: entry(char A[], int size, int i)
{
if(A[size-1] == 'O' || A[size-1] == 'X')
    {return 0;}
else{
    if (i % 2 != 0)
	{A[size-1] = 'O';}       
    else if(i % 2 == 0)
    {A[size-1] = 'X';}}
}
void TicTacToe :: board(int player, char mark[])
{ 
	
	cout << "           Player 1's Mark: O"<<endl; 
	cout<<"           Player 2's Mark: X" <<endl;
	cout << endl;
	cout << endl;
	cout << "                                        "<< endl;
	cout << "        "<< "      |           |             " <<endl;
	cout << "        " << mark[0] << "     |     " << mark[1] << "     |     " << mark[2] <<"       "<<endl;
	cout << "        "<< "      |           |             " <<endl;
	cout << "    " << "----------|-----------|----------   " <<endl;
		cout << "        "<< "      |           |             " <<endl;
	cout << "        " << mark[3] << "     |     " << mark[4] << "     |     " << mark[5] <<"       "<<endl;
	cout << "        " << "      |           |             " <<endl;
	cout << "    " << "----------|-----------|----------   " <<endl;
		cout << "        "<< "      |           |             " <<endl;
	cout << "        " << mark[6] << "     |     " << mark[7] << "     |     " << mark[8] <<"       "<<endl;
	cout << "        "<< "      |           |             " <<endl;
	cout << "                                        "<< endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "           \"Player " << player << "'s Turn\""<<endl;
	cout<<"   Enter Slot No Where You Want To Mark: "<< endl;}




int TicTacToe :: check(char mark[])                //check possible win combos
{
 if (mark[0]==mark[1] && mark[1]==mark[2]){  //combo: 1 2 3 
return 1;}

else if (mark[0]==mark[3] && mark[3]==mark[6]){  //combo: 1 4 7 
return 1;}

else if (mark[0]==mark[4] && mark[4]==mark[8]){  //combo: 1 5 9 
return 1;}

else if (mark[1]==mark[4] && mark[4]==mark[7]){  //combo: 2 5 8 
return 1;}

else if (mark[2]==mark[5] && mark[5]==mark[8]){  //combo: 3 6 9 
return 1; }

else if (mark[2]==mark[4] && mark[4]==mark[6]){  //combo: 2 4 6 
return 1;}

else if (mark[3]==mark[4] && mark[4]==mark[5]){  //combo: 4 5 6
return 1;}

else if (mark[6]==mark[7] && mark[7]==mark[8]){  //combo: 7 8 9 
return 1;}
else 
  return 0;}
  
int TicTacToe :: result(int player)
{if (player == 1 || player == 2){
	cout << "\t--------------------------------------------"<< "\n\t|                                          |"<< endl;
	cout << "\t|                                          |"<< "\n\t|                                          |"<< endl;
	cout << "\t|                                          |"<< "\n\t|            *CONGRATULATIONS*             |" << endl;
	cout << "\t|            * Player " << player << " Wins*              |" << endl; 
	cout << "\t|                                          |"<< "\n\t|                                          |"<< endl;
	cout << "\t|                                          |"<< "\n\t|                                          |"<< endl;
	cout << "\t|                                          |"<< "\n\t--------------------------------------------"<< endl;}
else{
	cout << "\t--------------------------------------------"<< "\n\t|                                          |"<< endl;
	cout << "\t|                                          |"<< "\n\t|                                          |"<< endl;
	cout << "\t|                                          |"<< "\n\t|                *Game Draw*               |" << endl;
	cout << "\t|                *Try Again*               |" << endl;
	cout << "\t|                                          |"<< "\n\t|                                          |"<< endl;
	cout << "\t|                                          |"<< "\n\t|                                          |"<< endl;
	cout << "\t|                                          |"<< "\n\t--------------------------------------------"<< endl;
	}
}

