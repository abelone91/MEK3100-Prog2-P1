//wedding planner 

#include <iostream>
#include <math.h> 
using namespace std;

int main() {
    
    int option;
    int number_of_guests= 0; 
    int inv_cards = 0;
    int nr_sweets= 0; 
    int nr_tables= 0;
    const int ppcc = 6;
    const int ppcw = 2; 
    int coke_cases = 0;
    int water_cases= 0;
    int inv_card_cost= 0;
    int coke_cost= 0; 
    int water_cost= 0;
    int total_bev= 0;

    cout<<"\n\t Wedding Planning Assistant is pleased to be at your service!";
    
    meny:
    cout<<"\n\n1. Enter number of invited guests.";
    cout<<"\n2. Determine the number of invitation cards and sweets";
    cout<<"\n3. Determine the number of tables needed";
    cout<<"\n4. Determine drinks order";
    cout<<"\n5. Cost of invitation cards";
    cout<<"\n6. Cost of drinks";
    cout<<"\n7. Display all information";
    cout<<"\n8. Quit";

    cout<<"\n\n Please Enter your choice here: ";
    cin>> option;
  //filter out non valid integers 

  switch(option){


//nr of guests 
    case 1: 
        cout<<"\n\n Enter number of invited guests: ";
        cin>> number_of_guests; 
        break;

//nr of guests invitation cards and sweets 
    case 2:

        if (!number_of_guests){
            cout<<"\n !!!You need to run option 1. You will not be able to use this option otherwise!!!"; 
            break;  
        }

        else{

            inv_cards = number_of_guests/2; 
            nr_sweets = number_of_guests * 1.2;
            cout<<"\n Number of invitation cards: " << inv_cards; 
            cout<<"\n Number of sweets: " << nr_sweets;
            break;  
        }

//nr of tables  
    case 3:
        
        if (!number_of_guests){

            cout<<"\n !!!!!!You need to run option 1. You will not be able to use this option otherwise!!!!!!"; 
            break;
            
        }
        else if (number_of_guests%6 == 0 ){

            nr_tables = number_of_guests/6; 
            cout<<"\n Number of tables: " << nr_tables;
            break;

        }

        else if (number_of_guests <= 6){

            nr_tables = 1;
            cout<<"\n Number of tables: " << nr_tables;
            break;

        }

        else {
            nr_tables = number_of_guests/6;
            nr_tables = floor(nr_tables)+1;
            cout<<"\n Number of tables: " << nr_tables; 
            break;
        }

    //nr of coke & water
    case 4: 
        if (!number_of_guests){

            cout<<"\n !!!You need to run option 1. You will not be able to use this option otherwise!!!"; 
            break;
        }
        else {
            coke_cases = floor(number_of_guests/ppcc);
            water_cases = ceil(number_of_guests/ppcw); 

            cout<<"\n nr of coke cases you will need is: " << coke_cases; 
            cout<<"\n nr of water cases you will need is: " << water_cases;
            break;
        }

    
    case 5:

        if (!number_of_guests){
            cout<<"\n !!!Enter the number of invited guests in option 1 followed by the determining the nr of invite cards in option 2. You will not be able to use this option otherwise!!!"; 
            break;
        }

        else if(!inv_cards){
            cout<<"\n !!! you need to run option 2. You will not be able to use this option otherwise!!!"; 
            break;
        }

        else {
            inv_card_cost = inv_cards * 200; 
            cout<<"\n Invitation cards will cost: " << inv_card_cost; 
            break;
        }

    case 6:

        if (!number_of_guests){
            cout<<"\n !!!You need to run options 1 and 4. You will not be able to use this option otherwise!!!"; 
            break;
        }

        else if(!inv_card_cost){
            cout<<"\n !!!you need to run option 4. You will not be able to use this option otherwise!!!"; 
            break;
        }
        else {
            coke_cost = coke_cases * 30; 
            water_cost = water_cases * 20; 
            total_bev = coke_cost + water_cost; 

            cout<<"\n Cost of drinks: " << coke_cost <<" NOK for coke and " << water_cost <<" NOK for water"; 
            break;
        }     
    case 7:
    
        if (!number_of_guests || !inv_cards || !coke_cost){
            cout<<"\n !!!You need to run options 1 to 6. You will not be able to use this option otherwise!!!"; 
            break;
        }


         else {
            cout<<"\n Needs: " <<inv_cards <<" invitation cards, " << nr_sweets <<" sweets, "<<nr_tables<<"tables, "<< coke_cases <<" coke cases, "<<water_cases <<" water cases.";
            cout<<"\n Cost of invitation cards:" << inv_card_cost<<" NOK.";
            cout<<"\n Cost of drinks: " << coke_cost <<" NOK for coke and " << water_cost <<" NOK for water"<<", a total of "<<total_bev<<" NOK.";
            break;  
         }

    case 8: 
        exit(0);

    default: 
        cout<<"!!!Please enter a vaild input!!!";

  }
  goto meny;

  }
