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
	
	letter* temp;
	
	std::cout << "Tray Work:" << std::endl;
	while(!tray_work.empty())
	{
		temp = tray_work.top();
		tray_work.pop();
		letter tm = *temp;
		std::cout << "\tSender: " << tm.getSender() << "\n\t\tPriority: " << tm.getPriority() << "\n\t\tTray: " << tm.getTray() << std::endl;
	}
	std::cout << "\n" << std::endl;

	std::cout << "Tray Family:" << std::endl;
	while(!tray_family.empty())
	{
		temp = tray_family.top();
		tray_family.pop();
		letter tm = *temp;
		std::cout << "\tSender: " << tm.getSender() << "\n\t\tPriority: " << tm.getPriority() << "\n\t\tTray: " << tm.getTray() << std::endl;
	}
	std::cout << "\n" << std::endl;

	std::cout << "Tray Hobby:" << std::endl;
	while(tray_hobby.size() != 0)
	{
		temp = tray_hobby.top();
		tray_hobby.pop();
		letter tm = *temp;
		std::cout << "\tSender: " << tm.getSender() << "\n\t\tPriority: " << tm.getPriority() << "\n\t\tTray: " << tm.getTray() << std::endl;
	}

	delete temp;
	std::cout << "\n" << std::endl;

    init();		//restore default situation
}


void cleanUp(){
    /* TODO 2)
     *
     * this method should clean up the trays. This means every letter should be in the correct tray in which it belongs to.
     *
     * write your implementation here
     */
    
	std::stack<letter*> tray_temp_w;
	std::stack<letter*> tray_temp_f;
	std::stack<letter*> tray_temp_h;

	letter* temp;
	// DECISAMENTE TROPPO LENTO... FACILE DA METTERE A POSTO
	//save letter in the right temp tray
	while(!tray_work.empty())
	{
		temp = tray_work.top();
		letter tm = *temp;
		if(tm.getTray() == "work")
		{
			tray_temp_w.push(temp);
			tray_work.pop();
		}
		else if(tm.getTray() == "family")
		{
			tray_temp_f.push(temp);
			tray_work.pop();
		}
		else
		{
			tray_temp_h.push(temp);
			tray_work.pop();
		}
	}
	
	while(!tray_family.empty())
	{
		temp = tray_family.top();
		letter tm = *temp;
		if(tm.getTray() == "work")
		{
			tray_temp_w.push(temp);
			tray_family.pop();
		}
		else if(tm.getTray() == "family")
		{
			tray_temp_f.push(temp);
			tray_family.pop();
		}
		else
		{
			tray_temp_h.push(temp);
			tray_family.pop();
		}
	}

	while(!tray_hobby.empty())
	{
		temp = tray_hobby.top();
		letter tm = *temp;
		if(tm.getTray() == "work")
		{
			tray_temp_w.push(temp);
			tray_hobby.pop();
		}
		else if(tm.getTray() == "family")
		{
			tray_temp_f.push(temp);
			tray_hobby.pop();
		}
		else
		{
			tray_temp_h.push(temp);
			tray_hobby.pop();
		}
	}

	//---copy from temp-tray to right-tray

	while(!tray_temp_f.empty())
	{
		temp = tray_temp_f.top();
		tray_family.push(temp);
		tray_temp_f.pop();
	}
	while(!tray_temp_w.empty())
	{
		temp = tray_temp_w.top();
		tray_work.push(temp);
		tray_temp_w.pop();
	}
	while(!tray_temp_h.empty())
	{
		temp = tray_temp_h.top();
		tray_hobby.push(temp);
		tray_temp_h.pop();
	}

	delete temp; // free memory

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
	std::stack<letter*> tmp;

    return tmp;
}