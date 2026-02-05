#include<iostream>
#include<ctime>
using namespace std;

void drawboard(char *spaces);
void playermove(char *space, char player);
void computermove(char *space, char computer);
bool checkwinner(char *space, char player, char computer);
bool checktie(char *space);


int main()
{
    char spaces[9]= {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
    char player= 'X';
    char computer= 'o';
    bool running = true;

    drawboard(spaces);
    while(running)
    {
        playermove(spaces,player);
        drawboard(spaces);

        if(checkwinner(spaces,player,computer))
        {
            running = false;
            break;
        }
        else if(checktie(spaces))
        {
           running = false;
           break;


        }
        cout<<endl;
        cout<<"----------------------";
        cout<<endl;


        computermove(spaces, computer);
        drawboard(spaces);

    }

   cout<< "Thanks for playing ";
    return 0;
}

void drawboard(char *spaces)
{

    // printf 0,1,2 space
    cout<< "     |     |     "<< '\n';
    cout<< "  "<<spaces[0]<< "  |  " << spaces[1]<< "  |  " <<spaces[2]<< "  "<<'\n';
    cout<< "_____|_____|_____"<< '\n';
    // print 3,4,5 space
    cout<< "     |     |     "<< '\n';
    cout<< "  "<<spaces[3]<< "  |  " << spaces[4]<< "  |  " <<spaces[5]<< "  "<<'\n';
    cout<< "_____|_____|_____"<< '\n';
    // print 6,7,8
    cout<< "     |     |     "<< '\n';
    cout<< "  "<<spaces[6]<< "  |  " << spaces[7]<< "  |  " <<spaces[8]<< "  "<<'\n';

   // cout<<'\n';

}

void playermove(char *space, char player)
{
    int number;
    do
    {
        cout<< "Enter a spot to place a marker (1-9)  :  ";
        cin>>number;
        number--;
        if(space[number]==' ')
        {
            space[number]=player;
            break;
        }

    }
    while(!number>0 || !number<8);


}
void computermove(char *spaces, char computer)
{
    int number;
    srand(time(0));
    while(true)
    {
        number=rand()%9;
         if(spaces[number]==' '){
            spaces[number]=computer;
            break;
         }
    }

}
bool checkwinner(char *spaces, char player, char computer)
{
    // for row
    if((spaces[0]!=' ')&& (spaces[0]==spaces[1]) && (spaces[1]==spaces[2])){
        spaces[0]==player? cout<< "----You Win---- \n" : cout<< " You lose ! ";
    }

   else if((spaces[3]!=' ')&& (spaces[3]==spaces[4]) && (spaces[4]==spaces[5])){
        spaces[3]==player? cout<< "----You Win---- \n" : cout<< " You lose ! ";
    }
    else if((spaces[6]!=' ')&& (spaces[6]==spaces[7]) && (spaces[7]==spaces[8])){
        spaces[3]==player? cout<< "----You Win---- \n" : cout<< " You lose ! ";
    }
    // for col
    else if((spaces[0]!=' ')&& (spaces[0]==spaces[3]) && (spaces[3]==spaces[6])){
        spaces[0]==player? cout<< "----You Win---- \n" : cout<< " You lose ! ";
    }
    else if((spaces[1]!=' ')&& (spaces[1]==spaces[4]) && (spaces[4]==spaces[7])){
        spaces[1]==player? cout<< "----You Win---- \n" : cout<< " You lose ! ";
    }
    else if((spaces[2]!=' ')&& (spaces[2]==spaces[5]) && (spaces[5]==spaces[8])){
        spaces[2]==player? cout<< "----You Win---- \n" : cout<< " You lose ! ";
    }
    else if((spaces[0]!=' ')&& (spaces[0]==spaces[4]) && (spaces[4]==spaces[8])){
        spaces[0]==player? cout<< "----You Win---- \n" : cout<< " You lose ! ";
    }
    else if((spaces[2]!=' ')&& (spaces[2]==spaces[4]) && (spaces[4]==spaces[6])){
        spaces[2]==player? cout<< "----You Win---- \n" : cout<< " You lose ! ";
    }
    else
    {
    return false;
    }

    return true;
}
bool checktie(char *spaces)
{
    for(int i=0; i<9; i++)
    {
        if(spaces[i]== ' '){
            return false;
        }
    }
    cout<< "----This match is draw----\n";
    return true;


    return 0;
}

