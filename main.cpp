//
//  main.cpp
//  Mail
//
//  Created by Fabian Hofstetter on 09.02.12.
//  Copyright 2012 Universität Zürich. All rights reserved.
//

#include <iostream>
#include <stack>

#include "letter.hpp"

void init();
void printTrays();
void cleanUp();
std::stack<letter*> orderPriority(std::stack<letter*> tray);

std::stack<letter*> tray_work;
std::stack<letter*> tray_family;
std::stack<letter*> tray_hobby;

int main (int argc, const char * argv[])
{

    init();
    
    printTrays();
    
    cleanUp();
    
    printTrays();
    
    tray_work = orderPriority(tray_work);
    tray_family = orderPriority(tray_family);
    tray_hobby = orderPriority(tray_hobby);
    
    printTrays();
    
    return 0;
}

void init(){
    
    letter* letter1 = new letter(5, "work", "John");
    letter* letter2 = new letter(3, "family", "Jack");
    letter* letter3 = new letter(1, "work", "Hugo");
    letter* letter4 = new letter(9, "hobby", "Lisa");
    letter* letter5 = new letter(4, "family", "Lena");
    letter* letter6 = new letter(0, "work", "Madden");
    letter* letter7 = new letter(8, "hobby", "Jules");
    letter* letter8 = new letter(4, "hobby", "Rachel");
    letter* letter9 = new letter(0, "family", "Sam");
    letter* letter10 = new letter(7, "work", "Lio");

    tray_work.push(letter1);
    tray_work.push(letter2);
    tray_work.push(letter3);
    
    tray_family.push(letter4);
    tray_family.push(letter5);
    tray_family.push(letter6);
    
    tray_hobby.push(letter7);
    tray_hobby.push(letter8);
    tray_hobby.push(letter9);
    tray_hobby.push(letter10);

}

void printTrays(){
    /* TODO 1)
     *
     * this method should print out the three trays with the letters in it
     *
     * write your implementation here
     */
    
}


void cleanUp(){
    /* TODO 2)
     *
     * this method should clean up the trays. This means every letter should be in the correct tray in which it belongs to.
     *
     * write your implementation here
     */
    
    }

std::stack<letter*> orderPriority(std::stack<letter*> tray_){
    /* TODO 3)
     *
     * this method should order the letters after their priority. The letter with the highest priority (=0) should be on top of the stack.
     *
     * HINT: use an array for sorting
     *
     * write your implementation here     
     */
    
}