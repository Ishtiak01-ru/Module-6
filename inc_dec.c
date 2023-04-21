#include<stdio.h>
int main(){

    int i=10;
    //int x=i++; //post increment(10 is assigned before increment,then i will be increased)
    //int x= ++i;  //pre increment 
     //int x= --i;  //initially i will be decreased then assign in x
      int x= i--;
    printf("%d %d",x,i);
}