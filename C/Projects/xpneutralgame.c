//A console game where a person/object hits a inanimate object which looks like a man until it's dead
#include <stdio.h>

int main()
{
    int opr, xp;
    xp = 0;
    printf("Hello World\n");
    printf("why tho\n");
    printf("ok so u have 5xp or just kill in one shot ;\n");
    while(1){
      printf("Enter operation\n 1.kill 2.hit 3.punch\n");
      scanf("%d", &opr);
      if(opr == 1){
        printf("person ded... rip");
        break;
      }
      else if(opr == 2){
        printf("ouch, he lost 1xp\n");
        xp++;
      }
       else if(opr == 3){
        printf("why so mad bro, he lost 1xp\n");
        xp++;
      }
      else{
        printf("invalid expression\n");
      }
     
      if(xp >= 5){
        printf("damn, now u finally killed the dude RIP the innocent soul \n");
        break;
      }
      else{
        printf("Keep fighting!\n");
      }
    }
    return 0;
}