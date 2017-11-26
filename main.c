//
//  main.c
//  Pointers
//
//  Created by Eun Jae Lee on 27/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//
//  dataType *variable_name;
//  int *p;// declaring pointer
//  3 parameter Variables
//  name -> a   p 1606416044 (hold address of another variable)
//  Value -> 10    *p 10
//  address -> = 1606416044  &p  1606416032

//  %p for print adress

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int a = 10;
    int *p;
    
    p = &a;
    
    printf("%p\n",p);//&a,p -> 1606416044
    
    printf("%p\n",&a); // print haxadecimal
    
    printf("%d \n",*p); // print value
    
    printf("\n");
    printf("Value of a is %d\n",a);
    printf("Address of a is %p\n\n",&a);
    
    printf("Value of pointer p is %p\n",p);// p has address of a(&a)
    printf("Address of pointer p is %p\n\n",&p);
    
    printf("Value at adtess of pointer p is %d\n",*p);
    
    getchar();
}


