#include <iostream>
#include <time.h> // This header file contains definitions of functions to get 
					//and munipulate date and time information.
#include <windows.h> //specific header file which contains declaratrions 
					//for of the functions in Windows API
#include <cstring>

#include <stdlib.h>//This header defines several general purpose functions, including dynamic memory management
				//random number generation, communication with the envirinment, integer arithmetics, searching, sorting and coveting. 
#include <conio.h>//A headerfile used mosthly by MS-DOS compiler to provide console input and output
					//declares several useful library fuctions for performing "Console input and output"

#include <string> // It allows me to enter strings using cin directly.
#include <cstdlib>
#include <fstream>
#include <stdio.h>

using namespace std;

int Welcome(); //Animation with the name of the Game and mine;
int Menu(); // Access to options screen
int Intro(); // Games's introduction
int WriteFile(); //Function will allow me to save the Game
int ReadFile(); // Functin will allow me to load the Game
int End();


// Structure of the Game 
int Level1(); //First Level and · topics

int level1Topic1();
int level1Topic2();
int level1Topic3();

int Level2();//Second Level and · topics

int level2Topic1();
int level2Topic2();
int level2Topic3();




int Level3();//Third Level and · topics

int level3Topic1();
int level3Topic2();
int level3Topic3();

int Level4();//Fouth Level and · topics
int level4Topic1();
int level4Topic2();
int level4Topic3();

int GameOver(); //Conclusion de Game



void color(int x) //Function to manage colors
{
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, x);
}


void gotoxy(short x,short y) //Function to manage coordinates
{
    COORD pos = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}



int main()
{

	 Welcome();
	 Menu();
	 Intro();
	 End();
	 WriteFile();
	 ReadFile();	

}

Welcome(){


			gotoxy(20,3);
		    color(15);
		    cout<<" \t Welcome to My Game ! ";
			    
	    //Logic that created the animation color position and velocity of the animation. 
	    for(int i=0;i<=9;i++)
	    {
	        color(14);
	        gotoxy(25,14-i);
	        cout<<"*";
	        Sleep(70);
	    }
	    for(int i=0;i<=19;i++)
	    {
	        color(14);
	        gotoxy(25+i,5);
	        cout<<"-";
	        Sleep(70);
	    }
	    for(int i=0;i<=9;i++)
	    {
	        color(14);
	        gotoxy(44,5+i);
	        cout<<"*";
	        Sleep(70);
	    }
	    for(int i=0;i<=19;i++)
	    {
	        color(14);
	        gotoxy(44-i,14);
	        cout<<"-";
	        Sleep(70);
	    }
	    
	    //These sentences are into de square created.
	    gotoxy(31,6);
	    color(10);
	    cout<<" Quiz ";
	    Sleep(80);
	    gotoxy(31,8);
	    cout<<" Around ";
	    Sleep(80);
	    gotoxy(30,10);
	    cout<<"the Wold ";
	    Sleep(80);
	    gotoxy(27,12);
	    cout<<"By Antonio Calvo";
	    //Logic ends
	    
	    gotoxy(20,20);
	    color(15);
	    cout<<"Press enter to exit...";
	    cin.get();
	  

}

Menu(){

	int one = 1;
	int two = 2;
	int tree = 3;
	int number;
	
	system("cls");
	system ("color f9");
	
	   for(int i=0;i<=35;i++)
	    {
	        system("color f9");
	        gotoxy(25+i,5);
	        cout<<"-";
	        Sleep(70);
	    }
	
		for(int i=0;i<=35;i++)
	    {
	        system("color f9");
	        gotoxy(59-i,18);
	        cout<<"-";
	        Sleep(70);
	    }
		    //These sentences are into de square created.
	    gotoxy(31,8);
	    system("color f9");
	    cout<<" Please choose one option.. ";
	    Sleep(80);
	    gotoxy(31,10);
	    cout<<" [1] New Game ";
	    Sleep(80);
	    gotoxy(31,12);
	    cout<<" [2] Load Game ";
	    Sleep(80);
	    gotoxy(31,14);
	    cout<<" [3] End the Game ";
	    Sleep(80);
	    gotoxy(32,16);
		cin>>number;
//	cout<< "\n\t\t Please choose one option..." << endl;
//	cout<< "\n\t\t 1 New Game " << endl;
//	cout<< "\n\t\t 2 Load Game " << endl;
	//cout<< "\n\t\t";
	//cin>>number;

	if (number == 1)
	{
	 	
	 	return  Intro();
		
	}
	
	if (number == 2){
	
	system("cls");
		return GameOver();
	}

	if (number == 3)
	{
	
		return End();
	
	}

}	


Intro (){

		//Presentation of the Game explaining rules and what the Game is about.

		
		system("cls");
		cout<< " \n Welcome to Quiz Around The World " <<endl;
		cout<< " \n This Game will test your knowledge " <<endl;
		cout<< " \n Four Continents and 3 topics each Continets " <<endl;
		cout<< "\n Europa, Africa, Asia and America will challenge you"<<endl
			<< "\n Are you ready to begin? "<<endl
			<< "\n Press a key and let begin Your Trip"<<endl;
		cout<< "\n";
		system("pause");
		system("cls");
			

char box_h = 205, box_v = 186;
 char box_t = 201, box_r = 187, box_bl = 200, box_br = 188;
 char bar = 219;
 
 //Creates the outer box
 for(int i =13; i<=63; i++){
  gotoxy(i, 5);
  cout<<box_h;
  gotoxy(i,7);
  cout<<box_h;
 }
 gotoxy(13,5);
 cout<<box_t;
 gotoxy(63,5);
 cout<<box_r;
 gotoxy(13,7);
 cout<<box_bl;
 gotoxy(63,7);
 cout<<box_br;
 gotoxy(13,6);
 cout<<box_v;
 gotoxy(63,6);
 cout<<box_v;
 gotoxy(13,4);
 cout<<"Loading...";
 
 //Logic to load the bar
 int counter = 0;
 for(int i=14; i<=62; i++)
 {
  gotoxy(i,6);
  cout<<bar;
  gotoxy(23,4);
  cout<<counter<<"%";
  counter+=2;
  Sleep(150);
 }
 
 color(5);
 gotoxy(13,4);
 cout<<"Loading...100%";
 color(15);
 gotoxy(13,4);
 cout<<"Loading Complete";
 gotoxy(13,8);
 system ("cls");
 return level1Topic1();
 



}


WriteFile(){

	ofstream file_ptr;		//declare file pointer
	char filename [100];
	
	cout << "\n Enter the filename to be stored:";
	cin>> filename;
	
	file_ptr.open(filename,ios::out);	//open file for outputg
	
	
	char name[30];
	int count;
	
	
if(!file_ptr)	//check file open ok
	  cout<<"Error opening file info.dat";
	else
	{
		for(count=1;count<=2;count++) //adds 5 names
		{
			cout<<"\n Please enter a name: ";
			gets(name);
			file_ptr<<count<<" "<<name<<"\n";
		}
	}
	file_ptr.close();	//close file
	cout<<" \n Your Game is saved now \n "<<endl;
	system("pause");
	return level2Topic1();



}


ReadFile(){

ifstream file_ptr;	   //declare file pointer
	char filename [100];
	
	cout << "\nEnter the filename to be read:";
	cin>> filename;
	
	file_ptr.open(filename,ios::in);   //open file for input	
	
	
	char in_char;	 //temp variable for file data
	
	
	

	
if(!file_ptr)	 //check file opened ok
	   cout<<"Error...File does not exist";
	else
	{
		while(!file_ptr.eof())   //while not end of file
		{
		      file_ptr.get(in_char);  //get character from file
		      cout<<in_char;    //print latest character from file
			                     //on screen
		}
		cin.get();
	}
	file_ptr.close();	//close file
	

cout<<" Press any key to load the Game";
cin.get();
return level2Topic1();





}


int End()
{

	
	system ("cls");
	system("color 4f");
	

	
	char option;

	cout << " \n\t\t\t Do you want to quick the Game y/n?" ;
	cin>>option;
	
	
			
			if (option == 'y'){
			
			
	
			   for(int i=0;i<=35;i++)
			    {
			        color(14);
			        gotoxy(25+i,5);
			        cout<<"-";
			        Sleep(70);
			    }
			
				for(int i=0;i<=35;i++)
			    {
			        color(14);
			        gotoxy(59-i,18);
			        cout<<"-";
			        Sleep(70);
			    }
		
				gotoxy(31,7);
				color(10);
			    cout<<"\t  SEE YOU  ";
			    Sleep(80);		    
				gotoxy(31,9);
			    cout<<"\t  LATER ";
			    Sleep(80);
			    gotoxy(30,11);
			    cout<<"\t   ALLIGATOR  ";
			    cout<<" \n";
			    system("pause");
			 
			exit (-1);

			}
		
	
			else {
			
			return Menu();
			
			}
		
		


}

int Level1()
{
	

	
	
}


int level1Topic1()
{

system ("color 3e");
/*int a, j, z, x, v , n, l, k, p, t;
char str[] = { " \n\t\t First Level will test your knowledge of Europe \n" }; 
char str1[] = {" \n\t\t Eight countries will be displayed on the screen \n"}; 
char str2[] = {" \n\t All the questions are related to these countries as well as the answers\n"}; 
char str3[] = {" \n\t\t First is topic Food, Second Capitals and Third Geography\n"}; 
char str4[] = {" \n\t\t You will answer at list one question of each topic\n"}; 
char str5[] = {" \n\t\t If you answer is correct you can pass to the next topic\n"}; 
char str6[] = {" \n\t As soon as you pass the three topics you can go to next continent\n"}; 
char str7[] = {" \n\t If you fail these three attempts you will be able to begin\n"}; 
                                      //char str7[] = {" \n\t\ If you fail these three attempts you will be able to begin\n"}; 
char str8[] = {" \n\t\t From the topic you were with another three attempts\n"}; 
char str9[] = {" \n\t\t\t Are you read ? \n"}; 



 int len = strlen(str);  
 int len1 = strlen(str1); 
 int len2 = strlen(str2);
 int len3 = strlen(str3);
 int len4 = strlen(str4);
 int len5 = strlen(str5);
 int len6 = strlen(str6);
 int len7 = strlen(str7);
 int len8 = strlen(str8);
 int len9 = strlen(str9);
 
 for(a=0;a<len;a++)
  {  

   putchar(str[a]);     

   Sleep(100);  //  
  }
  
   for(j=0;j<len1;j++)
  {  

   putchar(str1[j]);     

   Sleep(100);  //  
  }
			
   for(z=0;z<len2;z++)
  {  

   putchar(str2[z]);     

   Sleep(100);  //  
  }
				
   for(x=0; x<len3;x++)
  {  

   putchar(str3[x]);     

   Sleep(100);  //  
  }
	
			
			
   for(v=0; v<len4; v++)
  {  

   putchar(str4[v]);     

   Sleep(100);  //  
  }
				
			//Game´s rules for the first Level and topic 
	
    for(n=0; n<len5; n++)
  {  

   putchar(str5[n]);     

   Sleep(100);  //  
  }


   for(l=0;l<len6;l++)
  {  

   putchar(str6[l]);     

   Sleep(100);  //  
  }
		      
       
   for(k=0;k<len7;k++)
  {  

   putchar(str7[k]);     

   Sleep(100);  //  
  }
		
	
   for(p=0;p<len8;p++)
  {  

   putchar(str8[p]);     

   Sleep(100);  //  
  }
	
	
   for(t=0;t<len9;t++)
  {  

   putchar(str9[t]);     

   Sleep(100);  //  
  }
		
*/

	cout<<"  \n ";
	system("pause");
 	system("cls");
 
		cout<< " \n  First topic is European Cousine "<<endl;
		cout<< " \n";
		
		// Array with the countries.
		
		string countries[8] = {"\t Russia", "\t Netherlands", "\t Spain", "\t Germany", "\t France", "\t Italy", "\t Slovakia", "\t UK"};
		
		//This loop allows me to display the countries on the screen.
		int i;
		for (i = 0; i<8; i++)      
		{
		cout<<"\n" <<countries[i] << endl;
		}
		cin.get();

		
		//Four variable will be used to identify the answers
		int one = 1;
	    int two = 2;
	    int three = 3;
	    int four = 4;
	    int chance;
		
		int answer;//variable para introducir el numero de las respuestas
	    char answerL; //Loop answer.
	 
	
	  //Code to create a random to the questions.
	 srand((unsigned)time(0));
	    
	 int e;

	    // Do loop to begin the topic as many time as you want if you fail the question
		do{ 
			chance =0; 
					//This while let me mark how many attemps the gamer has. 
				while(chance<=2){ 
					
					e = (rand()%6)+1;	//It allows me to random the questions every time
										//when the gamer fail the question
					// Switch created to display the questions one by one  					 
					switch(e)  
				    {
				    	case 1:
			
							cout << " What is a typical dessert in Italy? \n" <<endl;
							cout << " 1- Tiramisu   2- Zemlovka   3- Pannenkekon  4 - Confit de canard " <<endl;
							cout << " \n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
									
									if(answer == 1) // It if allows me to pass to the next Topic or level when the question is correct.
									{
										cout<< "\n Congratulation 1-Tiramisiu (sponge finger soaked in coffee with a creamy mascarpone.)";
										cout<<"\n";
										system("pause");
									     return level1Topic2();
									}
									else //It allows me to run the switch again when the question is failed. 
									{
									 cout<< " \n Your answer is incorrect sorry try again "<<endl;
									 cout<<"\n";
									system("pause");
									system("cls");
									 
									}
							break;
						
						case 2:
				    		cout << " \n What is a Sunday Roast? " << endl;
				    		cout << "\n "<<endl;
				    		cout << " 1 - Bread sliced and topped with different toppings " << endl;
							cout << " 2 - Pea soup other vegetables plus potatoes and pork. " <<endl; 
							cout << " 3 - Rice based" <<endl; 
							cout << " 4 - Meet (Lamb, pork or chicken) dish with a selection of vegetable roast potatoes, carrots, onion. " <<endl; 
							cout << "\n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
								
								if(answer == 4) 
								{
								 
									cout<< "\n Congratulation 4- Meet (Lamb, pork or chicken) dish with a selection of vegetable roast potatoes, carrots, onion."<<endl;
									cout<<"\n";
									system("pause");
									return level1Topic2();
								}
														 
								
								else
								{
								 
								 	cout<< "\n Your answer is incorrect sorry try again "<<endl;
								 	cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;
						
						case 3:
				    		cout << " \n What is a typical dish from Russia? \n" << endl
				    		     << " 1- Rote Grutze " << " 2- Beef Bourguignon " << "3- Pelmeni" << " 4 - Pizza " <<endl;   
				    			
				    			cout<<"\n Enter your answer by choosing a number between 1 to 4..."; 
								cin>>answer;
								
								if(answer == 3) 
								{
								 	cout<< "\n Congratulation 3 Pelmeni or Russian dumplings packed meat of lamb, pork or beef. "<<endl ;
									cout<<"\n";
									system("pause");
									return level1Topic2();
								}
														 
								
								else
								{
								 
								 	cout<< "\n Your answer is incorrect sorry try again "<<endl;
								 	cout<<"\n";
									 system("pause");
									 system("cls");
									 
								 
								}
							break;
						
						case 4:
				    		cout << " \n What is a Paella? \n" << endl;
				    		cout << " \n "<< endl;
				    		cout << " 1 - Dumplings packed meat of lamb, pork or beef Pea soup other vegetables plus potatoes and pork. " << endl; 
							cout << " 2 - Soft, white pretzels made and sometime different seeds on " << endl ;
							cout << " 3 - Duck's dish marinated in salt, garlic and thyme" << endl ;
							cout << " 4 - Rice based " <<endl; 
				    	
							cout<<"\n Enter your answer by choosing a number between 1 to 4..."; 
								cin>>answer;
				    			
								if(answer == 4) 
								{
									cout<< "\n Congratulation 4- Rice based."<<endl;
									cout<<"\n";
									system("pause");
									return level1Topic2();
								}
								else
								{
								 
								 	cout<< "\n Your answer is incorrect sorry try again "<<endl;
								 	cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;
						
					case 5:
				    		cout << " \n Where does Wurst come from? \n" << endl;
				    		cout << " \n 1- Germany " << " 2- Russia   " << "3- Netherlands" << " 4 - Russia   " <<endl;
			    			cout << " \n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
				    			
								if(answer == 1) 
								{
															
									cout<< " \n Congratulation 1 Germany Bratwurst Fried sausage made of ground pork and spices."<<endl;;
									cout<<"\n";
									system("pause");
									return level1Topic2();
								}
								else
								{
								 
									 cout<< "\n Your answer is incorrect sorry try again "<<endl;
									 cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;	
						
					case 6:
				    		cout << " \n Is Halusky a typical dish from? \n " << endl;
				    		cout << " \n 1- Germany " << " 2- Slovakia " << "3- Netherlands " << " 4 - Spain  " <<endl;
							cout << " \n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
								
								if(answer == 2) 
								{
									cout<< " \n Congratulation 2- Slovakia sheep cheese gnocchi with small pieces of bacon."<<endl;	
									cout<<"\n";
									system("pause");
									return level1Topic2();
								}
								else
								{
								 
									 cout<< "\n Your answer is incorrect sorry try again "<<endl;
									 cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;	
	
											
				
					}
				chance++;		

			}	
			
		
			cout<<"\n You have finished all your lives "<<endl;
		  	cout<<" \n Do you want to play again? (y/n) :";		
			cin>>answerL;
			
			// this if let the Gamer to quick the Game pressing "n" when the attemps are finished
			if(answerL=='n')
			{
				cout<<"\n thanks for playing See You Soon";
				cin.get();
				return End();
	    	}
	
					
		}while(answerL=='y'||answerL=='Y');	
	

	

}

int level1Topic2()
{

system("cls");
	cout<<" \n \t\t Congratulation!" <<endl;
	cout<<" \n";
	cout<<" \n Welcome to the Second Topic"<<endl;
	cout<<" \n It will be capitals in Europe"<<endl;
	cout<<" \n Good Luck and press a key when you will be ready "<<endl;
	cout<<"\n";
	system("pause");
	system("cls");
	
		string countries[8] = {"\t Russia", "\t Netherlands", "\t Spain", "\t Germany", "\t France", "\t Italy", "\t Slovakia", "\t UK"};
		
		//This loop allows me to display the countries on the screen.
		int i;
		for (i = 0; i<8; i++)      
		{
		cout<<"\n " <<countries[i] << endl;
		}
		cin.get();
	
			
			//Four variable will be used to identify the answers
		int one = 1;
	    int two = 2;
	    int three = 3;
	    int four = 4;
	    int chance;
		
		int answer;//it allows me to enter the answers to the questions
	    char answerL; //Loop answer.
	 
	
	  //Code to create a random to the questions.
	 srand((unsigned)time(0));
	    
	 int e;
	  
	
	    
	//Create a loop to repeat the accion.   
	    
	    
	    
		do{
			chance =0;
				
				while(chance<=2){
					e = (rand()%6)+1;
					switch(e)
				    {
				    	case 1:
			
							cout << " What is the capital of Slovakia? \n" <<endl;
							cout << " \n 1-Bratislava	2-Rome	3- Paris 	4- Madrid"   <<endl;
							cout << " \n Enter your answer by choosing a number between 1 to 4..."; 
									cin>>answer;
									
									if(answer == 1) 
									{
										 cout<< "\n Congratulation 1 Bratislava";
									    cout<<"\n";
										system("pause");
										 return level1Topic3();
									}
									else
									{
									cout<< " \n Your answer is incorrect sorry try again ";
									cout<<"\n";
									system("pause");
									system("cls");
								
									 
									}
							break;
						
						case 2:
				    		cout << " \n Rome is the capital of? "<< endl;
				    		cout << " \n  1-Spain 	2-Russia 	3- Netherlands 	4- Italy   " << endl;
							cout<<"\n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
								
								if(answer == 4) 
								{
								 
									cout<< "\n Congratulation 2 Roma"<<endl;
									cout<<"\n";
									system("pause");
									return level1Topic3();
								}
														 
								
								else
								{
								 
								 	cout<< "\n Your answer is incorrect sorry try again "<<endl;
								 	cout<<"\n";
									system("pause");
									 system("cls");
								 
								}
							break;
						
						case 3:
				    		cout << " \n Is Madrid the capital of? \n" << endl;
				    		cout << " \n 1- Russia	2-Slovakia	3- Netherlands 	4- Spain  " <<endl;   
				   			cout << " \n Enter your answer by choosing a number between 1 to 4..."; 
								cin>>answer;
								
								if(answer == 4) 
								{
								 	cout<< "\n Congratulation 4 Spain "<<endl ;
									cout<<"\n";
									system("pause");
									return level1Topic3();
								}
														 
								
								else
								{
								 
								 	cout<< "\n Your answer is incorrect sorry try again "<<endl;
								 	cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;
						
						case 4:
				    		cout << " \n Is Moscow the capital of? \n" << endl;
				    		cout << "\n  1-Germany	2-Slovakia	3- Russia 	4- Spain   " << endl; 
				    		cout<<"\n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
				    			
								if(answer == 3) 
								{
									cout<< "\n Congratulation 3 Russia."<<endl;
									cout<<"\n";
									system("pause");
									return level1Topic3();
								}
								else
								{
								 
								 	cout<< "\n Your answer is incorrect sorry try again "<<endl;
								 	cout<<"\n";
									system("pause");
									system("cls");
								 
								}
							break;
						
					case 5:
				    		cout << " \n What is the capital of France? \n" << endl;
				    		cout << " \n 1-Bratislava	2- Paris	3- Moscow 	4- Rome   " <<endl;
				    		cout<<" \n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
				    			
								if(answer == 2) 
								{
															
									cout<< " \n Congratulation 2 Paris."<<endl;;
									cout<<"\n";
									system("pause");
									return level1Topic3();
								}
								else
								{
								 
									 cout<< "\n Your answer is incorrect sorry try again "<<endl;
									 cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;	
						
					case 6:
				    		cout << " \n Berlin is the capital of? \n " << endl
				    		     << " \n 1- Germany " << " 2- Slovakia " << "3- Netherlands " << " 4 - Spain  " <<endl;
								
								cout<<"\n Enter your answer by choosing a number between 1 to 4..."; 
								cin>>answer;
								
								if(answer == 1) 
								{
									 cout<< " \n Congratulation 1 Germany."<<endl;	
									cout<<"\n";
									system("pause");
									return level1Topic3();
								}
								else
								{
								 
									 cout<< "\n Your answer is incorrect sorry try again "<<endl;
									 cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;	
	
											
				
					}
				chance++;		

			}	

			cout<<"\n You have finished all your lives "<<endl;
		  	cout<<" \n Do you want to play again? (y/n) :";		
			cin>>answerL;
			
			if(answerL== 'n' )
			{
				cout<<"\n thanks for playing See You Soon";
				cin.get();
				return End();
	    	}
	
					
		}while(answerL=='y'||answerL=='Y');	


}

int level1Topic3()
{

system("cls");
	cout<<" \n \t\t Congratulation!" <<endl;
	cout<<" \n";
	cout<<" \n Welcome to the Third Topic"<<endl;
	cout<<" \n It will be Geography in Europe"<<endl;
	cout<<" \n Good Luck and press a key when you will be ready "<<endl;
	cout<<"\n";
	system("pause");
	system("cls");
	
		string countries[8] = {"\t Russia", "\t Netherlands", "\t Spain", "\t Germany", "\t France", "\t Italy", "\t Slovakia", "\t UK"};
		
		//This loop allows me to display the countries on the screen.
		int i;
		for (i = 0; i<8; i++)      
		{
		cout<<"\n" <<countries[i] << endl;
		cout<<" \n "<< endl;
		}
		cin.get();
	
			
			//Four variable will be used to identify the answers
		int one = 1;
	    int two = 2;
	    int three = 3;
	    int four = 4;
	    int chance;
		
		int answer;//it allows me to enter the answers to the questions
	    char answerL; //Loop answer.
	 
	
	  //Code to create a random to the questions.
	 srand((unsigned)time(0));
	    
	 int e;
	  
	
	    
	//Create a loop to repeat the accion.   
	    
	    
	    
		do{
			chance =0;
				
				while(chance<=2){
					e = (rand()%6)+1;
					switch(e)
				    {
				    	case 1:
			
							cout << " What is the biggest river in Europe? \n" <<endl;
							cout << "\n 1-Ebro 2- Danube 3- Volga 4- Rin"    <<endl;
							cout<<"\n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
									
									if(answer == 3) 
									{
										 cout<< "\n Congratulation 3 The Volga River is the longest river in Europe 2,290 miles. ";
									    cout<<"\n";
										system("pause");
										
										char save;
										cout<<"\n Do you want to save you Game y/n ?"<<endl;
										cin>>save;
										
											 if (save == 'y'){
											 
												return WriteFile();
											 
											 }
											 else
											 {
												return level2Topic1();
											 
											}
										 return true;
									}
									else
									{
									 cout<< " \n Your answer is incorrect sorry try again ";
									cout<<"\n";
									 system("pause");
									system("cls");
									 
									}
							break;
						
						case 2:
				    		cout << " \n What is the smallest city in Europe? "<< endl;
				    		cout << " \n  1-Vatican City	2- San Marino  	3- Valletta  	4- Monaco    " << endl;
							cout<<"\n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
								
								if(answer == 1) 
								{
								 
									cout<< "\n Congratulation 1 Vatican City is the smallest city with 110 acres and with 800 people"<<endl;
									cout<<"\n";
									system("pause");
									
										char save;
										cout<<"\n Do you want to save you Game y/n ?"<<endl;
										cin>>save;
										
											 if (save == 'y'){
											 
												return WriteFile();
											 
											 }
											 else
											 {
												
												return level2Topic1();
											}
									
									return true;
								}
														 
								
								else
								{
								 
								 	cout<< "\n Your answer is incorrect sorry try again "<<endl;
								 	cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;
						
						case 3:
				    		cout << " \n Mont Elbrus is the biggest mount in Europe Where is it located in? \n" << endl;
				    		cout << " \n 1-Geramany	2- Italy 	3- France 	4- Russian    " <<endl;   
			    			cout<<"\n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
								
								if(answer == 4) 
								{
								 	cout<< "\n Congratulation 4 Russian Mount Elbrus is the highest mountain (5,642 metres) "<<endl ;
									cout<<"\n";
									system("pause");
									
									char save;
										cout<<"\n Do you want to save you Game y/n ?"<<endl;
										cin>>save;
										
											 if (save == 'y'){
											 
												return WriteFile();
											 
											 }
											 else
											 {
												
												return level2Topic1();
											}
									
									
									return true;
								}
														 
								
								else
								{
								 
								 	cout<< "\n Your answer is incorrect sorry try again "<<endl;
								 	cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;
						
						case 4:
				    		cout << " \n Which of these cities haven't canals into the city? \n" << endl;
				    		cout << "\n  1-Brujas	2- Barcelona 	3- Utrecht 	4- Venice  " << endl; 
			    			cout<<"\n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
				    			
								if(answer == 2) 
								{
									cout<< "\n Congratulation 2 Barcelona."<<endl;
									cout<<"\n";
									system("pause");
									
										char save;
										cout<<"\n Do you want to save you Game y/n ?"<<endl;
										cin>>save;
										
											 if (save == 'y'){
											 
												return WriteFile();
											 
											 }
											 else
											 {
											
												return level2Topic1();
											}
									
									return true;
								}
								else
								{
								 
								 	cout<< "\n Your answer is incorrect sorry try again "<<endl;
								 	cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;
						
					case 5:
				    		cout << " \n What is the largest range of mountains in Europe? \n" << endl;
				    		cout << " \n 1-Capatos 	2- Alps 	3- Ural 	4- Pyrenees    " << endl;
			    			cout<<" \n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
				    			
								if(answer == 3) 
								{
															
									cout<< " \n Congratulation 3 Ural Mountains with a length of 2,500 Km"<<endl;
								    cout<< " \n and is the border between Russian and Asia.."<<endl;
									cout<<"\n";
									system("pause");
									
										char save;
										cout<<"\n Do you want to save you Game y/n ?"<<endl;
										cin>>save;
										
											 if (save == 'y'){
											 
												return WriteFile();
											 
											 }
											 else
											 {
												return level2Topic1();
											
											}
									
									return true;
								}
								else
								{
								 
									 cout<< "\n Your answer is incorrect sorry try again "<<endl;
									cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;	
						
					case 6:
				    		cout << " \n Where is located the Alhambra Palace? \n " << endl;
				    		cout << " \n 1-Spain 	2- France 	3- Germany 	4- England " <<endl;
							cout << " \n Enter your answer by choosing a number between 1 to 4..." <<endl; 
							cin>>answer;
							
								if(answer == 1) 
								{
									cout<< " \n Congratulation 1 Spain (Granada)"<<endl;	
									cout<<"\n";
									system("pause");
									
										char save;
										cout<<"\n Do you want to save you Game y/n ?"<<endl;
										cin>>save;
										
											 if (save == 'y'){
											 
												return WriteFile();
											 
											 }
											 else
											 {
											
												return level2Topic1();
											}
									
									return true;
								}
								else
								{
								 
									 cout<< "\n Your answer is incorrect sorry try again "<<endl;
									 cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;	
	
											
				
					}
				chance++;		

			}	

			cout<<"\n You have finished all your lives "<<endl;
		  	cout<<" \n Do you want to play again? (y/n) :";		
			cin>>answerL;
			
			if(answerL=='n')
			{
				cout<<"\n thanks for playing See You Soon";
				cin.get();
				return End();
	    	}
	
					
		}while(answerL=='y'||answerL=='Y');	
	


}

	
 int Level2()
{
	

}

int level2Topic1()
{

system("cls");
 char box_h = 205, box_v = 186;
 char box_t = 201, box_r = 187, box_bl = 200, box_br = 188;
 char bar = 219;
 
 //Creates the outer box
 for(int i =13; i<=63; i++){
  gotoxy(i, 5);
  cout<<box_h;
  gotoxy(i,7); 
  cout<<box_h;
 }
 gotoxy(13,5);
 cout<<box_t;
 gotoxy(63,5);
 cout<<box_r;
 gotoxy(13,7);
 cout<<box_bl;
 gotoxy(63,7);
 cout<<box_br;
 gotoxy(13,6);
 cout<<box_v;
 gotoxy(63,6);
 cout<<box_v;
 gotoxy(13,4);
 cout<<"Loading...";
 
 //Logic to load the bar
 int counter = 0;
 for(int i=14; i<=62; i++)
 {
  gotoxy(i,6);
  cout<<bar;
  gotoxy(23,4);
  cout<<counter<<"%";
  counter+=2;
  Sleep(150);
 }
 
 color(5);
 gotoxy(13,4);
 cout<<"Loading...100%";
 color(15);
 gotoxy(13,4);
 cout<<"Loading Complete";
 gotoxy(13,8);
 system ("cls");
  
 
 system("cls");
system ("color 0c");
int a, j, z, x, v , n, l, k, p, t;
char str[] = { " \n\t Congratulation and  Well Done ! \n" }; 
char str1[] = {" \n\t Welcome to the Second Level Africa \n"}; 
char str2[] = {" \n\t Remember you are going to face..... \n"}; 
char str3[] = {" \n\t Eight countries will be displayed on the screen\n"}; 
char str4[] = {" \n\t All the questions are related to these countries as well as the answers\n"}; 
char str5[] = {" \n\t First topic is  Capitals, Second Animals and Third Geographyc\n"}; 
char str6[] = {" \n\t As soon as you pass the three topics you can go to next continent\n"}; 
char str7[] = {" \n\t If you fail these three attempts you will be able to begin\n"}; 
char str8[] = {" \n\t From the topic you were with another three attemps\n "} ;
char str9[] = {" \n\t\t\t Are you read ? \n"}; 


 int len = strlen(str);  
 int len1 = strlen(str1); 
 int len2 = strlen(str2);
 int len3 = strlen(str3);
 int len4 = strlen(str4);
 int len5 = strlen(str5);
 int len6 = strlen(str6);
 int len7 = strlen(str7);
 int len8 = strlen(str8);
 int len9 = strlen(str9);
 
 for(a=0;a<len;a++)
  {  

   putchar(str[a]);     

   Sleep(50);  //  
  }
  
   for(j=0;j<len1;j++)
  {  

   putchar(str1[j]);     

   Sleep(50);  //  
  }
			
   for(z=0;z<len2;z++)
  {  

   putchar(str2[z]);     

   Sleep(50);  //  
  }
				
   for(x=0; x<len3;x++)
  {  

   putchar(str3[x]);     

   Sleep(50);  //  
  }
	
			
			
   for(v=0; v<len4; v++)
  {  

   putchar(str4[v]);     

   Sleep(50);  //  
  }
				
			
	
    for(n=0; n<len5; n++)
  {  

   putchar(str5[n]);     

   Sleep(50);  //  
  }


   for(l=0;l<len6;l++)
  {  

   putchar(str6[l]);     

   Sleep(50);  //  
  }
		      
       
   for(k=0;k<len7;k++)
  {  

   putchar(str7[k]);     

   Sleep(50);  //  
  }
		
	
   for(p=0;p<len8;p++)
  {  

   putchar(str8[p]);     

   Sleep(50);  //  
  }
	
	
   for(t=0;t<len9;t++)
  {  

   putchar(str9[t]);     

   Sleep(50);  //  
  }

system("pause");
system("cls");
	


	
	cout << "\n Second Level Africa " << endl;
	cout << "\n First Topic Capitals"<<endl;
	
	
	
			string countries[8] = {"\t Madagascar", "\t Morocco ", "\t Egypt ", "\t Zambia ", "\t South Africa ", "\t Congo ", "\t Tanzania ", "\t Kenya"};
		
		//This loop allows me to display the countries on the screen.
		int i;
		for (i = 0; i<8; i++)      
		{
		cout<<"\n" <<countries[i] << endl;
		}
		cin.get();
	
			
			//Four variable will be used to identify the answers
		int one = 1;
	    int two = 2;
	    int three = 3;
	    int four = 4;
	    int chance;
		
		int answer;//it allows me to enter the answers to the questions
	    char answerL; //Loop answer.
	 
	
	  //Code to create a random to the questions.
	 srand((unsigned)time(0));
	    
	 int e;
	  
	
	    
	//Create a loop to repeat the accion.   
	    
	    
	    
		do{
			chance =0;
				
				while(chance<=2){
					e = (rand()%6)+1;
					switch(e)
				    {
				    	case 1:
			
							cout << " \n What is the capital of Kenya? " <<endl;
							cout << " \n 1- Nairobi 2- Ciudad del Cabo 3- Dodoma 4- Cairo " <<endl;
							cout<<"\n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
									
									if(answer == 1) 
									{
										 cout<< "\n Congratulation 1-Nairobi ";
									    cout<<"\n";
										system("pause");
										 return level2Topic2();
									}
									else
									{
									 cout<< " \n Your answer is incorrect sorry try again " <<endl;
									system("cls");
									 
									}
							break;
						
						case 2:
				    		cout << " \n What is the capital of Egypt? "<< endl;
				    		cout << " \n  1- Antananarivo 2- Lusaka 3- Ciudad del Cabo 4- Cairo  " << endl;
							cout<<"\n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
								
								if(answer == 4) 
								{
								 
									cout<< "\n Congratulation 4-Cairo "<<endl;
									cout<<"\n";
									system("pause");
									return level2Topic2();
								}
														 
								
								else
								{
								 
								 	cout<< "\n Your answer is incorrect sorry try again "<<endl;
								 	cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;
						
						case 3:
				    		cout << " \n What is the country with more than one capital?" << endl;
				    		cout << " \n  1-Congo 2- Kenya 3- South Africa 4 Tanzania   " <<endl;   
				    		cout<<"\n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
								
								if(answer == 3) 
								{
								 	cout<< "\n Congratulation 3 South Africa. There are 3 different capitals"<<endl; 
									cout<< "\n Petronia Executive Power, Bloemfontein Judicial Power  "<<endl;
									cout<< "\n  and Ciudad del Cabo Legislative Power.";
									cout<<"\n";
									system("pause");
									return level2Topic2();
								}
														 
								
								else
								{
								 
								 	cout<< "\n Your answer is incorrect sorry try again "<<endl;
								 	cout<<"\n";
									system("pause");
									system("cls");
								 
								}
							break;
						
						case 4:
				    		cout << " \n Is Casablanca the capital of Morocco? " << endl;
				    		cout << " \n  1- Yes 2- No " << endl; 
				    		cout<<"\n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
				    			
				    			
								if(answer == 2) 
								{
									cout<< "\n Congratulation 2 No. It is Rabat"<<endl;
									cout<<"\n";
									system("pause");
									return level2Topic2();
								}
								else
								{
								 
								 	cout<< "\n Your answer is incorrect sorry try again "<<endl;
								 	cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;
						
					case 5:
				    		cout << " \n Is Brazzaville capital of? " << endl;
				    		cout << " \n  1- Congo 2- Madagascar 3- Tanzania 4 Egipto     " <<endl;
			    			cout << " \n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
				    			
								if(answer == 1) 
								{
															
									cout<< " \n Congratulation 1 Congo."<<endl;
									cout<<"\n";
									system("pause");
									return level2Topic2();
								}
								else
								{
								 
									 cout<< "\n Your answer is incorrect sorry try again "<<endl;
									 cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;	
						
					case 6:
				    		cout << " \n What of them is a capital of South Africa?  " << endl;
				    		cout << " \n 1- Nairobi 2- Lusaka 3- Pretoria 4- Dodoma ."<<endl; 
				    		cout<<"\n Enter your answer by choosing a number between 1 to 4...";
							cin>>answer;
								
								if(answer == 3) 
								{
									 cout<< " \n Congratulation 3 Pretoria."<<endl;	
									cout<<"\n";
									system("pause");
									return level2Topic2();
								}
								else
								{
								 
									 cout<< "\n Your answer is incorrect sorry try again "<<endl;
									 cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;	
	
											
				
					}
				chance++;		

			}	

			cout<<"\n You have finished all your lives "<<endl;
		  	cout<<" \n Do you want to play again? (y/n) :";		
			cin>>answerL;
			
			if(answerL=='n')
			{
				cout<<"\n thanks for playing See You Soon";
				cin.get();
				return End();
	    	}
	
					
		}while(answerL=='y'||answerL=='Y');	



}

int level2Topic2()
{

		system("cls");
	cout<<" \n \t\t Congratulation!" <<endl;
	cout<<" \n";
	cout<<" \n Welcome to the Second Topic"<<endl;
	cout<<" \n It will be Animals in Africa"<<endl;
	cout<<" \n Good Luck and press a key when you will be ready "<<endl;
	cout<<"\n";
	system("pause");
	system("cls");
	
	
	
			string countries[8] = {"\t Madagascar", "\t Morocco ", "\t Egypt ", "\t Zambia ", "\t South Africa ", "\t Congo ", "\t Tanzania ", "\t Kenya"};
		
		//This loop allows me to display the countries on the screen.
		int i;
		for (i = 0; i<8; i++)      
		{
		cout<<"\n" <<countries[i] << endl;
		}
		cin.get();
	
			
			//Four variable will be used to identify the answers
		int one = 1;
	    int two = 2;
	    int three = 3;
	    int four = 4;
	    int chance;
		
		int answer;// it allows me to enter the answers to the questions
	    char answerL; //Loop answer.
	 
	
	  //Code to create a random to the questions.
	 srand((unsigned)time(0));
	    
	 int e;
	  
	
	    
	//Create a loop to repeat the accion.   
	    
	    
	    
		do{
			chance =0;
				
				while(chance<=2){
					e = (rand()%6)+1;
					switch(e)
				    {
				    	case 1:
			
							cout << "\n Where are Lemurs from? " <<endl;
							cout << "\n  1-Congo 2- Zambia 3- Madagascar 4- Kenya " <<endl;
							cout << "\n Enter your answer by choosing a number between 1 to 4..."; 
  							cin>>answer;
									
									if(answer == 3) 
									{
										 cout<< "\n Congratulation 3 Madagascar. "<<endl;
										 cout<< "\n Lemusrs are clade of primates endemic to the island of Madagascar"<<endl;
									     cout<<"\n";
									 	system("pause");
										 return level2Topic3();
									}
									else
									{
									 cout<< " \n Your answer is incorrect sorry try again ";
									cout<<"\n";
									system("pause");
									system("cls");
									 
									}
							break;
						
						case 2:
				    		cout << " \n Where is located the biggest population of White Rhino? "<< endl;
				    		cout << " \n  1-Zambia 2- Tanzania 3- Madagascar 4- South Africa " << endl;
							cout << " \n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
								
								if(answer == 4) 
								{
								 
									cout<< "\n Congratulation 4 Shout Africa. It is the stronghold country at Kruger National Park  "<<endl;
									cout<<"\n";
									system("pause");
									return level2Topic3();
								}
														 
								
								else
								{
								 
								 	cout<< "\n Your answer is incorrect sorry try again "<<endl;
								 	cout<<"\n";
									system("pause");
									system("cls");
								 
								}
							break;
						
						case 3:
				    		cout << " \n Where are located the biggest population of ostrich?" << endl;
				    		cout << " \n  1-Morroco 2- Kenya 3- Madagascar 4- Congo   " <<endl;   
				    		cout << " \n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
								
								if(answer == 2) 
								{
								 	cout<< "\n Congratulation 2 Kenya They are the largest birds in the world and they cannot fly."<<endl; 
									cout<<"\n";
									system("pause");
									return level2Topic3();
								}
														 
								
								else
								{
								 
								 	cout<< "\n Your answer is incorrect sorry try again "<<endl;
								 	cout<<"\n";
									system("pause");
								    system("cls");
								 
								}
							break;
						
						case 4:
				    		cout << " \n The biggest crocodrile in Africa is located in?" << endl;
				    		cout << " \n 1-Egypt 2- Kenya 3- South Africa 4- Tanzania " << endl; 
				    		cout << " \n Enter your answer by choosing a number between 1 to 4..."<< endl; 
							cin>>answer;
				    			
								if(answer == 1) 
								{
									cout<< "\n Congratulation 1 Egypt Nile crocodrile is the second largest crocodile in the world. "<<endl;
									cout<<"\n";
									system("pause");
									return level2Topic3();
								}
								else
								{
								 
								 	cout<< "\n Your answer is incorrect sorry try again "<<endl;
								 	cout<<"\n";
									system("pause");
									system("cls");
								 
								}
							break;
						
					case 5:
				    		cout << " \n Where is living the biggest Gorilla in the world? " << endl;
				    		cout << " \n  1-Kenya 2- Madagascar 3- Tanzania 4- Congo " <<endl;
				    		cout << " \n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
				    			
								if(answer == 4) 
								{
															
									cout<< " \n Congratulation 4 Congo The Greatest and biggest apes and it can be  found in the forests of Congo. "<<endl;
									cout<<"\n";
									system("pause");
									return level2Topic3();
								}
								else
								{
								 
									 cout<< "\n Your answer is incorrect sorry try again "<<endl;
									 cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;	
						
					case 6:
				    		cout << " \n  Where can be found the Africa Elephant? " << endl;
				    		cout << " \n 1-Egypt 2- Kenya 3- Madagascar 4- Tanzania."<<endl;
							cout<<" \n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
								
								if(answer == 2) 
								{
									cout<< " \n Congratulation 2 Kenya Masia Mara National Park has a big population of Africa's elephant living it. "<<endl;
									cout<< " \n The African bush elephant"<<endl;	
									cout<<"\n";
									system("pause");
									return level2Topic3();
								}
								else
								{
								 
									 cout<< "\n Your answer is incorrect sorry try again "<<endl;
									 cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;	
	
											
				
					}
				chance++;		

			}	

			cout<<"\n You have finished all your lives "<<endl;
		  	cout<<" \n Do you want to play again? (y/n) :";		
			cin>>answerL;
			
			if(answerL=='n')
			{
				cout<<"\n thanks for playing See You Soon";
				cin.get();
				return End();
	    	}
	
					
		}while(answerL=='y'||answerL=='Y');	


}

int level2Topic3()
{

system("cls");
	cout<<" \n \t\t Congratulation!" <<endl;
	cout<<" \n";
	cout<<" \n Welcome to the Third Topic"<<endl;
	cout<<" \n It will be Geography in Africa"<<endl;
	cout<<" \n Good Luck and press a key when you will be ready "<<endl;
	cout<<"\n";
	system("pause");
	system("cls");
	
	
	
			string countries[8] = {"\t Madagascar", "\t Morocco ", "\t Egypt ", "\t Zambia ", "\t South Africa ", "\t Congo ", "\t Tanzania ", "\t Kenya"};
		
		//This loop allows me to display the countries on the screen.
		int i;
		for (i = 0; i<8; i++)      
		{
		cout<<"\n" <<countries[i] << endl;
		}
		cin.get();
	
			
			//Four variable will be used to identify the answers
		int one = 1;
	    int two = 2;
	    int three = 3;
	    int four = 4;
	    int chance;
		
		int answer;//it allows me to enter the answers to the questions
	    char answerL; //Loop answer.
	 
	
	  //Code to create a random to the questions.
	 srand((unsigned)time(0));
	    
	 int e;
	  
	
	    
	//Create a loop to repeat the accion.   
	    
	    
	    
		do{
			chance =0;
				
				while(chance<=2){
					e = (rand()%6)+1;
					switch(e)
				    {
				    	case 1:
			
							cout << "\n What is the biggest river in Africa? " <<endl;
							cout << "\n 1-Kasai River 2- Congo River 3- Nile River 4- River Niger " <<endl;
							cout << "\n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
									
									if(answer == 3) 
									{
										 cout<< "\n Congratulation 3 Nile River is the longest river in Africa(6,853Km) "<<endl;
									     cout<<"\n";
									 	system("pause");
										 return level3Topic1();
									}
									else
									{
									 cout<< " \n Your answer is incorrect sorry try again ";
									cout<<"\n";
									system("pause");
									system("cls");
									 
									}
							break;
						
						case 2:
				    		cout << " \n Where is the biggest falls in Africa?"<< endl;
				    		cout << " \n 1-Congo 2- Tanzania 3- Morroco 4- Zambia  " << endl;
							cout<<"\n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
								
								if(answer == 4) 
								{
								 
									cout<< " \n Congratulation 4 Zambia Victoria Falls or The Smoke that Thunders is called too" <<endl;
									cout<< " \n is the greatest curtain of falling water in the world.  "<<endl;
									cout<<"\n";
									system("pause");
									return level3Topic1();
								}
														 
								
								else
								{
								 
								 	cout<< "\n Your answer is incorrect sorry try again "<<endl;
								 	cout<<"\n";
									system("pause");
									system("cls");
								 
								}
							break;
						
						case 3:
				    		cout << " \n What is the deepest river in Africa?" << endl;
				    		cout << " \n  1-Kasai River 2- Congo River 3- Nilo River 4- River Niger " <<endl;   
				    		cout << " \n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
								
								if(answer == 2) 
								{
								 	cout<< "\n Congratulation 2 Congo River It deepest river in the world with Deep in excess of over 200 metres."<<endl; 
									cout<<"\n";
									system("pause");
									return level3Topic1();
								}
														 
								
								else
								{
								 
								 	cout<< "\n Your answer is incorrect sorry try again "<<endl;
								 	cout<<"\n";
									system("pause");
								    system("cls");
								 
								}
							break;
						
						case 4:
				    		cout << " \n  Where is the highest mountain in Africa located? " << endl;
				    		cout << " \n  1- Egypt 2- Zambia 3- Morocco 4- Tanzania " << endl; 
				    		cout << " \n Enter your answer by choosing a number between 1 to 4..."<< endl; 
							cin>>answer;
				    			
								if(answer == 4) 
								{
									cout<< "\n Congratulation 4 Tanzania Kilimanjaro or Kibo is the highest mountain in Africa with 5885 metres. "<<endl;
									cout<<"\n";
									system("pause");
									return level3Topic1();
								}
								else
								{
								 
								 	cout<< "\n Your answer is incorrect sorry try again "<<endl;
								 	cout<<"\n";
									system("pause");
									system("cls");
								 
								}
							break;
						
					case 5:
				    		cout << " \n Where can be found the very important mineral called -Coltan-? " << endl;
				    		cout << " \n  1- Congo 2- Zambia 3- South Africa 4- Tanzania " <<endl;	
		 	    			cout << " \n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
				    			
								if(answer == 1) 
								{
															
									cout<< " \n Congratulation 1 Congo It is a vital element in creating capacitors for electronics elements" <<endl; 
									cout<< " That control current flow inside miniature circuit boards (It is used almost all cell phones, laptops etc.)."<<endl;
									cout<<"\n";
									system("pause");
									
									return level3Topic1();
								}
								else
								{
								 
									 cout<< "\n Your answer is incorrect sorry try again "<<endl;
									 cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;	
						
					case 6:
				    		cout << " \n  What is the biggest Pyramid in world? " << endl;
				    		cout << " \n 1- Pyramid of Khefre 2- Pyramid of Menkaure 3- Pyramid of Cheops 4- Pyramid Saqqaa " <<endl;
							cout<<	" \n Enter your answer by choosing a number between 1 to 4..." <<endl; 
							cin>>answer;
								
								if(answer == 3) 
								{
									cout<< " \n Congratulation 3 Pyramid of Khufu or (Pyramid of Cheops) it is the oldest and largest highest with 146.5 metres.  "<<endl;
									cout<<"\n";
									system("pause");
									return level3Topic1();
								}
								else
								{
								 
									 cout<< "\n Your answer is incorrect sorry try again "<<endl;
									 cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;	
	
											
				
					}
				chance++;		

			}	

			cout<<"\n You have finished all your lives "<<endl;
		  	cout<<" \n Do you want to play again? (y/n) :";		
			cin>>answerL;
			
			if(answerL=='n')
			{
				cout<<"\n thanks for playing See You Soon";
				cin.get();
				return End();
	    	}
	
					
		}while(answerL=='y'||answerL=='Y');	
	

	

}


int Level3(){
	

	
}

int level3Topic1()
{

system("cls");	
 char box_h = 205, box_v = 186;
 char box_t = 201, box_r = 187, box_bl = 200, box_br = 188;
 char bar = 219;
 
 //Creates the outer box
 for(int i =13; i<=63; i++){
  gotoxy(i, 5);
  cout<<box_h;
  gotoxy(i,7);
  cout<<box_h;
 }
 gotoxy(13,5);
 cout<<box_t;
 gotoxy(63,5);
 cout<<box_r;
 gotoxy(13,7);
 cout<<box_bl;
 gotoxy(63,7);
 cout<<box_br;
 gotoxy(13,6);
 cout<<box_v;
 gotoxy(63,6);
 cout<<box_v;
 gotoxy(13,4);
 cout<<"Loading...";
 
 //Logic to load the bar
 int counter = 0;
 for(int i=14; i<=62; i++)
 {
  gotoxy(i,6);
  cout<<bar;
  gotoxy(23,4);
  cout<<counter<<"%";
  counter+=2;
  Sleep(150);
 }
 
 color(5);
 gotoxy(13,4);
 cout<<"Loading...100%";
 color(15);
 gotoxy(13,4);
 cout<<"Loading Complete";
 gotoxy(13,8);



 system("cls");
system ("color 60");
int a, j, z, x, v , n, l, k, p, t;
char str[] = { " \n\t Congratulation and  Well Done ! \n" }; 
char str1[] = {" \n\t Welcome to the Second Level Asia \n"}; 
char str2[] = {" \n\t Remember you are going to face..... \n"}; 
char str3[] = {" \n\t Eight countries will be displayed on the screen\n"}; 
char str4[] = {" \n\t All the questions are related to these countries as well as the answers\n"}; 
char str5[] = {" \n\t First topic is  Capitals, Second Geography and Third Monuments \n"}; 
char str6[] = {" \n\t As soon as you pass the three topics you can go to next continent\n"}; 
char str7[] = {" \n\t If you fail these three attempts you will be able to begin\n"}; 
char str8[] = {" \n\t From the topic you were with another three attempts\n"}; 
char str9[] = {" \n\t\t\t Are you read ? \n "}; 


 int len = strlen(str);  
 int len1 = strlen(str1); 
 int len2 = strlen(str2);
 int len3 = strlen(str3);
 int len4 = strlen(str4);
 int len5 = strlen(str5);
 int len6 = strlen(str6);
 int len7 = strlen(str7);
 int len8 = strlen(str8);
 int len9 = strlen(str9);
 
 for(a=0;a<len;a++)
  {  

   putchar(str[a]);     

   Sleep(50);  //  
  }
  
   for(j=0;j<len1;j++)
  {  

   putchar(str1[j]);     

   Sleep(50);  //  
  }
			
   for(z=0;z<len2;z++)
  {  

   putchar(str2[z]);     

   Sleep(50);  //  
  }
				
   for(x=0; x<len3;x++)
  {  

   putchar(str3[x]);     

   Sleep(50);  //  
  }
	
			
			
   for(v=0; v<len4; v++)
  {  

   putchar(str4[v]);     

   Sleep(50);  //  
  }
				
			
	
    for(n=0; n<len5; n++)
  {  

   putchar(str5[n]);     

   Sleep(50);  //  
  }


   for(l=0;l<len6;l++)
  {  

   putchar(str6[l]);     

   Sleep(50);  //  
  }
		      
       
   for(k=0;k<len7;k++)
  {  

   putchar(str7[k]);     

   Sleep(50);  //  
  }
		
	
   for(p=0;p<len8;p++)
  {  

   putchar(str8[p]);     

   Sleep(50);  //  
  }
	
	
   for(t=0;t<len9;t++)
  {  

   putchar(str9[t]);     

   Sleep(50);  //  
  }

system("pause");
system("cls");


	
	cout << "\n Third Level Asia " << endl;
	cout << "\n First Topic Capitals"<<endl;
	
	
	
			string countries[8] = {"\t India ", "\t China ", "\t Japan ", "\t Nepal ", "\t Thailand ", "\t Saudi Arabia ", "\t Mongolia ", "\t Indonesia "};
		
		//This loop allows me to display the countries on the screen.
		int i;
		for (i = 0; i<8; i++)      
		{
		cout<<"\n" <<countries[i] << endl;
		}
		cin.get();
	
			
			//Four variable will be used to identify the answers
		int one = 1;
	    int two = 2;
	    int three = 3;
	    int four = 4;
	    int chance;
		
		int answer;//it allows me to enter the answers to the questions
	    char answerL; //Loop answer.
	 
	
	  //Code to create a random to the questions.
	 srand((unsigned)time(0));
	    
	 int e;
	  
	
	    
	//Create a loop to repeat the accion.   
	    
	    
	    
		do{
			chance =0;
				
				while(chance<=2){
					e = (rand()%6)+1;
					switch(e)
				    {
				    	case 1:
			
							cout << " \n What is the capital of Indonesia? " <<endl;
							cout << " \n 1-Bangkok 	2- Ulan Bator 3- Kathmandu 	4- Jakarta " <<endl;
							cout << " \n Enter your answer by choosing a number between 1 to 4..."; 									
							cin>>answer;
									
									if(answer == 4) 
									{
										 cout<< "\n Congratulation 4 Jakarta with a population of 10,075,310 "<<endl;
									    cout<<"\n";
										system("pause");
										 return level3Topic2();
									}
									else
									{
									 cout<< " \n Your answer is incorrect sorry try again " <<endl;
									system("cls");
									 
									}
							break;
						
						case 2:
				    		cout << " \n What of these countries has a city bigger than their capital? "<< endl;
				    		cout << " \n  1-Japon 	2- Saudi Arabia  	3- China 	4- Thailand " << endl;
							cout << " \n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
								
								if(answer == 3) 
								{
								 
									cout<< "\n Congratulation 3 China, Shanghai 24,256.800 city proper "<<endl;
									cout<<"\n";
									system("pause");
									return level3Topic2();
								}
														 
								
								else
								{
								 
								 	cout<< "\n Your answer is incorrect sorry try again "<<endl;
								 	cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;
						
						case 3:
				    		cout << " \n What is the biggest capital in Asia by population including his metropolitan area? " << endl;
				    		cout << " \n 1-Delhi 	2- Tokyo	3- Bangkok	4- Kathmandu " <<endl;
			    			cout<<"\n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
								
								if(answer == 2) 
								{
								 	cout<< "\n Congratulation 2 Tokyo Largest city in Asia by Population 37.8 million metropolitan area."<<endl; 
									cout<<"\n";
									system("pause");
									return level3Topic2();
								}
														 
								
								else
								{
								 
								 	cout<< "\n Your answer is incorrect sorry try again "<<endl;
								 	cout<<"\n";
									system("pause");
									system("cls");
								 
								}
							break;
						
						case 4:
				    		cout << " \n What is the capital of Nepal? " << endl;
				    		cout << " \n  1-Delhi 	2- Tokyo	3- Kathmandu	4- Riad " << endl; 
				    		cout<<"\n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
				    			
				    			
								if(answer == 3) 
								{
									cout<< "\n Congratulation 3 Kathmandu."<<endl;
									cout<<"\n";
									system("pause");
									return level3Topic2();
								}
								else
								{
								 
								 	cout<< "\n Your answer is incorrect sorry try again "<<endl;
								 	cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;
						
					case 5:
				    		cout << " \n What is the capital most visited in Asia in 2016? " << endl;
				    		cout << " \n  1-Bangkok 	2- Tokyo	3- Beijing	4- Jakarta " <<endl;
			    			cout <<"  \n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
				    			
								if(answer == 1) 
								{
															
									cout<< " \n Congratulation 1 Bangkok estimated 21,47m overnight visitors expected."<<endl;
									cout<<"\n";
									system("pause");
									return level3Topic2();
								}
								else
								{
								 
									 cout<< "\n Your answer is incorrect sorry try again "<<endl;
									 cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;	
						
					case 6:
				    		cout << " \n What is capital of Mongolia? " << endl;
							cout << " \n 1-Kathmandu 2- Jakarta 3- Ulan Bator 4- Riad"<<endl; 
							cout <<"  \n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
								
								if(answer == 3) 
								{
									 cout<< " \n Congratulation 3 Ulan Bator. "<<endl;	
									cout<<"\n";
									system("pause");
									return level3Topic2();
								}
								else
								{
								 
									 cout<< "\n Your answer is incorrect sorry try again "<<endl;
									 cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;	
	
											
				
					}
				chance++;		

			}	

			cout<<"\n You have finished all your lives "<<endl;
		  	cout<<" \n Do you want to play again? (y/n) :";		
			cin>>answerL;
			
			if(answerL=='n')
			{
				cout<<"\n thanks for playing See You Soon";
				cin.get();
				return End();
	    	}
	
					
		}while(answerL=='y'||answerL=='Y');	
	

}

int level3Topic2()
{

system("cls");
	cout<<" \n \t\t Congratulation!" <<endl;
	cout<<" \n";
	cout<<" \n Welcome to the Second Topic"<<endl;
	cout<<" \n It will be Geography in Asia"<<endl;
	cout<<" \n Good Luck and press a key when you will be ready "<<endl;
	cout<<"\n";
	system("pause");
	system("cls");
	
	
	
			string countries[8] = {"\t India ", "\t China ", "\t Japan ", "\t Nepal ", "\t Thailand ", "\t Saudi Arabia ", "\t Mongolia ", "\t Indonesia "};
		
		//This loop allows me to display the countries on the screen.
		int i;
		for (i = 0; i<8; i++)      
		{
		cout<<"\n" <<countries[i] << endl;
		}
		cin.get();
	
			
			//Four variable will be used to identify the answers
		int one = 1;
	    int two = 2;
	    int three = 3;
	    int four = 4;
	    int chance;
		
		int answer;//it allows me to enter the answers to the questions
	    char answerL; //Loop answer.
	 
	
	  //Code to create a random to the questions.
	 srand((unsigned)time(0));
	    
	 int e;
	  
	
	    
	//Create a loop to repeat the accion.   
	    
	    
	    
		do{
			chance =0;
				
				while(chance<=2){
					e = (rand()%6)+1;
					switch(e)
				    {
				    	case 1:
			
							cout << "\n Where is the biggest statue of Buddha in Asia? " <<endl;
							cout << "\n 1-India 	2- Japan	3- China	4- Nepal " <<endl;
							cout << "\n Enter your answer by choosing a number between 1 to 4..." ; 
					 		cin>>answer;
									
									if(answer == 3) 
									{
										 cout<< " \n Congratulation  3 Standing 502 feet with a 660-foot lotus throne. " <<endl;
										 cout<< " \n It is in China's Henan province is the world's tallest statute. "<<endl;
									     cout<<"\n";
									 	system("pause");
										 return level3Topic3();
									}
									else
									{
									 cout<< " \n Your answer is incorrect sorry try again " << endl;
									cout<<"\n";
									system("pause");
									system("cls");
									 
									}
							break;
						
						case 2:
				    		cout <<" \n Gobi Desert is the largest desert in Asia what are the countries it is extended?."<< endl;
				    		cout <<" \n 1-India and China " <<endl;	
							cout <<" \n 2- Thailand and India" <<endl;
							cout <<" \n 3- China and Mongolia "<<endl;	
							cout<< " \n 4- India, Mongolia and China " <<endl;
							cout <<" \n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
								
								if(answer == 3) 
								{
								 
									cout<< " \n Congratulation 3 China and Mongolia covering 500,000 square miles."<<endl;
									cout<< " \n Extending from northern China and into Mongolia.  "<<endl;
									cout<<"\n";
									system("pause");
									return level3Topic3();
								}
														 
								
								else
								{
								 
								 	cout<< "\n Your answer is incorrect sorry try again "<<endl;
								 	cout<<"\n";
									system("pause");
									system("cls");
								 
								}
							break;
						
						case 3:
				    		cout << " \n What is the largest Island in Asia?" << endl;
				    		cout << " \n  1-Sumatra 	2- Honshu	3- Borneo 	4- Celebes " <<endl;   
				    		cout << " \n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
								
								if(answer == 3) 
								{
								 	cout<< "\n Congratulation 3 Borneo is the largest island in Asia with 743,330 km2"<<endl; 
									cout<<"\n";
									system("pause");
									return level3Topic3();
								}
														 
								
								else
								{
								 
								 	cout<< "\n Your answer is incorrect sorry try again "<<endl;
								 	cout<<"\n";
									system("pause");
								    system("cls");
								 
								}
							break;
						
						case 4:
				    		cout << " \n What is the largest river in Asia? " << endl;
				    		cout << "\n  1-Lena River 2- Indus River 3- Ural River 4- Mekong River " << endl; 
				    	    cout << "\n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
				    			
								if(answer == 4) 
								{
									cout<< "\n Congratulation 4Mekong River the length is estimated over 4,350 Km "<<endl;
									cout<< "   and cross China, Myanmar, Laos, Thailand, Cambodia and Vietnam  " <<endl;
									cout<<"\n";
									system("pause");
									return level3Topic3();
								}
								else
								{
								 
								 	cout<< "\n Your answer is incorrect sorry try again "<<endl;
								 	cout<<"\n";
									system("pause");
									system("cls");
								 
								}
							break;
						
					case 5:
				    		cout << " \n Where is located Mecca?  " << endl;
				    		cout << " \n  1-India 	2- Indonesia	3- Saudi Arabia	4- Nepal  " <<endl;
				    		cout << " \n Enter your answer by choosing a number between 1 to 4..." ; 
							cin>>answer;
				    			
								if(answer == 3) 
								{

									cout<< " \n Congratulation 3 Saudi Arabia " <<endl; 
									cout<<"\n ";
									system("pause");
									return level3Topic3();
								}
								else
								{
								 
									 cout<< "\n Your answer is incorrect sorry try again "<<endl;
									 cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;	
						
					case 6:
				    		cout << " \n What is the longest range of mountain in Asia? " << endl;
				    		cout << " \n  1-Karakoranm 	2- Pamir	3- Hindu Kush 	4- Himalayas "<<endl;
							cout << " \n  Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
								
								if(answer == 4) 
								{
									cout<< " \n Congratulation  4 Himalayas with Length of Range 2,400 and 8,848 Peak height (Mount Everest) "<<endl;
									cout<<"\n";
									system("pause");
									return level3Topic3();
								}
								else
								{
								 
									 cout<< "\n Your answer is incorrect sorry try again "<<endl;
									 cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;	
	
											
				
					}
				chance++;		

			}	

			cout<<"\n You have finished all your lives "<<endl;
		  	cout<<" \n Do you want to play again? (y/n) :";		
			cin>>answerL;
			
			if(answerL=='n')
			{
				cout<<"\n thanks for playing See You Soon";
				cin.get();
				return End();
	    	}
	
					
		}while(answerL=='y'||answerL=='Y');	
	
}

int level3Topic3()
{

system("cls");
	cout<<" \n \t\t Congratulation!" <<endl;
	cout<<" \n";
	cout<<" \n Welcome to the Third Topic"<<endl;
	cout<<" \n It will be Monuments in Asia"<<endl;
	cout<<" \n Good Luck and press a key when you will be ready "<<endl;
	cout<<"\n";
	system("pause");
	system("cls");
	
	
	
			string countries[8] = {"\t India ", "\t China ", "\t Japan ", "\t Nepal ", "\t Thailand ", "\t Saudi Arabia ", "\t Mongolia ", "\t Indonesia "};
		
		//This loop allows me to display the countries on the screen.
		int i;
		for (i = 0; i<8; i++)      
		{
		cout<<"\n" <<countries[i] << endl;
		}
		cin.get();
	
			
			//Four variable will be used to identify the answers
		int one = 1;
	    int two = 2;
	    int three = 3;
	    int four = 4;
	    int chance;
		
		int answer;//it allows me to enter the answers to the questions
	    char answerL; //Loop answer.
	 
	
	  //Code to create a random to the questions.
	 srand((unsigned)time(0));
	    
	 int e;
	  
	
	    
	//Create a loop to repeat the accion.   
	    
	    
	    
		do{
			chance =0;
				
				while(chance<=2){
					e = (rand()%6)+1;
					switch(e)
				    {
				    	case 1:
			
							cout << "\n What is most visited monument in Asia? " <<endl;
							cout << "\n 1-Brihadishware Temple  2- KinKaku-ji 3-The Great Wall 4- Genghis Khan Equestrian Statatue  " <<endl;
							cout<<"\n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
									
									if(answer == 3) 
									{
										 cout<< " \n Congratulation  3 The Great Wall with a length of 21,196.18 Kilometres" <<endl;									     
										 cout<<"\n";
									 	system("pause");
										 return level4Topic1();
									}
									else
									{
									 cout<< " \n Your answer is incorrect sorry try again ";
									cout<<"\n";
									system("pause");
									system("cls");
									 
									}
							break;
						
						case 2:
				    		cout <<" \n What is the largest Temple in India?."<< endl;
				    		cout <<" \n 1- Brihadishware Temple " <<endl;	
							cout <<" \n 2- Badrinath Temple " <<endl;
							cout <<" \n 3- The Konark Sun Temple	 "<<endl;	
							cout<< " \n 4- Kedarnth Temple  " <<endl;
							cout<<"\n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
								
								if(answer == 1) 
								{
								 
									cout<< " \n Congratulation 1 Brihadishware Temple is one of the India's largest temple located in the Thanjavur."<<endl;
									cout<<"\n";
									system("pause");
									return level4Topic1();
								}
														 
								
								else
								{
								 
								 	cout<< "\n Your answer is incorrect sorry try again "<<endl;
								 	cout<<"\n";
									system("pause");
									system("cls");
								 
								}
							break;
						
						case 3:
				    		cout << " \n Where is the Tag Mahal Located?" << endl;
				    		cout     << " \n 1-India 	2- Japan	3- Saudi Arabia	4- Thailand " <<endl;   
				    		cout<<"\n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
								
								if(answer == 1) 
								{
								 	cout<< "\n Congratulation 1 India. Tag Mahal, Agra " <<endl;
									cout<< "\n It combines elements of Maghal Persian, Ottoman Turkish and Indian architectural styles. "<<endl; 
									cout<<"\n";
									system("pause");
									return level4Topic1();
								}
														 
								
								else
								{
								 
								 	cout<< "\n Your answer is incorrect sorry try again "<<endl;
								 	cout<<"\n";
									system("pause");
								    system("cls");
								 
								}
							break;
						
						case 4:
				    		cout << " \n Where is located the Potala Palace Temple? " << endl;
				    		cout << "\n  1-Nepal 	2- China	3-Indonesia 	4- Japon   " << endl; 
			    			cout<<"\n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
				    			
								if(answer == 2) 
								{
									cout<< "\n Congratulation Potala Palace It is Dalai Lama's residence and it is located at 3,650 metres above sea level.  "<<endl;
									cout<<"\n";
									system("pause");
									return level4Topic1();
								}
								else
								{
								 
								 	cout<< "\n Your answer is incorrect sorry try again "<<endl;
								 	cout<<"\n";
									system("pause");
									system("cls");
								 
								}
							break;
						
					case 5:
				    		cout << " \n What is the largest and biggest mosque in Asia?  " << endl;
				    		cout << " \n 1-Al-Azhar 2- Iman Ali	3- Masjdig Al Haram	4- Aymani Kadyrow   " <<endl;
				    		cout << " \n Enter your answer by choosing a number between 1 to 4..." ; 
							cin>>answer;
				    			
								if(answer == 3) 
								{

									cout<< " \n Congratulation  3 Mecca Masig Al Haram it is the largest mosque in the world" <<endl; 
									cout<<"\n ";
									system("pause");
									return level4Topic1();
								}
								else
								{
								 
									 cout<< "\n Your answer is incorrect sorry try again "<<endl;
									 cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;	
						
					case 6:
				    		cout << " \n Where is the tallest statue of Buddha in Asia? " << endl;
				    		cout << " \n  1-India 	2- Japan	3- Nepal	4- China "<<endl;
							cout<<" \n Enter your answer by choosing a number between 1 to 4..."; 
							cout<<" \n "<<endl; 
							cin>>answer;
								
								if(answer == 4) 
								{
									cout<< " \n Congratulation  4 China The Spring Temple Buddha, Henna China Standing 502 feet with a 66-foot lotus throne "<<endl;
									cout<<"\n  . It is in China's Henan province is the world's tallest statute.  ";
									system("pause");
									return level4Topic1();
								}
								else
								{
								 
									 cout<< "\n Your answer is incorrect sorry try again "<<endl;
									 cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;	
	
											
				
					}
				chance++;		

			}	

			cout<<"\n You have finished all your lives "<<endl;
		  	cout<<" \n Do you want to play again? (y/n) :";		
			cin>>answerL;
			
			if(answerL=='n')
			{
				cout<<"\n thanks for playing See You Soon";
				cin.get();
				return End();
	    	}
	
					
		}while(answerL=='y'||answerL=='Y');	

}

int Level4()
{


	
}


int level4Topic1()
{

 system("cls");	
 char box_h = 205, box_v = 186;
 char box_t = 201, box_r = 187, box_bl = 200, box_br = 188;
 char bar = 219;
 
 //Creates the outer box
 for(int i =13; i<=63; i++){
  gotoxy(i, 5);
  cout<<box_h;
  gotoxy(i,7);
  cout<<box_h;
 }
 gotoxy(13,5);
 cout<<box_t;
 gotoxy(63,5);
 cout<<box_r;
 gotoxy(13,7);
 cout<<box_bl;
 gotoxy(63,7);
 cout<<box_br;
 gotoxy(13,6);
 cout<<box_v;
 gotoxy(63,6);
 cout<<box_v;
 gotoxy(13,4);
 cout<<"Loading...";
 
 //Logic to load the bar
 int counter = 0;
 for(int i=14; i<=62; i++)
 {
  gotoxy(i,6);
  cout<<bar;
  gotoxy(23,4);
  cout<<counter<<"%";
  counter+=2;
  Sleep(150);
 }
 
 color(5);
 gotoxy(13,4);
 cout<<"Loading...100%";
 color(15);
 gotoxy(13,4);
 cout<<"Loading Complete";
 gotoxy(13,8);

	
	
 system("cls");
system ("color 4F");
int a, j, z, x, v , n, l, k, p, t;
char str[] = { " \n\t\t Congratulation and  Well Done ! \n" }; 
char str1[] = {" \n\t\t Welcome to the Fourth Level America \n"}; 
char str2[] = {" \n\t\t Remember you are going to face..... \n"}; 
char str3[] = {" \n\t\t Eight countries will be displayed on the screen\n"}; 
char str4[] = {" \n\t All the questions are related to these countries as well as the answers\n"}; 
char str5[] = {" \n\t\t First topic is  Food, Second Animals and Third Geography \n"}; 
char str6[] = {" \n\t As soon as you pass the three topics you can go to next continent\n"}; 
char str7[] = {" \n\t If you fail these three attempts you will be able to begin\n"}; 
char str8[] = {" \n\t\t From the topic you were with another three attempts\n"}; 
char str9[] = {" \n\t\t\t Are you read ? \n "}; 


 int len = strlen(str);  
 int len1 = strlen(str1); 
 int len2 = strlen(str2);
 int len3 = strlen(str3);
 int len4 = strlen(str4);
 int len5 = strlen(str5);
 int len6 = strlen(str6);
 int len7 = strlen(str7);
 int len8 = strlen(str8);
 int len9 = strlen(str9);
 
 for(a=0;a<len;a++)
  {  

   putchar(str[a]);     

   Sleep(50);  //  
  }
  
   for(j=0;j<len1;j++)
  {  

   putchar(str1[j]);     

   Sleep(50);  //  
  }
			
   for(z=0;z<len2;z++)
  {  

   putchar(str2[z]);     

   Sleep(50);  //  
  }
				
   for(x=0; x<len3;x++)
  {  

   putchar(str3[x]);     

   Sleep(50);  //  
  }
	
			
			
   for(v=0; v<len4; v++)
  {  

   putchar(str4[v]);     

   Sleep(50);  //  
  }
				
			
	
    for(n=0; n<len5; n++)
  {  

   putchar(str5[n]);     

   Sleep(50);  //  
  }


   for(l=0;l<len6;l++)
  {  

   putchar(str6[l]);     

   Sleep(50);  //  
  }
		      
       
   for(k=0;k<len7;k++)
  {  

   putchar(str7[k]);     

   Sleep(50);  //  
  }
		
	
   for(p=0;p<len8;p++)
  {  

   putchar(str8[p]);     

   Sleep(50);  //  
  }
	
	
   for(t=0;t<len9;t++)
  {  

   putchar(str9[t]);     

   Sleep(50);  //  
  }

system("pause");
system("cls");
	
	
	
	
	cout << "\n Fourth Level America " << endl;
	cout << "\n First Topic Food "<<endl;
	
	
	
			string countries[8] = {"\t Brazil ", "\t Argentina ", "\t Chile ", "\t United Satates ", "\t Peru ", "\t Venezuela ", "\t Mexico ", "\t Canada "};
		
		//This loop allows me to display the countries on the screen.
		int i;
		for (i = 0; i<8; i++)      
		{
		cout<<"\n" <<countries[i] << endl;
		}
		cin.get();
	
			
			//Four variable will be used to identify the answers
		int one = 1;
	    int two = 2;
	    int three = 3;
	    int four = 4;
	    int chance;
		
		int answer;//it allows me to enter the answers to the questions
	    char answerL; //Loop answer.
	 
	
	  //Code to create a random to the questions.
	 srand((unsigned)time(0));
	    
	 int e;
	  
	
	    
	//Create a loop to repeat the accion.   
	    
	    
	    
		do{
			chance =0;
				
				while(chance<=2){
					e = (rand()%6)+1;
					switch(e)
				    {
				    	case 1:
			
							cout << " \n What is a typically food from Brazil? " <<endl;
							cout << " \n 1- Locro	2- Ceviche	3- Cobb salad	4- Moqueta " <<endl;
							cout << " \n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
									
									if(answer == 4) 
									{
										 cout<< "\n Congratulation 4 Moqueta fish or seafood stewer with diced tomatoes, onions and coriander "<<endl;
									    cout<<"\n";
										system("pause");
										 return level4Topic2();
									}
									else
									{
									 cout<< " \n Your answer is incorrect sorry try again " <<endl;
									system("cls");
									 
									}
							break;
						
						case 2:
				    		cout << " \n Lumuca is a Tree fruit that looks like a mango and served with a variety of ice cream which comes from? "<< endl;
				    		cout << " \n 1-Peru 	2- Mexico	3- Venezuela	4- Canada " << endl;
							cout << " \n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
								
								if(answer == 1) 
								{
								 
									cout<< "\n Congratulation 1 Peru. "<<endl;
									cout<<"\n";
									system("pause");
									return level4Topic2();
								}
														 
								
								else
								{
								 
								 	cout<< "\n Your answer is incorrect sorry try again "<<endl;
								 	cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;
						
						case 3:
				    		cout << " \n What is a typically food from Venezuela? " << endl;
				    		cout << " \n 1-Caldillo de congrio 	2- Provaleta 3- Arepas	4- Mole " <<endl;   
				    		cout << " \n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
								
								if(answer == 3) 
								{
								 	cout<< " \n Congratulation 3 Arepa Cornmeal bread that can be grilled, fired," <<endl; 
									cout<< " \n baked or streamed filling of beef, pork or eggs. "<<endl; 
									cout<<"\n";
									system("pause");
									return level4Topic2();
								}
														 
								
								else
								{
								 
								 	cout<< "\n Your answer is incorrect sorry try again "<<endl;
								 	cout<<"\n";
									system("pause");
									system("cls");
								 
								}
							break;
						
						case 4:
				    		cout << " \n Cobb salad is romaine lettuce, avocado watercress, tomatoes, some cold chicken " << endl;
				    		cout << " \n breast boiled egg, cheese and French dressing where does it comes from? " << endl;    
							cout << " \n 1-Chile 	2- United Stated 	3- Mexico	4- Canada " << endl; 
				    		cout << " \n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
				    			
				    			
								if(answer == 2) 
								{
									cout<< "\n Congratulation 2 United Stated "<<endl;
									cout<<"\n";
									system("pause");
									return level4Topic2();
								}
								else
								{
								 
								 	cout<< "\n Your answer is incorrect sorry try again "<<endl;
								 	cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;
						
					case 5:
				    		cout << " \n Provaleta is a typically dish from Argentina based in? " << endl;
				    		cout << " \n 1-Cron and Beef 	2- Salad	3- Cheese	4- Beef´s Skewer " <<endl;
				    		cout << " \n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
				    			
								if(answer == 3) 
								{
															
									cout<< " \n Congratulation 3 Cheese Provaleta A large amount of fried melted cheese served with a lot of oregano."<<endl;
									cout<<"\n";
									system("pause");
									return level4Topic2();
								}
								else
								{
								 
									 cout<< "\n Your answer is incorrect sorry try again "<<endl;
									 cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;	
						
					case 6:
				    		cout << " \n Poutine is a dish from Canada which is? " << endl;
				    		cout << " \n 1-Tradicional Breakfast 	2- Sandwich 	3- Dissert 	4- Traditional meat pie " <<endl;
							cout << " \n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
								
								if(answer == 2) 
								{
									 cout<< " \n Congratulation 2 Sandwich Poutine - Glorious Montreal smoked meat sandwich. "<<endl;	
									cout<<"\n";
									system("pause");
									return level4Topic2();
								}
								else
								{
								 
									 cout<< "\n Your answer is incorrect sorry try again "<<endl;
									 cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;	
	
											
				
					}
				chance++;		

			}	

			cout<<"\n You have finished all your lives "<<endl;
		  	cout<<" \n Do you want to play again? (y/n) :";		
			cin>>answerL;
			
			if(answerL=='n')
			{
				cout<<"\n thanks for playing See You Soon";
				cin.get();
				return End();
			}
	
					
		}while(answerL=='y'||answerL=='Y');	
	
				
	
	

}

int level4Topic2()
{

	system("cls");
	cout<<" \n \t\t Congratulation!" <<endl;
	cout<<" \n";
	cout<<" \n Welcome to the Second Topic"<<endl;
	cout<<" \n It will be Animals in America"<<endl;
	cout<<" \n Good Luck and press a key when you will be ready "<<endl;
	cout<<"\n";
	system("pause");
	system("cls");
	
	
	
			string countries[8] = {"\t Brazil ", "\t Argentina ", "\t Chile ", "\t United Satates ", "\t Peru ", "\t Venezuela ", "\t Mexico ", "\t Canada "};
		
		//This loop allows me to display the countries on the screen.
		int i;
		for (i = 0; i<8; i++)      
		{
		cout<<"\n" <<countries[i] << endl;
		}
		cin.get();
	
			
			//Four variable will be used to identify the answers
		int one = 1;
	    int two = 2;
	    int three = 3;
	    int four = 4;
	    int chance;
		
		int answer;//it allows me to enter the answers to the questions
	    char answerL; //Loop answer.
	 
	
	  //Code to create a random to the questions.
	 srand((unsigned)time(0));
	    
	 int e;
	  
	
	    
	//Create a loop to repeat the accion.   
	    
	    
	    
		do{
			chance =0;
				
				while(chance<=2){
					e = (rand()%6)+1;
					switch(e)
				    {
				    	case 1:
			
							cout << " \n Where river Dolphin can be found? " <<endl;
							cout << " \n 1-Peru 	2- Mexico	3- Brazil	4- Canada " <<endl;
							cout << " \n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
									
									if(answer == 3) 
									{
										 cout<< "\n Congratulation 3 They look pretty prink, they are the largest species of river dolphin and can grow even bigger that humans. "<<endl;
									    cout<<"\n";
										system("pause");
										 return level4Topic3();
									}
									else
									{
									 cout<< " \n Your answer is incorrect sorry try again " <<endl;
									system("cls");
									 
									}
							break;
						
						case 2:
				    		cout << " \n Where does the biggest bird cannot fly come from in American continent? "<< endl;
				    		cout << " \n 1-Argentina 	2- United Estate	3- Brazil	4- Canada " << endl;
							cout << " \n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
								
								if(answer == 1) 
								{
								 
									cout<< "\n Congratulation 1 Ñandu o Suri It is the biggest bird in Argentina and she cannot fly. "<<endl;
									cout<<"\n";
									system("pause");
									return level4Topic3();
								}
														 
								
								else
								{
								 
								 	cout<< "\n Your answer is incorrect sorry try again "<<endl;
								 	cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;
						
						case 3:
				    		cout << " \n Venezuela has the largest rodent living in the world what is his name? " << endl;
				    		cout << " \n 1- Xoloitzcuintli	2- Charki	3- Moose	4- Capybara " <<endl;   
			    			cout << " \n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
								
								if(answer == 4) 
								{
								 	cout<< " \n Congratulation 4 Venezuela's plain region is home to the Capybara which is the world's largest rodent. " <<endl; 
									cout<< " \n He can weigh up to 100 pounds and live most of their lives in water. "<<endl; 
									cout<<"\n";
									system("pause");
									return level4Topic3();
								}
														 
								
								else
								{
								 
								 	cout<< "\n Your answer is incorrect sorry try again "<<endl;
								 	cout<<"\n";
									system("pause");
									system("cls");
								 
								}
							break;
						
						case 4:
				    		cout << " \n Axolotl is an iconic creature super weird looking and in critical danger of extinction  " << endl;
				    		cout << " \n where does creature comes from? " << endl;    
							cout << " \n 1-Argentina 	2- Mexico	3- Brazil	4- Canada " << endl; 
				    		cout << " \n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
				    			
				    			
								if(answer == 2) 
								{
									cout<< "\n Congratulation 2 Axolotl is an iconic Mexican. Typically found inhabiting the rivers and lakes of central Mexico "<<endl;
									cout<<"\n";
									system("pause");
									return level4Topic3();
								}
								else
								{
								 
								 	cout<< "\n Your answer is incorrect sorry try again "<<endl;
								 	cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;
						
					case 5:
				    		cout << " \n What is Goliath birdeater ? " << endl;
				    		cout << " \n 1- Dog breed 2- Grizzly bear 3- Anacondas 4- Tarantula. " <<endl;
				    		cout << " \n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
				    			
								if(answer == 4) 
								{
															
									cout<< " \n Congratulation 4 Goliath birdeater, it is the largest Tarantula in the world by mass and size. It can be found in Brazil. "<<endl;
									cout<<"\n";
									system("pause");
									return level4Topic3();
								}
								else
								{
								 
									 cout<< "\n Your answer is incorrect sorry try again "<<endl;
									 cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;	
						
					case 6:
				    		cout << " \n Is the Condor from Peru the world's largest flying bird.? " << endl;
				    		cout << " \n 1- Yes  2- No " <<endl;
				    		cout << " \n Enter your answer by choosing a number between 1 to 4...";  
							cin>>answer;
								
								if(answer == 2) 
								{
									 cout<< " \n Congratulation Yes The condor is a scavenger and is the world's largest flying bird with more than 1m tall and wingspan of 3.80m."<<endl;	
									cout<<"\n";
									system("pause");
									return level4Topic3();
								}
								else
								{
								 
									 cout<< "\n Your answer is incorrect sorry try again "<<endl;
									 cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;	
	
											
				
					}
				chance++;		

			}	

			cout<<"\n You have finished all your lives "<<endl;
		  	cout<<" \n Do you want to play again? (y/n) :";		
			cin>>answerL;
			
			if(answerL=='n')
			{
				cout<<"\n thanks for playing See You Soon";
				cin.get();
				return End();
	    	}
	
					
		}while(answerL=='y'||answerL=='Y');	
	

}

int level4Topic3()
{

system("cls");
	cout<<" \n \t\t Congratulation!" <<endl;
	cout<<" \n";
	cout<<" \n Welcome to the Third Topic"<<endl;
	cout<<" \n It will be Geography in America"<<endl;
	cout<<" \n Good Luck and press a key when you will be ready "<<endl;
	cout<<"\n";
	system("pause");
	system("cls");
	
	
	
			string countries[8] = {"\t Brazil ", "\t Argentina ", "\t Chile ", "\t United Satates ", "\t Peru ", "\t Venezuela ", "\t Mexico ", "\t Canada "};
		
		//This loop allows me to display the countries on the screen.
		int i;
		for (i = 0; i<8; i++)      
		{
		cout<<"\n" <<countries[i] << endl;
		}
		cin.get();
	
			
			//Four variable will be used to identify the answers
		int one = 1;
	    int two = 2;
	    int three = 3;
	    int four = 4;
	    int chance;
		
		int answer;//it allows me to enter the answers to the questions
	    char answerL; //Loop answer.
	 
	
	  //Code to create a random to the questions.
	 srand((unsigned)time(0));
	    
	 int e;
	  
	
	    
	//Create a loop to repeat the accion.   
	    
	    
	    
		do{
			chance =0;
				
				while(chance<=2){
					e = (rand()%6)+1;
					switch(e)
				    {
				    	case 1:
			
							cout << " \n What is the biggest country in American continent? " <<endl;
							cout << " \n 1-Argentina 	2- Brazil	3- Unite State	4- Canada " <<endl;
							cout << " \n Enter your answer by choosing a number between 1 to 4..."; 			
							cin>>answer;
									
									if(answer == 4) 
									{
										 cout<< "\n Congratulation 4 Canada is the largest country of North America in terms of land surface with an estimates area of 9,984.670 Km2. "<<endl;
									    cout<<"\n";
										system("pause");
										 return GameOver();
									}
									else
									{
									 cout<< " \n Your answer is incorrect sorry try again " <<endl;
									system("cls");
									 
									}
							break;
						
						case 2:
				    		cout << " \n What is the name of the largest freshwater lake in American continent? "<< endl;
				    		cout << " \n 1-Maracaibo 2- Michigan 3- Superior 4- Ontario " << endl;

								cout<<"\n Enter your answer by choosing a number between 1 to 4..."; 
								cin>>answer;
								
								if(answer == 3) 
								{
								 
									cout<< "\n Congratulation 3 Superior lake is the largest of the Great Lakes of North America and it is the largest freshwater lake in the world by surface area. "<<endl;
									cout<<"\n";
									system("pause");
									return GameOver();
								}
														 
								
								else
								{
								 
								 	cout<< "\n Your answer is incorrect sorry try again "<<endl;
								 	cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;
						
						case 3:
				    		cout << " \n Where is located the highest mountain outside of America? " << endl;
				    		cout << " \n 1-United State 2- Peru	3- Argentina 4- Canada " <<endl;   
			    			cout << " \n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
								
								if(answer == 3) 
								{
								 	cout<< " \n Congratulation 3 Argentina. Aconcagua is the highest mountain outside Asia at 6,961 metres." <<endl; 
									cout<<"\n";
									system("pause");
									return GameOver();
								}
														 
								
								else
								{
								 
								 	cout<< "\n Your answer is incorrect sorry try again "<<endl;
								 	cout<<"\n";
									system("pause");
									system("cls");
								 
								}
							break;
						
						case 4:
				    		cout << " \n What is the largest state by total area and land are in North America?  " << endl;
							cout << " \n 1-Alaska 	2- Texas	3- California 	4- Montana " << endl; 
			    			cout<<"\n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
				    			
				    			
								if(answer == 1) 
								{
									cout<< "\n Congratulation 1 Alaska. It is the largest states in the Unites States by area "<<endl;
									cout<<"\n";
									system("pause");
									return GameOver();
								}
								else
								{
								 
								 	cout<< "\n Your answer is incorrect sorry try again "<<endl;
								 	cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;
						
					case 5:
				    		cout << " \n Where is Angel Falls located? " << endl;
				    		cout << " \n 1-Peru 	2- Venezuela 	3- Chile 	4- Brazil " <<endl;
			    			cout << " \n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
				    			
								if(answer == 2) 
								{
															
									cout<< " \n Congratulation 2 Venezuela. The world's highest uninterrupted waterfall, with a height of 979 meters and a plunge of 807 metres. "<<endl;
									cout<< " \n The falls are located inside de Canaima National Park. " <<endl;
									cout<<"\n";
									system("pause");
									return GameOver();
								}
								else
								{
								 
									 cout<< "\n Your answer is incorrect sorry try again "<<endl;
									 cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;	
						
					case 6:
				    		cout << " \n Where is Machu Picchu located? \n" << endl;
				    		cout << " \n 1-Peru 	2- Mexico 	3- Chile 	4- Argentina "<<endl;
							cout << " \n Enter your answer by choosing a number between 1 to 4..."; 
							cin>>answer;
								
								if(answer == 1) 
								{
									 cout<< " \n Congratulation 1 Peru Inca citadel situated on mountain ridge 2,430 metres above sea level. "<<endl;	
									cout<<"\n";
									system("pause");
									return GameOver();
								}
								else
								{
								 
									 cout<< "\n Your answer is incorrect sorry try again "<<endl;
									 cout<<"\n";
									 system("pause");
									 system("cls");
								 
								}
							break;	
	
											
				
					}
				chance++;		

			}	

			cout<<"\n You have finished all your lives "<<endl;
		  	cout<<" \n Do you want to play again? (y/n) :";		
			cin>>answerL;
			
			if(answerL=='n')
			{
				cout<<"\n thanks for playing See You Soon";
				cin.get();
				return End();
	    	}
	
					
		}while(answerL=='y'||answerL=='Y');	
	
	

}

// Screen finish the Game
int GameOver(){
	
		system("cls");
	 	system("color 4f");
		gotoxy(20,3);
	    color(11);
	    cout<<"\t CONGRATULATION!! You have finished your Journey  ! ";
	    
	    //Logic that created the animation
	    for(int i=0;i<=9;i++)
	    {
	        color(12);
	        gotoxy(25, 14-i);
	        cout<<"*";
	        Sleep(70);
	    }
	    for(int i=0;i<=31;i++)
	    {
	        color(14);
	        gotoxy(25+i,5);
	        cout<<"-";
	        Sleep(70);
	    }
	    for(int i=0;i<=10;i++)
	    {
	        color(12);
	        gotoxy(57,5+i);
	        cout<<"*";
	        Sleep(70);
	    }
	    for(int i=0;i<=30;i++)
	    {
	        color(14);
	        gotoxy(55-i,15);
	        cout<<"-";
	        Sleep(70);
	    }
// Text into the box 
gotoxy(31,7);
	    color(10);
	    cout<<"\t  YOU CAN  ";
	    Sleep(80);
	    gotoxy(31,9);
	    cout<<"\t  SAY TAHT ";
	    Sleep(80);
	    gotoxy(30,11);
	    cout<<"\t   I AM  ";
	    Sleep(80);
	    gotoxy(27,13);
	    cout<<"THE CLEVEST GUY IN THE WOLRD";
	    
	    //Logic ends
	    
	    gotoxy(20,20);
	    color(11);
	    cout<<"\n \t\t\t\t GAME OVER " <<endl;
	    system("\t\t\t pause");
	    return Menu(); 
	  
	
}

