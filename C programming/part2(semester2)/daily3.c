/***********************************************************
Author: Vibishan Wigneswaran
Date: 1/31/2019
Effort: 30 minutes
Purpose: set designated flag positions to 1 and keeping all other positions at 0. This excerise reinforces learning about the shift operator
***********************************************************/
#include <stdio.h>

void set_flag(int* flag_holder, int flag_position);
int check_flag(int flag_holder, int flag_position);

int main(int argc, char* argv[]) {
  int flag_holder = 0;
  int i;

 set_flag(&flag_holder, 3);
 set_flag(&flag_holder, 16);
 set_flag(&flag_holder, 31);

 for(i=31; i>=0; i--)
 {
   printf("%d", check_flag(flag_holder, i));
   if(i%4 == 0)
   {
     printf(" ");
   }
 }
 printf("\n");
 return 0;
}

 void set_flag(int* flag_holder, int flag_position){
    int flag;
    flag =  1 << flag_position;
    *flag_holder = *flag_holder | flag;
  }

 int check_flag(int flag_holder, int flag_position){
   int flag;
    flag = 1 << flag_position;
    int holder = flag_holder & flag;

    if(holder == 0){
      return 0;
    }
    else {
      return 1;
    }

 }
