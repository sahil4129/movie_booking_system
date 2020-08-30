#include <iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;
vector<vector<int>>showtime(3);
vector <vector <int >>seats(9);
queue <string>name_queue;
string s1 = "F";
string s2 = "A";
int total=0;
void booking (int , int ,int );
void bookticket();
void welcome();
void  admin ()
{
    int f6= total/160;
    cout<<"hello";
    cout<<" Welcome Admin"<<endl<<endl;
    cout<<"All the seats status of movie"<<endl<<endl;
    cout<<" 1 : Superman2"<<" || 2 : Kalank "<<" || 3 : Khichdi 2";
    cout<<"Total No of Tickets sold"<<endl<<endl;
    cout<<" ";
    cout<<f6<<endl<<endl;
    cout<<"Total Earnings"<<endl<<endl;
    cout<<" ";
    cout<<total;


}

void admin_bool()
{
                string s1,s2;
                d:
                cout<<" Enter Username"<<endl<<endl;
                cout<<" ";
                cin>>s1;
                cout<<" Enter Password"<<endl<<endl;
                cout<<" ";
                cin>>s2;

                if ( s1=="admin" && s2 =="admin12")
                    {
                        admin ();
                    }
                else
                    {
                      cout<<" Wrong Username and password"<<endl<<endl;
                        goto d;
                    }
}

bool paid(int y1)
{
     int r3;
     bool pay =false;
     cout<<endl;
     cout<<" Total Amount to be paid as Ticket price (160/per seat)"<<endl<<endl;
      cout<<" ";
      cout<<  y1*160<<endl<<endl;
     cout<< " Press 1 for Payment Done"<<endl<<endl;
     cout<< " Press 2 for Payment Not Done"<<endl<<endl;
     cout<<" ";
     cin>>r3;

     if (r3 ==1)
     {

         pay= true;
         total = y1*160;
     }
     return pay;
}

bool if_available(int w1, int o1,int e1)
{
    bool avl = true;
  for (int i=o1;i<e1;i++)
   {

        if (seats[w1][i]==1)
        {

            avl = false;
            cout<<" No seats Available"<<endl<<endl;
            cout<<" Redirect to Main Menu"<<endl<<endl;
            welcome();
        }
        o1++;
    }
    return avl;
}
void  allshows(int r)
{

    int noofseats=0;
    int start=0;
    int time=0;
    startagain:
       cout<<" Show timing are "<<endl<<endl;
        for (int j=0;j<3;j++)
        {
            string s ="A";
            if (j%2!=0)
            {
               s = "P";

            }
            cout<<"||  ";
             cout<<j+1<<" -> "<<showtime[r][j]<<":"<<"30 "<<s<<"M  ";

        }
        cout<<endl<<endl;
        cout<<" Select timings"<<endl<<endl;
        cout<<" ";
        cin>>time;
        cout<<endl<<endl;
        cout<<" F -> Free Seats"<<endl;
        cout<<" A -> Not Available Seats"<<endl<<endl;
        cout<<"---------------------------------------------------------------"<<endl<<endl;
        for (int j=0;j<30;j++)
         {
            if (j%10==0&& j!=0)
            {

                cout<<endl<<endl;            }
              if(seats[time][j] ==0)
              {
                  cout<<" "<<j+1<<":"<<s1<<"  ";
              }
              else
              {

                  cout<<" "<<j+1<<":"<<s2<<"   ";
              }
         }
         cout<<endl<<endl;
         cout<<"-------------------------------------------------------------"<<endl<<endl;

         cout<<" Select no of seats "<<endl<<endl;
         cout<<" ";
         cin>>noofseats;
        cout<<endl;
         cout<<" Starting Seat postion"<<endl<<endl;
         cout<<" ";
         cin>>start;
         cout<<endl<<endl;

        if ( noofseats+start >31)
        {
           cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl<<endl;
            cout<<" Seats Not Available"<<endl<<endl;
            cout<<" Select Seats Again"<<endl<<endl;
            cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl<<endl;
            goto startagain;
        }


        booking(time,start-1,noofseats);


}
void booking(int w, int o, int e)
{



    if (!name_queue.empty())
    {
        if (if_available(w,o,e))
        {
            if (paid(e))
            {

              for (int i=0;i<e;i++)
              {
                  static int j=o;


                  seats[w][j]=1;
                  j++;
              }
            }
           cout<<endl<<endl;
           cout<<"************************"<<endl<<endl;
           cout<<" Successfully Completed"<<endl<<endl;
           cout<<"************************"<<endl<<endl;
           cout<<"~~~~~~~~~~~~~~~~~~"<<endl<<endl;
           cout<<" || Details ||"<<endl<<endl;
           cout<<"~~~~~~~~~~~~~~~~~~"<<endl<<endl;
           cout<<" Name"<<" -> ";
           cout<<name_queue.front()<<endl<<endl;
           cout<<" No of Tickets"<<endl<<endl;
           cout<<" ";
           cout<<e<<endl<<endl;

           cout<<" Seats no."<<endl<<endl;
           for (int i =0 ; i<e;i++)
           {
                cout<<" ";
               cout<<o<<" ";
              o++;
           }
          cout<<endl<<endl;
          name_queue.pop();
    }
}
cout<<" Redirect to Main Menu"<<endl<<endl;
welcome();
}
void welcome()
{

   int f;
    cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<< endl<<endl;
    cout << " Welcome to Movie TIcket system" << endl<<endl;

    cout<<" Choice one of the options below"<<endl<<endl;
    cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<< endl<<endl;
    cout<< " 1.Book Ticket"<<endl<<endl;
    cout<< " 2.Admin Block"<<endl<<endl;
    cout<<" ";
    cin>>f;

    switch(f)
   {

      case 1:
         bookticket();
         break;
      case 2:
          admin_bool();
          break;
      default :
         cout<<"wrong choice"<<endl;
   }

}

 void bookticket()
 {
     int e;
     string name;
      cout<<" Choice Movie"<<endl;
      cout<<" 1 : Superman2"<<endl;
      cout<<" 2 : Kalank "<<endl;
      cout<<" 3 : Khichdi 2"<<endl;
      cout<<" ";
     cin>>e;

    cout<<" Enter Your name"<<endl;
    cout<<" ";
    cin>>name;
    name_queue.push(name);
     allshows(e-1);


 }
int main()
{
  int c=1;
    for (int i =0; i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            showtime[i].push_back(c);
            c++;
        }
        c++;
    }
     for (int i =0; i<9;i++)
    {
        for (int j=0;j<30;j++)
        {
            seats[i].push_back(0);
        }
    }


    welcome();

    return 0;
}
