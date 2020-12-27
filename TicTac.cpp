#include <iostream>

using namespace std;

    char arr[3][3] = {{'0', '1', '2'}, {'3', '4', '5' }, {'6','7','8'}};
    int REPLACE();
    int INVALID();
    int CHECKWIN();
int main()
{
bool repeat;
char cross = 'X';
char cross2 = 'O';
 int choice1;
 int choice2;
  int player = 1;

cout << "WELCOME TO TIC TAC TOE" << endl;


   //GAME BOARD:
   for(int row = 0; row < 3; row++)
   {
       for(int column = 0; column < 3; column++)
       {
           cout << arr[row][column] << "  ";
       }
       cout<<endl;
   };




//loop through these two choices until a winner is decided
while(CHECKWIN() != true) {

cout<< "                   " << endl;
cout<< "                   " << endl;



cout << "It is X turn" << endl;

cin >> choice1;


switch(choice1)
{
    case 0:
        {
            if(arr[0][0] != 'O'){
choice1 = arr[0][0];
arr[0][0] = cross;
REPLACE();
            }
            else if(arr [0][0] == 'O')
            {INVALID();}
break;
        }


    case 1:
{
    if(arr[0][1] != 'O'){
choice1 = arr[0][1];
arr[0][1] = cross;
REPLACE();
    }
    else if(arr[0][1] == 'O' )
    {
       INVALID();
    }
    break;

}


    case 2:

{
    if(arr[0][2] != 'O')
    {


choice1 = arr[0][2];
arr[0][2] = cross;
REPLACE();
    }
    else if(arr[0][2] == 'O')
    {
    INVALID();
    }
    break;

}



    case 3:
{
    if(arr[1][0] != '0')
    {


choice1 = arr[1][0];
arr[1][0] = cross;
REPLACE();
    }
    else if(arr[1][0] == 'O')
    {
        INVALID();
    }
    break;

}


    case 4:
{
    if (arr[1][1] != 'O'){
choice1 = arr[1][1];
arr[1][1] = cross;
REPLACE();
    }
    else if(arr[1][1] == 'O')
    {
     INVALID();
    }


    break;

}


    case 5:
{
    if(arr[1][2] != 'O')
{choice1 = arr[1][2];
arr[1][2] = cross;
REPLACE();
}
else if(arr[1][2] == 'O')
{
    INVALID();
}
    break;

}


    case 6:
{
    if(arr[2][0] != 'O')
    {


choice1 = arr[2][0];
arr[2][0] = cross;
REPLACE();
    break;
    }
    else if(arr[2][0] == 'O')
    {
        INVALID();
    }

}


    case 7:
        {
        if(arr[2][1] != 'O')
        {


choice1 = arr[2][1];
arr[2][1] = cross;
REPLACE();
        }
        else if(arr[2][1] == 'O')
        {
            INVALID();
        }
    break;

}


case 8:
    {
        if(arr[2][2] != 'O')
        {


choice1 = arr[2][2];
arr[2][2] = cross;
REPLACE();
        }
        else if(arr[2][2] == 'O')
        {
            INVALID();
        }

break;
    }
default:

        cout << "invalid";

}
cout<< "                   " << endl;
cout<< "                   " << endl;
cout << "Now it's O turn" << endl; //make an if statement in order to check if it does switch
cin>> choice2;
switch(choice2)
{


case 0:
    {


    if(choice2 != 'X'&& arr[0][0]!= 'X')
    {
choice1 = arr[0][0];
arr[0][0] = cross2;
REPLACE();
    }
    else if(choice2 == 0 && arr[0][0] == 'X')
    {
        INVALID();
    }
    break;

    }
    case 1:

     {


    if(choice2 != 'X'&& arr[0][1]!= 'X')
    {

choice1 = arr[0][1];
arr[0][1] = cross2;

REPLACE();
    }
    else if(choice2 == 1 && arr[0][1] == 'X')
    {
   INVALID();
    }
    break;

    }
    case 2:
     {


    if(choice2 != 'X'&& arr[0][2]!= 'X')
    {
choice1 = arr[0][2];
arr[0][2] = cross2;

REPLACE();
    }
    else if(choice2 == 2 && arr[0][2] == 'X')
    {
    INVALID();
    }
    break;

    }


    case 3:
     {


    if(choice2 != 'X'&& arr[1][0]!= 'X')
    {

choice1 = arr[1][0];
arr[1][0] = cross2;
REPLACE();
    }
    else if(choice2 == 3 && arr[1][0] == 'X')
    {
        INVALID();
    }
    break;

    }

    case 4:
     {


    if(choice2 != 'X'&& arr[1][1]!= 'X')
    {
choice1 = arr[1][1];
arr[1][1] = cross2;
REPLACE();
    }
    else if(choice2 == 4 && arr[1][1] == 'X')
    {
        INVALID();
    }
    break;

    }

    case 5:
     {


    if(choice2 != 'X'&& arr[1][2]!= 'X')
    {

choice1 = arr[1][2];
arr[1][2] = cross2;
REPLACE();
    }
    else if(choice2 == 5 && arr[1][2] == 'X')
    {
        INVALID();
    }
    break;

    }

    case 6:
     {


    if(choice2 != 'X'&& arr[2][0]!= 'X')
    {

choice1 = arr[2][0];
arr[2][0] = cross2;

REPLACE();
    }
    else if(choice2 == 6 && arr[2][0] == 'X')
    {
     INVALID();
    }
    break;

    }

    case 7:
     {


    if(choice2 != 'X'&& arr[2][1]!= 'X')
    {

choice1 = arr[2][1];
arr[2][1] = cross2;

REPLACE();
    }
    else if(choice2 == 7 && arr[2][1] == 'X')
    {
        INVALID();
    }
    break;

    }

    case 8:
     {


    if(choice2 != 'X'&& arr[2][2]!= 'X')
    {

choice1 = arr[2][2];
arr[2][2] = cross2;
REPLACE();
    }
    else if(choice2 == 9 && arr[2][2] == 'X')
    {

    }
    break;

    }
    default:

        cout << "invalid";


}
if(CHECKWIN() == true)

{
CHECKWIN();
}
}


}



int REPLACE()

{

system("cls");
    cout << "WELCOME TO TIC TAC TOE" << endl;
     for(int row = 0; row < 3; row++)
   {
       for(int column = 0; column < 3; column++)
       {
           cout << arr[row][column] << "  ";
       }
       cout<<endl;
   }

}
int INVALID()
 {
     cout<< " you can't select an already selected space" << endl;
 }

int CHECKWIN() {

//ACROSS
if(arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2])
{

    system("cls");
    cout<< " GAME OVER" << endl;
  return true;
}
if(arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2])
{system("cls");
    cout<< " GAME OVER" << endl;
return true;
}

if(arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2])
{
system("cls");
    cout<< " GAME OVER" << endl;
return true;
}
//DOWN AND UP

if(arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0])
{
system("cls");
    cout<< " GAME OVER" << endl;
return true;
}
if(arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1])
{
    system("cls");
    cout<< " GAME OVER" << endl;
return true;
}

if(arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2])
{
system("cls");
    cout<< " GAME OVER" << endl;
return true;
}
//Diagnally

if(arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
{
system("cls");
    cout<< " GAME OVER" << endl;
return true;
}
if(arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])
{
    system("cls");
    cout<< " GAME OVER" << endl;
return true;
}


}










