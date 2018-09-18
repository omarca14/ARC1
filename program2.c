#include <stdio.h>
void calculateAddition(char *s){
  while(*s++){
    printf("%s",s);
  }
}
int main(){
  calculateAddition("deadbeef");
  return 0;
}

