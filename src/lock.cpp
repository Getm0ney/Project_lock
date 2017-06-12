//File: Lock.cpp
// if you want to learn how to use this program look at the header file.
//
//
#include "../include/lock.hpp"
#include <iostream>
#include <assert.h>

namespace jorge_tadeo
{
	// MODIFICATION FUNCTIONS
	void set_combination(lock& Refobject)
	{
		std::cout << "You have a lock with a rotating knob with numbers 0-39 on its edge." << std::endl;
		std::cout << "Your lock by default has been set to (0,0,0)." << std::endl;
		std::cout << "Would you like to set the combination to your lock?" << std::endl;
		std::cout << "If you would like to change the combination press 1 if not press any number..." << std::endl;
		int user_input;
		std::cin >> user_input;
		if (user_input == 1)
		{
			std::cout << "What would you like your new combination to be?" << std::endl;
			std::cout << "Please enter your first number" << std::endl;
			int user_input_x;
			std::cin >> user_input_x;
			Refobject.set_x(user_input_x);
			Refobject.add_to_c_total(user_input_x);
			std::cout << "Please enter your second number" << std::endl;
			int user_input_y;
			std::cin >> user_input_y;
			Refobject.set_y(user_input_y);
			Refobject.add_to_c_total(user_input_y);
			std::cout << "Please enter your third number" << std::endl;
			int user_input_z;
			std::cin >> user_input_z;
			Refobject.set_z(user_input_z);
			Refobject.add_to_c_total(user_input_z);
			std::cout << "Your new combination is <" << Refobject.get_x() << "," << Refobject.get_y() << "," << Refobject.get_z() << ">" << std::endl;
		}
		else
		{
			std::cout << "You have chosen to not change your lock" << std::endl;
			std::cout << "Your combination is <" << Refobject.get_x() << "," << Refobject.get_y() << "," << Refobject.get_z() << ">" << std::endl;
		}
	}

		/*void turn_knob(lock& Refobject)
	{
		
		std::cout << "Enter -2 if you would like to turn the knob." << std::endl;
		int user_input;
		std::cin >> user_input;
		if (user_input == -2)
		{
			for (unsigned int counter{ 0 }; counter < 3; counter++)
			{
				std::cout << "Your current place on the lock is: " << Refobject.get_current() << std::endl;
				std::cout << "Would you like to turn your lock?" << std::endl;
				std::cout << "What direction would you like to turn to reach your number?" << std::endl;
				std::cout << "Press 1 for left and press 2 for right" << std::endl;
				int user_input_turn;
				std::cin >> user_input_turn;
				if (user_input_turn == 1)
				{
					std::cout << "You have have chosen to move left" << std::endl;
					std::cout << "what number would you like to reach?" << std::endl;
					std::cout << "Please enter a number ranging from 0 - 39" << std::endl;
					int user_input;
					std::cin >> user_input;
					Refobject.set_current(user_input);

					std::cout << "Your object was moved to the left and the current position is: " << Refobject.get_current << std::endl;

				}
				else
				{
					std::cout << "You have have chosen to move right" << std::endl; // In this case the user has indicated that he wanted turn to the right.
					std::cout << "what number would you like to reach?" << std::endl; // is indicated what number he would like to travel to
					std::cout << "Please enter a number ranging from 0 - 39" << std::endl; // our prerequest that we must stay within
					int user_input;
					std::cin >> user_input;
					Refobject.set_current(user_input);
					std::cout << "Your object was moved to the right and the current position is: " << Refobject.get_current << std::endl;
				}
				std::cout << "Would you like to try and open your lock?" << std::endl;
				int user_input;
				std::cin >> user_input;
				if (user_input = 1)

			}
		}
		else
			std::cout << "You have chosen not to turn the knob" << std::endl;
	}*/

		void turn_knob(lock& Refobject)
		{
			std::cout << "Enter 1 if you would like to turn the knob." << std::endl;
			int user_input;
			std::cin >> user_input;
			if (user_input == 1)
			{
				std::cout << "You have choosen to turn the knob" << std::endl;
				std::cout << "your current number is: " << Refobject.get_current() << std::endl;
				std::cout << "What would be the first number you turn to?" << std::endl;
				int user_input_x;
				std::cin >> user_input_x;
				Refobject.set_current(user_input_x);
				Refobject.add_to_l_total(user_input_x);
				std::cout << "You have turned to: " << Refobject.get_current() << std::endl;
				std::cout << "What would be the second number you turn to?" << std::endl;
				int user_input_y;
				std::cin >> user_input_y;
				Refobject.set_current(user_input_y);
				Refobject.add_to_l_total(user_input_y);
				std::cout << "You have turned to: " << Refobject.get_current() << std::endl;
				std::cout << "What would be the third number you turn to?" << std::endl;
				int user_input_z;
				std::cin >> user_input_z;
				Refobject.set_current(user_input_z);
				Refobject.add_to_l_total(user_input_z);
				std::cout << "You have turned to: " << Refobject.get_current() << std::endl;
				std::cout << "The combination you have entered is <" << Refobject.get_x() << "," << Refobject.get_y() << "," << Refobject.get_z() << ">" << std::endl;

			}
			else
			{
				std::cout << "You have choosen to not turn the knob" << std::endl;
			}
		}
		
		void operate_the_lock(lock& Refobject)
		{
			std::cout << "Would you like to...\n 1.Check the status of your lock?\n 2.Open your lock?\n 3.Close your lock?" << std::endl;
			int user_input;
			std::cin >> user_input;
			if (user_input == 1)
			{
				std::cout << "If your lock is open then the status will be true" << std::endl;
				Refobject.is_open();
				
			}

			else if (user_input == 2)
			{
				
				std::cout << "If the combination you set was correct then the lock is open" << std::endl;
				if (Refobject.get_c_total() == Refobject.get_l_total())
				{
					Refobject.ajar_lock();
					std::cout << "Your lock is now open!" << std::endl;
				}
				else
					std::cout << "Your lock combination was wrong!" << std::endl;
			}
			
			else
			{
				std::cout << "You have chosen to close your lock" << std::endl;
				Refobject.shut_lock();
				std::cout << "Your lock is now locked!" << std::endl;
			}

		}

	void close_lock(lock& Refobject)
	{
		if (Refobject.is_open() == true)
			// close the lock
			std::cout << "Lock is now closed" << std::endl;
		else
			std::cout << "Your lock could not be closed" << std::endl;
	}

	
		/*void open_lock(lock& Refobject)
	{
		if (Refobject.is_open == false)
			//Attempt to open the lock
			std::cout << "Your lock is now open" << std::endl;
		else
			std::cout << "Could not open the lock" << std::endl;
	}*/

	// MODIFICATION MEMBER FUNCTIONS

		void lock::set_x(int a_x)
		{
			x = a_x;
		}

		void lock::set_y(int b_y)
		{
			y = b_y;
		}

		void lock::set_z(int c_z)
		{
			z = c_z;
		}

		void lock::set_current(int new_current)
		{
			current_number = new_current;
		}

		void lock::shut_lock() // lets me shut my lock
		{
			open = false;
		}

		void lock::ajar_lock()//lets me open my lock
		{
			open = true;
		}

		void lock::set_user_x(int n_x)
		{
			user_x = n_x;
		}

		void lock::set_user_y(int n_y)
		{
			user_y = n_y;
		}

		void lock::set_user_z(int n_z)
		{
			user_z = n_z;
		}

		void lock::add_to_l_total(int add)
		{
			lock_total += add;
		}

		void lock::add_to_c_total(int add)
		{
			combination_total += add;
		}

	// CONSTANT MEMBER FUNCTIONS

		int lock::get_current() // lets me know what current number my lock is at
		{
			return current_number;
		}
		
		bool lock::is_open()// Lets me know if the lock is open or not // Lets me know if the lock is open or not
		{
			return open;
		}

		int lock::get_x()
		{
			return x;
		}

		int lock::get_y()
		{
			return y;
		}

		int lock::get_z()
		{
			return z;
		}

		int lock::get_l_total()
		{
			return lock_total;
		}

		int lock::get_c_total()
		{
			return combination_total;
		}
}