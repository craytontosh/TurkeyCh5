//
//  main.c
//  Turkey
//
//  Created by Crayton McIntosh on 7/18/16.
//  Copyright © 2016 Crayton McIntosh. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //Declare the variable called weight of type float
    float weight;
    
    //Store a number in that variable
    weight = 14.2;
    
    //Log it to the user
    printf("The turkey weights %f.\n", weight);
    
    //Declare variable of type float
    float cookingTime;
    
    //Calc cooking time and store it in the variable
    cookingTime=15.0 +15.0 * weight;
    
    //Log that to the user
    printf("Cook it for %f minutes. \n",cookingTime);
    
    return 0;
}
