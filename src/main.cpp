//
//  main.cpp
//  lock-project
//
//  Created by Jacob Chaffin on 6/5/17.
//  Copyright © 2017 Jacob Chaffin. All rights reserved.
//

#include <iostream>
#include "../include/lock.hpp"

void set_combination(lock& refObject) {
	std::cout << "You have a lock with a rotating knob with numbers 0-39 on its edge." << std::endl;
	std::cout << "Your lock by default has been set to (0,0,0)." << std::endl;
	std::cout << "Would you like to set the combination to your lock?" << std::endl;
	std::cout << "If you would like to change the combination press 1 if not press any number" << std::endl;
	int user_input;
	std::cin >> user_input;
	if (user_input == 1) {
    std::cout << "What would you like your new combination to be?" << std::endl;
    std::cout << "Please enter your first number" << std::endl;
    int user_input_x;
    std::cin >> user_input_x;
    refObject.set_x(user_input_x);
    std::cout << "Please enter your second number" << std::endl;
    int user_input_y;
    std::cin >> user_input_y;
    refObject.set_y(user_input_y);
    std::cout << "Please enter your third number" << std::endl;
    int user_input_z;
    std::cin >> user_input_z;
    refObject.set_z(user_input_z);
  } else {
     std::cout << "You have chosen to not change your lock" << std::endl;
  }
}

// while !((x, y, z) > 0 && (x, y, z) < 39)
  // set_combination(a);
  // write a getter in lock and get combination and show the values to user
  // 

  

int main(int argc, const char * argv[]) {
  lock a;
  set_combination(a);
  return 0;
}
