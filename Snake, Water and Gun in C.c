#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int snakewatergun(char,char);
int main()
{
  char you;
  char comp;
  int num;
  srand(time(0));
  num = rand() % 100 + 1;
  printf("Enter 's' for snake, 'w' for water and 'g' for gun : ");
  scanf("%c",&you);

  if(num < 33){
    comp = 's';
  }
  else if(num > 33 && num < 66){
    comp = 'w';
  }
  else{
    comp = 'g';
  }

  int result = snakewatergun(you,comp);

  if(result == 0){
    printf("Game is drawn\n");
  }

  else if(result == 1){
    printf("Yay !!! You have won the game as you chose %c and comp chose %c",you,comp);
  }

  else{
    printf("Oh no !!! You have lost the game as you chose %c and comp chose %c",you,comp);
  }
  return 0;
}

int snakewatergun(char you,char comp){

  if(you == comp){
    return 0;
  }

  else if((you == 's' && comp == 'w') || (you == 'w' && comp == 'g') || (you == 'g' && comp == 's')){
    return 1;
  }

  else{
    return -1;
  }

}