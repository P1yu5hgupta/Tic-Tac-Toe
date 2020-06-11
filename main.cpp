#include<iostream>
#include<cstdlib>
#include<windows.h>
using namespace std;
int main()
{
char a[9],c;
int i,j,move=0;
printf("Welcome to the Tic-Tac-Toe game:\nFor the reference of the player.\n");
printf(" ____________\n");
printf("| 1 | 2 | 3 |\n");
printf(" ____________\n");
printf("| 4 | 5 | 6 |\n");
printf(" ____________\n");
printf("| 7 | 8 | 9 |\n");
printf(" ____________\n");
for(i=0;i<9;i++)
{
    a[i]='*';
}
cout<<"Enter the choice of player1(X/O)."<<endl;
cin>>c;
while(1){
if(c=='X'||c=='O'||c=='x'||c=='o')
break;
cout<<"Invalid Choice....Choose X/O"<<endl;
cin>>c;
}
char c1,c2;
if(c=='X'||c=='x')
{
cout<<"Choice of player2 is O"<<endl;
c1='X';
c2='O';
}
else if(c=='O'||c=='o')
{
cout<<"Choice of player2 is X"<<endl;
c1='O';
c2='X';
}
while(move<9)
{
int n;
if(move%2==0)
{
	cout<<"Player1:Enter the position"<<endl;
	cin>>n;
	while(1){
	if(a[n-1]=='*'&&n>=1&&n<=9)
		break;
	cout<<"Position already taken....Choose another"<<endl;
	cin>>n;
	}
    a[n-1]=c1;
        move++;
}
else
{
    cout<<"Player2:Enter the position"<<endl;
    cin>>n;
    while(1){
	if(a[n-1]=='*'&&n>=1&&n<=9)
		break;
	cout<<"Position not available....Choose another"<<endl;
	cin>>n;
	}
    a[n-1]=c2;
        move++;
}
system("cls");
int k=0;
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
    {
		cout<<a[k++]<<"  ";
    }
	cout<<endl<<endl;
}
if(a[0]==c1&&a[1]==c1&&a[2]==c1||
   a[3]==c1&&a[4]==c1&&a[5]==c1||
   a[6]==c1&&a[7]==c1&&a[8]==c1||
   a[0]==c1&&a[3]==c1&&a[6]==c1||
   a[1]==c1&&a[4]==c1&&a[7]==c1||
   a[2]==c1&&a[5]==c1&&a[8]==c1||
   a[0]==c1&&a[4]==c1&&a[8]==c1||
   a[2]==c1&&a[4]==c1&&a[6]==c1)
{
    cout<<"Player1 wins.";
    break;
}
else if(a[0]==c2&&a[1]==c2&&a[2]==c2||
       a[3]==c2&&a[4]==c2&&a[5]==c2||
       a[6]==c2&&a[7]==c2&&a[8]==c2||
       a[0]==c2&&a[3]==c2&&a[6]==c2||
       a[1]==c2&&a[4]==c2&&a[7]==c2||
       a[2]==c2&&a[5]==c2&&a[8]==c2||
       a[0]==c2&&a[4]==c2&&a[8]==c2||
       a[2]==c2&&a[4]==c2&&a[6]==c2)
{
    cout<<"Player2 wins.";
    break;
}
else
{
    if(move==9)
    cout<<"Match draw.";
}
}
return 0;
}

