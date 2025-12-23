#include <iostream>

using namespace std;

int main()
{
    int quant;
    int choice;
    //Quantity
    int Qrooms=0, Qrice=0, Qbeans=0, Qbread=0, Qsoup=0, Qchicken=0;
    //food items sold
    int Srooms=0, Srice=0, Sbeans=0, Sbread=0, Ssoup=0, Schicken=0;
    //Total price of items
    int Total_rooms=0, Total_rice=0, Total_beans=0, Total_bread=0, Total_soup=0, Total_chicken=0;

    cout<<"\n\t Quantity of items we have";
    cout<<"\n Rooms available: ";
    cin>>Qrooms;
    cout<<"\n Quantity of rice: ";
    cin>>Qrice;
    cout<<"\n Quantity of beans: ";
    cin>>Qbeans;
    cout<<"\n Quantity of bread: ";
    cin>>Qbread;
    cout<<"\n Quantity of soup: ";
    cin>>Qsoup;
    cout<<"\n Quantity of chicken: ";
    cin>>Qchicken;

    m:
    cout<<"\n\t\t\t Please select from the menu options ";
    cout<<"\n\n1) Rooms";
    cout<<"\n2) Rice";
    cout<<"\n3) Beans";
    cout<<"\n4) Bread";
    cout<<"\n5) Soup";
    cout<<"\n6) Chicken";
    cout<<"\n7) Information regarding sales and collection";
    cout<<"\n8) Exit";

    cout<<"\n\n Please enter your choice! ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"\n\n Enter the number of rooms you want: ";

            cin>>quant;
            if(Qrooms-Srooms >=quant)
            {
                Srooms=Srooms+quant;
                Total_rooms= (Total_rooms+quant*1200);
                cout<<"\n\n\t\t"<<quant<<" room/rooms have been alloted to you!";
            }
            else
                cout<<"\n\tOnly "<<Qrooms-Srooms<<"Rooms remaining in the hostel";
                break;

                case 2:
            cout<<"\n\n Enter Rice quantity: ";

            cin>>quant;
            if(Qrice-Srice >=quant)
            {
                Srice=Srice+quant;
                Total_rice= (Total_rice+quant*250);
                cout<<"\n\n\t\t"<<quant<<" Rice is the order!";
            }
            else
                cout<<"\n\tOnly "<<Qrice-Srice<<"Rice remaining in the hostel";
                break;

                case 3:
            cout<<"\n\n Enter Beans quantity: ";

            cin>>quant;
            if(Qbeans-Sbeans >=quant)
            {
                Sbeans=Sbeans+quant;
                Total_beans= (Total_beans+quant*500);
                cout<<"\n\n\t\t"<<quant<<" Beans is the order!";
            }
            else
                cout<<"\n\tOnly "<<Qbeans-Sbeans<<"Beans remaining in the hostel";
                break;

                case 4:
            cout<<"\n\n Enter Bread quantity: ";

            cin>>quant;
            if(Qbread-Sbread >=quant)
            {
                Sbread=Sbread+quant;
                Total_bread= (Total_bread+quant*500);
                cout<<"\n\n\t\t"<<quant<<" Breadd is the order!";
            }
            else
                cout<<"\n\tOnly "<<Qbread-Sbread<<"Bread remaining in the hostel";
                break;

                case 5:
            cout<<"\n\n Enter Soup quantity: ";

            cin>>quant;
            if(Qsoup-Ssoup >=quant)
            {
                Ssoup=Ssoup+quant;
                Total_soup= (Total_soup+quant*500);
                cout<<"\n\n\t\t"<<quant<<" Soup is the order!";
            }
            else
                cout<<"\n\tOnly "<<Qsoup-Ssoup<<"Soup remaining in the hostel";
                break;

                case 6:
            cout<<"\n\n Enter Chicken quantity: ";

            cin>>quant;
            if(Qchicken-Schicken >=quant)
            {
                Schicken=Schicken+quant;
                Total_chicken= (Total_chicken+quant*500);
                cout<<"\n\n\t\t"<<quant<<" Chicken is the order!";
            }
            else
                cout<<"\n\tOnly "<<Qchicken-Schicken<<"Chicken remaining in the hostel";
                break;

                case 7:
            cout<<"\n\t Details of sales and collection ";
            cout<<"\n\n Number of rooms we had : "<<Qrooms;
            cout<<"\n\n Number of rooms we gave for rent "<<Srooms;
            cout<<"\n\n Remaining rooms"<<Qrooms-Srooms;
            cout<<"\n\n Total rooms collection for the day: "<<Total_rooms;

            cout<<"\n\n Number of Rice we had : "<<Qrice;
            cout<<"\n\n Number of Rice sold "<<Srice;
            cout<<"\n\n Remaining Rice"<<Qrice-Srice;
            cout<<"\n\n Total Rice collection for the day: "<<Total_rice;

            cout<<"\n\n Number of Beans we had : "<<Qbeans;
            cout<<"\n\n Number of Beans sold "<<Sbeans;
            cout<<"\n\n Remaining Beans; "<<Qbeans-Sbeans;
            cout<<"\n\n Total Beans collection for the day: "<<Total_beans;

            cout<<"\n\n Number of Bread we had: "<<Qbread;
            cout<<"\n\n Number of Bread sold: "<<Sbread;
            cout<<"\n\n Remaining Bread: "<<Qbread-Sbread;
            cout<<"\n\n Total Bread collection for the day: "<<Total_bread;

            cout<<"\n\n Number of Soup we had : "<<Qsoup;
            cout<<"\n\n Number of Soup sold "<<Ssoup;
            cout<<"\n\n Remaining Soup: "<<Qsoup-Ssoup;
            cout<<"\n\n Total Soup collection for the day: "<<Total_soup;

            cout<<"\n\n Number of Chicken we had : "<<Qchicken;
            cout<<"\n\n Number of Chicken sold: "<<Schicken;
            cout<<"\n\n Remaining Chicken: "<<Qchicken-Schicken;
            cout<<"\n\n Total Chicken collection for the day: "<<Total_chicken;

            cout<<"\n\n\n Total Collection for the day: "<<Total_rooms+Total_rice+Total_beans+Total_bread+Total_soup+Total_chicken;

                case 8:
                    exit(0);

                default:
                    cout<<"\n Please select the numbers mentioned above!";
                    break;

    }
    goto m;
}
