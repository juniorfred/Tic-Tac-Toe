
#include <iostream>
#include <conio.h>
#include <sstream>

using namespace std;

// function prototypes 

void bot(int);
void drawboard();
void checkwinner();
void restarter();

string arra[3][3];
string player;
string robot;
int ending=0,playerscore=0,robotscore=0;
string replay;

int main(){
int a,b,move;string hh;

start:

cout<<"\033[1;36mEnter your player: '\033[0;31mo\033[0;36m' or '\033[0;34mx\033[36m'\033[0m\n";
cin>>player;

if(player[0]=='o'||player[0]=='O')
{
robot="\033[1;34mx\033[0m";
player="\033[31mo\033[0m";
}
else if(player[0]=='x'||player[0]=='X')
{
robot="\033[1;31mo\033[0m";
player="\033[34mx\033[0m";
}
else
{
goto start;
}

cout<<"\n"<<endl;
clrscr();


cout<<"\n\033[1;31mRules:\033[0;35mEnter index of asterics to \n\tchoose position.\033[0m\n";

cout<<"\n\n"<<endl;

sleep(3);
clrscr();

board:
  cout<<endl;
   for(a=0; a<3; a++){
for(b=0; b<3; b++)
{
arra[a][b]='*';
}
}

   for(a=0; a<3; a++){
for(b=0; b<3; b++)
{
cout<<arra[a][b]<<"\t";
}
cout<<endl;
}

play:
cout<<"\nYour move:\t";
cin>>hh;

if(hh.size()>1){
drawboard();
goto play;
}

clrscr();
stringstream(hh)>>move;
if(move)
{
switch(move)
{
case 1: bot(1);
break;
case 2: bot(2);
break;
case 3: bot(3);
break;
case 4: bot(4);
break;
case 5: bot(5);
break;
case 6: bot(6);
break;
case 7: bot(7);
break;
case 8: bot(8);
break;
case 9: bot(9);
break;
default: goto play;
}
}
else
{
goto play;
}

checkwinner();

for(a=0; a<3; a++){
for(b=0; b<3; b++){
if(arra[a][b].size()<=1)
{

if(ending!=1){

goto play;}
else{

}

}}
}

checkwinner();

   return 0;
}


 

void bot(int z)
{

switch(z)
{
case 1: if(arra[0][0].size()<=1)
{
arra[0][0]=player;
drawboard();
sleep(1);
if(arra[1][1].size()<=1&&arra[2][2].size()>1)
{
arra[1][1]=robot;
} else if(arra[2][2].size()<=1&&arra[1][1].size()>1)
{
arra[2][2]=robot;
}
else if(arra[2][0].size()<=1&&arra[1][0].size()>1)
{
arra[2][0]=robot;
} else if(arra[1][0].size()<=1&&arra[2][0].size()>1)
{
arra[1][0]=robot;
} else if(arra[0][2].size()<=1&&arra[0][1].size()>1)
{
arra[0][2]=robot;
}
else if(arra[0][1].size()<=1&&arra[0][2].size()>1)
{
arra[0][1]=robot;
} else if(arra[0][2].size()<=1){
arra[0][2]=robot;
}else if(arra[0][1].size()<=1){
arra[0][1]=robot;
}else if(arra[1][0].size()<=1){
arra[1][0]=robot;
}
else if(arra[2][0].size()<=1){arra[2][0]=robot;
}
else if(arra[1][1].size()<=1){
arra[1][1]=robot;
}
else if(arra[1][2].size()<=1){
arra[1][2]=robot;
}
else if(arra[2][1].size()<=1){
arra[2][1]=robot;
}
else if(arra[2][2].size()<=1){
arra[2][2]=robot;
}

}



break;
case 2: if(arra[0][1].size()<=1)
{
arra[0][1]=player;
drawboard();
sleep(1);
if(arra[0][0].size()<=1&&arra[0][2].size()>1)
{
arra[0][0]=robot;
} else if(arra[0][2].size()<=1&&arra[0][0].size()>1)
{
arra[0][2]=robot;
}
else if(arra[1][1].size()<=1&&arra[2][1].size()>1)
{
arra[1][1]=robot;
} else if(arra[2][1].size()<=1&&arra[1][1].size()>1)
{
arra[2][1]=robot;
}
else if(arra[0][2].size()<=1){
arra[0][2]=robot;
}else if(arra[0][0].size()<=1){
arra[0][0]=robot;
}else if(arra[1][0].size()<=1){
arra[1][0]=robot;
}
else if(arra[2][0].size()<=1){arra[2][0]=robot;
}
else if(arra[1][1].size()<=1){
arra[1][1]=robot;
}
else if(arra[1][2].size()<=1){
arra[1][2]=robot;
}
else if(arra[2][1].size()<=1){
arra[2][1]=robot;
}
else if(arra[2][2].size()<=1){
arra[2][2]=robot;
}

}

break;
case 3: if(arra[0][2].size()<=1)
{
arra[0][2]=player;
drawboard();
sleep(1);
if(arra[0][0].size()<=1&&arra[0][1].size()>1)
{
arra[0][0]=robot;
} else if(arra[0][1].size()<=1&&arra[0][0].size()>1)
{
arra[0][1]=robot;
}
else if(arra[1][2].size()<=1&&arra[2][2].size()>1)
{
arra[1][2]=robot;
} else if(arra[2][2].size()<=1&&arra[1][2].size()>1)
{
arra[2][2]=robot;
} else if(arra[1][1].size()<=1&&arra[2][0].size()>1)
{
arra[1][1]=robot;
}
else if(arra[2][1].size()<=1&&arra[1][1].size()>1)
{
arra[2][1]=robot;
}
else if(arra[0][1].size()<=1){
arra[0][1]=robot;
}else if(arra[0][0].size()<=1){
arra[0][0]=robot;
}else if(arra[1][0].size()<=1){
arra[1][0]=robot;
}
else if(arra[2][0].size()<=1){arra[2][0]=robot;
}
else if(arra[1][1].size()<=1){
arra[1][1]=robot;
}
else if(arra[1][2].size()<=1){
arra[1][2]=robot;
}
else if(arra[2][1].size()<=1){
arra[2][1]=robot;
}
else if(arra[2][2].size()<=1){
arra[2][2]=robot;
}
return;
}
break;
case 4: if(arra[1][0].size()<=1)
{
arra[1][0]=player;
drawboard();
sleep(1);
if(arra[1][1].size()<=1&&arra[1][2].size()>1)
{
arra[1][1]=robot;
} else if(arra[1][2].size()<=1&&arra[1][1].size()>1)
{
arra[1][2]=robot;
}
else if(arra[0][0].size()<=1&&arra[2][0].size()>1)
{
arra[0][0]=robot;
} else if(arra[2][0].size()<=1&&arra[0][0].size()>1)
{
arra[2][0]=robot;
}
else if(arra[0][1].size()<=1){
arra[0][1]=robot;
}else if(arra[0][0].size()<=1){
arra[0][0]=robot;
}else if(arra[0][2].size()<=1){
arra[1][0]=robot;
}
else if(arra[2][0].size()<=1){arra[2][0]=robot;
}
else if(arra[1][1].size()<=1){
arra[1][1]=robot;
}
else if(arra[1][2].size()<=1){
arra[1][2]=robot;
}
else if(arra[2][1].size()<=1){
arra[2][1]=robot;
}
else if(arra[2][2].size()<=1){
arra[2][2]=robot;
}
return;
}
break;
case 5: if(arra[1][1].size()<=1)
{
arra[1][1]=player;
drawboard();
sleep(1);
if(arra[1][0].size()<=1&&arra[1][2].size()>1)
{
arra[1][0]=robot;
} else if(arra[1][2].size()<=1&&arra[1][0].size()>1)
{
arra[1][2]=robot;
}
else if(arra[0][1].size()<=1&&arra[2][1].size()>1)
{
arra[0][1]=robot;
} else if(arra[2][1].size()<=1&&arra[0][1].size()>1)
{
arra[2][1]=robot;
}
else if(arra[0][1].size()<=1){
arra[0][1]=robot;
}else if(arra[0][0].size()<=1){
arra[0][0]=robot;
}else if(arra[0][2].size()<=1){
arra[1][0]=robot;
}
else if(arra[2][0].size()<=1){arra[2][0]=robot;
}
else if(arra[1][0].size()<=1){
arra[1][0]=robot;
}
else if(arra[1][2].size()<=1){
arra[1][2]=robot;
}
else if(arra[2][1].size()<=1){
arra[2][1]=robot;
}
else if(arra[2][2].size()<=1){
arra[2][2]=robot;
}else{
return;}
}
break;

case 6: if(arra[1][2].size()<=1)
{
arra[1][2]=player;
drawboard();
sleep(1);
if(arra[1][0].size()<=1&&arra[1][1].size()>1)
{
arra[1][0]=robot;
} else if(arra[1][1].size()<=1&&arra[1][0].size()>1)
{
arra[1][1]=robot;
}
else if(arra[0][2].size()<=1&&arra[2][2].size()>1)
{
arra[0][2]=robot;
} else if(arra[2][2].size()<=1&&arra[0][2].size()>1)
{
arra[2][2]=robot;
}
else if(arra[0][1].size()<=1){
arra[0][1]=robot;
}else if(arra[0][0].size()<=1){
arra[0][0]=robot;
}else if(arra[0][2].size()<=1){
arra[1][0]=robot;
}
else if(arra[2][0].size()<=1){arra[2][0]=robot;
}
else if(arra[1][0].size()<=1){
arra[1][0]=robot;
}
else if(arra[1][1].size()<=1){
arra[1][1]=robot;
}
else if(arra[2][1].size()<=1){
arra[2][1]=robot;
}
else if(arra[2][2].size()<=1){
arra[2][2]=robot;
}
return;
}

break;

case 7: if(arra[2][0].size()<=1)
{
arra[2][0]=player;
drawboard();
sleep(1);
if(arra[0][0].size()<=1&&arra[1][0].size()>1)
{
arra[0][0]=robot;
} else if(arra[1][0].size()<=1&&arra[0][0].size()>1)
{
arra[1][0]=robot;
}
else if(arra[0][2].size()<=1&&arra[1][1].size()>1)
{
arra[0][2]=robot;
} else if(arra[1][1].size()<=1&&arra[0][2].size()>1)
{
arra[1][1]=robot;
}
else if(arra[2][1].size()<=1&&arra[2][2].size()>1)
{
arra[2][1]=robot;
}
else if(arra[2][2].size()<=1&&arra[2][1].size()>1)
{
arra[2][2]=robot;
}
else if(arra[0][1].size()<=1){
arra[0][1]=robot;
}else if(arra[0][0].size()<=1){
arra[0][0]=robot;
}else if(arra[0][2].size()<=1){
arra[1][0]=robot;
}
else if(arra[1][2].size()<=1){arra[1][2]=robot;
}
else if(arra[1][0].size()<=1){
arra[1][0]=robot;
}
else if(arra[1][1].size()<=1){
arra[1][1]=robot;
}
else if(arra[2][1].size()<=1){
arra[2][1]=robot;
}
else if(arra[2][2].size()<=1){
arra[2][2]=robot;
}
return;
}

break;

case 8: if(arra[2][1].size()<=1)
{
arra[2][1]=player;
drawboard();
sleep(1);
if(arra[2][0].size()<=1&&arra[2][2].size()>1)
{
arra[2][0]=robot;
} else if(arra[2][2].size()<=1&&arra[2][0].size()>1)
{
arra[2][2]=robot;
}
else if(arra[0][1].size()<=1&&arra[1][1].size()>1)
{
arra[0][1]=robot;
} else if(arra[1][1].size()<=1&&arra[0][1].size()>1)
{
arra[1][1]=robot;
}
else if(arra[0][1].size()<=1){
arra[0][1]=robot;
}else if(arra[0][0].size()<=1){
arra[0][0]=robot;
}else if(arra[0][2].size()<=1){
arra[1][0]=robot;
}
else if(arra[1][2].size()<=1){arra[1][2]=robot;
}
else if(arra[1][0].size()<=1){
arra[1][0]=robot;
}
else if(arra[1][1].size()<=1){
arra[1][1]=robot;
}
else if(arra[2][0].size()<=1){
arra[2][0]=robot;
}
else if(arra[2][2].size()<=1){
arra[2][2]=robot;
}
return;
}

break;

case 9: if(arra[2][2].size()<=1)
{
arra[2][2]=player;
drawboard();
sleep(1);
if(arra[0][2].size()<=1&&arra[1][2].size()>1)
{
arra[0][2]=robot;
} else if(arra[1][2].size()<=1&&arra[0][2].size()>1)
{
arra[1][2]=robot;
}
else if(arra[0][0].size()<=1&&arra[1][1].size()>1)
{
arra[0][0]=robot;
} else if(arra[1][1].size()<=1&&arra[0][0].size()>1)
{
arra[1][1]=robot;
}
else if(arra[2][0].size()<=1&&arra[2][1].size()>1)
{
arra[2][0]=robot;
}
else if(arra[2][1].size()<=1&&arra[2][0].size()>1)
{
arra[2][1]=robot;
}
else if(arra[0][1].size()<=1){
arra[0][1]=robot;
}else if(arra[0][0].size()<=1){
arra[0][0]=robot;
}else if(arra[0][2].size()<=1){
arra[1][0]=robot;
}
else if(arra[1][2].size()<=1){arra[1][2]=robot;
}
else if(arra[1][0].size()<=1){
arra[1][0]=robot;
}
else if(arra[1][1].size()<=1){
arra[1][1]=robot;
}
else if(arra[2][0].size()<=1){
arra[2][0]=robot;
}
else if(arra[2][1].size()<=1){
arra[2][1]=robot;
}
return;
}
break;
default:return;
}

}

void drawboard(){
clrscr();
cout<<endl;
for(int a=0; a<3; a++){
for(int b=0; b<3; b++){
cout<<arra[a][b]<<"\t";
}cout<<endl;
}
}

void checkwinner(){
drawboard();

if(arra[0][0].size()==player.size()&&arra[1][1].size()==player.size()&&arra[2][2].size()==player.size()||arra[0][0].size()==player.size()&&arra[0][1].size()==player.size()&&arra[0][2].size()==player.size()||arra[0][1].size()==player.size()&&arra[1][1].size()==player.size()&&arra[2][1].size()==player.size()||arra[0][2].size()==player.size()&&arra[1][2].size()==player.size()&&arra[2][2].size()==player.size()||arra[2][0].size()==player.size()&&arra[2][1].size()==player.size()&&arra[2][2].size()==player.size()||arra[0][0].size()==player.size()&&arra[1][0].size()==player.size()&&arra[2][0].size()==player.size()){
cout<<endl;
cout<<"\033[1;34mcongratulations:\033[0;0myou win\n";
playerscore+=1;
cout<<player<<": "<<playerscore<<"\t";
cout<<robot<<": "<<robotscore;
ending=1;
sleep(2);

restarter();
}
else if(arra[0][0].size()==robot.size()&&arra[1][1].size()==robot.size()&&arra[2][2].size()==robot.size()||arra[0][0].size()==robot.size()&&arra[0][1].size()==robot.size()&&arra[0][2].size()==robot.size()||arra[0][1].size()==robot.size()&&arra[1][1].size()==player.size()&&arra[2][1].size()==robot.size()||arra[0][2].size()==robot.size()&&arra[1][2].size()==robot.size()&&arra[2][2].size()==robot.size()||arra[2][0].size()==robot.size()&&arra[2][1].size()==robot.size()&&arra[2][2].size()==robot.size()){
cout<<endl;
cout<<"\033[1;31mOops:\033[0;0m you lose..\n";
robotscore+=1;

cout<<robot<<": "<<robotscore<<"\t";
cout<<player<<": "<<playerscore;
ending=1;

restarter();
}else if(arra[0][0].size()>1&&arra[0][1].size()>1&&arra[0][2].size()>1&&arra[1][0].size()>1&&arra[1][1].size()>1&&arra[1][2].size()>1&&arra[2][0].size()>1&&arra[2][1].size()>1&&arra[2][2].size()>1){

cout<<"\033[1;34mGame Over: \033[0;0myou draw";

restarter();
}else{
return;}
}

void restarter(){

clrscr();
cout<<endl;
cout<<"\033[0;34mDo you want to continue? \n\t(yes or no) \033[0m\n";
cin>>replay;

if(replay=="yes")
{
clrscr();
ending=0;
main();

}else if(replay=="no"){
return;
}
else {
return;
}}
