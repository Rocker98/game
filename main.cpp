#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstdio>
#include <string>


using namespace std;

int main()
{
    char again;
    do
    {
    int i=0;
    int x=0,y=0;
    while(i<2)						//індикатор 'i' потрубно змінювати тут і в рядочку 73 одночасно
        {
        int counter=0;
        cout<<"Round "<<i+1<<endl;
        cout<<"Enter rock, paper or scissors"<<endl;
        string choice;
        int choice2;

        do
        {
        cin>>choice;
        if (choice=="rock"){ choice2=1; counter++;}
        else if(choice=="paper") { choice2=2; counter++;}
        else if(choice=="scissors") { choice2=3; counter++;}
        else puts("Error!!! Enter right! 	(rock,paper,scissors)");
        }
        while(counter==0);

        int cpuCh;
        srand(time(NULL));
        cpuCh=1+rand()%3;
        switch (cpuCh)
        {
            case 1:cout<<"Computer choice rock\n";break;
            case 2:cout<<"Computer choice paper\n"; break;
            case 3:cout<<"Computer choice scissors\n"; break;
        }

        if(choice2==cpuCh)
        cout<<"Draw!";
        else if(choice2==1&&cpuCh==3)
        {
            cout<<"You win!";
            x++;
        }
        else if(choice2==3&&cpuCh==1)
        {
            cout<<"You lose!";
            y++;
        }
        else if(choice2>cpuCh)
        {
            cout<<"You win";
            x++;
        }
        else
        {
           cout<<"You lose!";
            y++;
        }
        puts("");
        puts("");
        cout<<"---------------score is "<<x<<":"<<y<<"-----------------"<<endl;
        i++;
        puts("");puts("");

        if(i==2)
        {
        cout<<"Press '1' to continue or '0' to exit"<<endl;
        cin>>again;
        }
        }
        system("pause");
        system("cls");
    }
    while(again!='0');
    return 1;
}
