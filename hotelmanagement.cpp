#include<iostream>
using namespace std;
int main(){
    int quant;
    int choice;
    //quantity of item
    int Qroom=0,Qpasta=0,Qburger=0,Qmeggi=0;
    //sold room
    int sroom=0,spasta=0,sburger=0,smeggi=0;
    //total price of item;
    int total_room=0,total_pasta=0,total_burger=0,total_meggi=0;
    cout<<"\n\t Quantity of item"<<endl;
    cout<<"quantity or available  of room"<<endl;
    cin>>Qroom;
    cout<<"quantity or available  of pasta"<<endl;
    cin>>Qpasta;
    cout<<"quantity or available  of burger"<<endl;
    cin>>Qburger;
    cout<<"quantity or available  of meggi"<<endl;
    cin>>Qmeggi;

    m:
    cout<<"\n\t\t\t select the item from the menu"<<endl;
    cout<<"\n1)Room"<<endl;
    cout<<"2)pasta"<<endl;
    cout<<"3)burger"<<endl;
    cout<<"4)meggi"<<endl;
    cout<<"5)information about sales and collection"<<endl;
    cout<<"6)Exit"<<endl;

    cout<<"Enter your choice"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
            cout<<"Enter the Room you want"<<endl;
            cin>>quant;
            if(Qroom-sroom>=quant){
                sroom=sroom+quant;
                total_room=total_room+quant*1200;
                cout<<"\n\n\t\t"<<quant<<"Room/Room allocated to you"<<endl;
            }
            else
                cout<<"\n\n\t"<<Qroom-sroom<<"only room available"<<endl;
            break;

            case 2:
            cout<<"Enter the pasta you want"<<endl;
            cin>>quant;
            if(Qpasta-spasta>=quant){
                spasta=spasta+quant;
                total_pasta=total_pasta+quant*120;
                cout<<"\n\n\t\t"<<quant<<"pasta order by you"<<endl;
            }
            else
                cout<<"\n\n\t"<<Qpasta-spasta<<"only pasta available"<<endl;
            break;

            case 3:
            cout<<"Enter the burger you want"<<endl;
            cin>>quant;
            if(Qburger-sburger>=quant){
                sburger=sburger+quant;
                total_burger=total_burger+quant*100;
                cout<<"\n\n\t\t"<<quant<<"burger order by you"<<endl;
            }
            else
                cout<<"\n\n\t"<<Qburger-sburger<<"only burger available"<<endl;
            break;

            case 4:
            cout<<"Enter the meggi you want"<<endl;
            cin>>quant;
            if(Qmeggi-smeggi>=quant){
                smeggi=smeggi+quant;
                total_meggi=total_meggi+quant*80;
                cout<<"\n\n\t\t"<<quant<<"meggi order by you"<<endl;
            }
            else
                cout<<"\n\n\t"<<Qmeggi-smeggi<<"only meggi available"<<endl;
            break;
            case 5:
            cout<<"\n\n\t Detail of sale and collection"<<endl;
            cout<<"\n\n\t quantity of room"<<Qroom<<endl;
            cout<<"\n\n\t sale out room"<<sroom<<endl;
            cout<<"\n\t availabel room"<<quant-sroom<<endl;
            cout<<"\n\t total room collection of the day"<<total_room;

            cout<<"\n\n\t Detail of sale and collection"<<endl;
            cout<<"\n\n\t quantity of pasta"<<Qpasta<<endl;
            cout<<"\n\n\t sale out pasta"<<spasta<<endl;
            cout<<"\n\t availabel pasta"<<Qpasta-spasta<<endl;
            cout<<"\n\t total pasta collection of the day"<<total_pasta;

            cout<<"\n\n\t Detail of sale and collection"<<endl;
            cout<<"\n\n\t quantity of burgerr"<<Qburger<<endl;
            cout<<"\n\n\t sale out burger"<<sburger<<endl;
            cout<<"\n\t availabel burger"<<Qburger-sburger<<endl;
            cout<<"\n\t total burger collection of the day"<<total_burger;

            cout<<"\n\n\t Detail of sale and collection"<<endl;
            cout<<"\n\n\t quantity of meggi"<<Qmeggi<<endl;
            cout<<"\n\n\t sale out meggi"<<smeggi<<endl;
            cout<<"\n\t availabel meggi"<<Qmeggi-smeggi<<endl;
            cout<<"\n\t total meggi collection of the day"<<total_meggi;
            case 6:
                exit(0);

                default:
                cout<<"please select from the menu"<<endl;
    }    
    goto m;

}