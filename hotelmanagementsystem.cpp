#include <iostream>
using namespace std;
int  main(){
    int quant;
    int choice;
    //Quantities of rooms,pasta ,noodles that we have
    int Qrooms=0 , Qpasta=0,Qburger=0,Qnoodles=0,Qshake=0,Qchicken=0;
    //SOLD of variable that we sold
    int Srooms=0 , Spasta=0,Sburger=0,Snoodles=0,Sshake=0,Schicken=0;
    // Total Prizes
    int Total_rooms=0 , Total_pasta=0,Total_burger=0,Total_noodles=0,Total_shake=0,Total_chicken=0;
    //create a list of rooms quantities that we have

    cout<<"\n\t Quantities of items we have :";
    cout<<"\n Rooms available";
    cin>>Qrooms;


    cout<<"\n Quantities of pasta :";
    cin>>Qpasta;

    cout<<"\n Quantity of burger:";
    cin>>Qburger;

    cout<<"\n Quantities of noodles:";
    cin>>Qnoodles;

    cout<<"\n Quantity of shakes: ";
    cin>>Qshake;

    cout<<"\n Quatity of chicken-roll:";
    cin>>Qchicken;


    cout<<"\n\t\t\t Please select from the Menu Options:";
    cout<<"\n\n1) Rooms:";
    cout<<"\n2) Pasta";
    cout<<"\n3) Burger";
    cout<<"\n4) Noodles";
    cout<<"\n5) Shakes";
    cout<<"\n6) Chicken-roll";
    cout<<"\n7) Information regarding sales and collection ";
    cout<<"\n8) Exit";

    cout<<"\n\n Please Enter Your Choice!";
    cin>>choice;


    // select perticular no that the perticular case will execute
    switch(choice){
        case 1:
            cout<<"\n\n Enter the number of rooms you want: ";
            cin>>quant;
            if(Qrooms-Srooms >=quant){
                Srooms=Srooms+quant;
                Total_rooms=Total_rooms+quant*1200;
                cout<<"\n\n\t"<<quant<<"Rooms have been alloted to you";
            }
            else{
                cout<<"\n\t Only"<<Qrooms-Srooms<<"Rooms remaining in hotel ";
                break;
            }
        case 2:
            cout<<"\n\n Enter Pasta Quantity: ";
            cin>>quant;
            if(Qpasta-Spasta >=quant){
                Spasta=Spasta+quant;
                Total_pasta=Total_rooms+quant*250;
                cout<<"\n\n\t"<<quant<<"Pasta is the order!";
            }
            else{
                cout<<"\n\t Only"<<Qpasta-Spasta<<"Pasta remaining in hotel ";
                break;
            }
        case 3:
            cout<<"\n\n Enter Burger Quantity: ";
            cin>>quant;
            if(Qburger-Sburger >=quant){
                Sburger=Sburger+quant;
                Total_burger=Total_burger+quant*120;
                cout<<"\n\n\t"<<quant<<"Burger is the order!";
            }
            else{
                cout<<"\n\t Only"<<Qburger-Sburger<<"Burger remaining in hotel ";
                break;
            }
        case 4:
            cout<<"\n\n Enter Noodle Quantity: ";
            cin>>quant;
            if(Qnoodles-Snoodles >=quant){
                Snoodles=Snoodles+quant;
                Total_noodles=Total_noodles+quant*250;
                cout<<"\n\n\t"<<quant<<"Noodles is the order!";
            }
            else{
                cout<<"\n\t Only"<<Qnoodles-Snoodles<<"Noodles remaining in hotel ";
                break;
            }
        case 5:
            cout<<"\n\n Enter Shakes Quantity: ";
            cin>>quant;
            if(Qshake-Sshake >=quant){
                Sshake=Sshake+quant;
                Total_shake=Total_shake+quant*140;
                cout<<"\n\n\t"<<quant<<"Shakes is the order!";
            }
            else{
                cout<<"\n\t Only"<<Qshake-Sshake<<"Shakes remaining in hotel ";
                break;
            }
        case 6:
            cout<<"\n\n Enter Chicken-roll Quantity: ";
            cin>>quant;
            if(Qchicken-Schicken >=quant){
                Schicken=Schicken+quant;
                Total_chicken=Total_chicken+quant*150;
                cout<<"\n\n\t"<<quant<<"Chicken Roll is the order!";
            }
            else{
                cout<<"\n\t Only"<<Qchicken-Schicken<<"Chicken Roll remaining in hotel ";
                break;
            }


            //how many money we have collected and ramaning foods

            case 7:
            cout<<"Details of sales and collection ";
            //Display of no of food we have and remaining food and total room collection of the day
            cout<<"\n\n Number of rooms we had: "<<Qrooms;
            cout<<"\n\n Number of rooms we we gave fo rent "<<Srooms;
            cout<<"\n\n Remaining room"<<Qrooms-Srooms;
            cout<<"\n\n Total rooms collection for the day"<<Total_rooms;


            cout<<"\n\n Number of Pastas we had: "<<Qpasta;
            cout<<"\n\n Number of Pastas we sold"<<Spasta;
            cout<<"\n\n Remaining "<<Qpasta-Spasta;
            cout<<"\n\n Total Pasta collection for the day"<<Total_pasta;

             cout<<"\n\n Number of Burgers we had: "<<Qburger;
            cout<<"\n\n Number of Burgers we sold"<<Sburger;
            cout<<"\n\n Remaining "<<Qburger-Sburger;
            cout<<"\n\n Total Burger collection for the day"<<Total_burger;

             cout<<"\n\n Number of Noodles we had: "<<Qnoodles;
            cout<<"\n\n Number of Noodles we sold"<<Snoodles;
            cout<<"\n\n Remaining "<<Qnoodles-Snoodles;
            cout<<"\n\n Total Noodle collection for the day"<<Total_noodles;

            cout<<"\n\n Number of Shakes we had: "<<Qshake;
            cout<<"\n\n Number of Shakes we sold"<<Sshake;
            cout<<"\n\n Remaining "<<Qshake-Sshake;
            cout<<"\n\n Total Shake collection for the day"<<Total_shake;


            cout<<"\n\n Number of Chicken Roll we had: "<<Qchicken;
            cout<<"\n\n Number of Chicken Roll we sold"<<Schicken;
            cout<<"\n\n Remaining "<<Qchicken-Schicken;
            cout<<"\n\n Total Chicken Roll collection for the day"<<Total_chicken;


            case 8:
                exit(0);
                default:
                cout<<"\n Please select any options";


        
        

    }

    count<<"Total collection of the day: "<<Total_rooms+Total_burger+Total_shake+Total_noodles+Total_pasta+Total_chicken;


    



}