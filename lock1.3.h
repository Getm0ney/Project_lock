// File:Lock.h
// apart of the namespace jorge_tadeo
//
// CONSTRUCTORS
// lock()
// Precondition: this constructor is called when you do not provide arguments.
// Postcondtion: this constructor initializes sets your combination to (0,0,0).
//
// 
// 
// 
//
// MODIFICATION FUNCTIONS
// void set_combination(lock& l)
// Precondition: An object of lock type is an argument.
// Postcondition: The user is asked if he would like to reseat the combination of the lock if yes then the combo has been changed.
//
// void turn_knob(lock& l)
// Precondition: An object of lock type is an argument.
// Postcondition: The user is asked if he would like to turn the knob (left or right) to reach a specific number.
// 
// void close_lock(lock& l)
// Precondition: The lock has been opened.
// Postcondition: the lock is now closed.
// 
// void open_lock(lock& l)
// Precondition: the lock has been closed and the combination enterd is correct. 
// Postcondition: the lock has now been opened.
//
// void set_x(int a_x)
// precondition: None
// Postcondition: the x variable is now changed
//
// void set_y(int b_y)
// precondition: None.
// postcondition:
//
// void set_z(int c_z)
// precondtion: None.
// Postcondition: z has been changed
//
// CONSTANT MEMBER FUNCTIONS
// void check_lock(const lock& l)
// Precondition:
// Postcondition: The current status on the lock 'open' or 'closed' is returned.
//
// void current_number(const lock& l)
// Precondition: 
// Postcondition: the current number the lock knob is on is retuned. 
// 
// Value semantics
// you can copy object variables to one another and use the copy constructor.

#ifndef Jorge_Tadeo
#define Jorge_Tadeo
namespace jorge_tadeo
{
	class lock
	{
	public:
		//CONSTRUCTORS
		lock(){ x = 0; y = 0; z = 0; }

		// MODIFICATION MEMBER FUNCTIONS
		void set_x(int a_x);
		void set_y(int b_y);
		void set_z(int c_z);
		void set_user_x(int n_x);
		void set_user_y(int n_y);
		void set_user_z(int n_z);
		void set_current(int new_current);
		void shut_lock();
		void ajar_lock();
		void add_to_l_total(int add);
		void add_to_c_total(int add);

		// CONSTANT MEMBER FUNCTIONS
		bool is_open();
		int get_current();
		int get_x();
		int get_y();
		int get_z();
		int get_l_total();
		int get_c_total();
		bool c_l_are_equal();
	private:
		int x, y, z,user_x,user_y,user_z, current_number = 0, lock_total = 0, combination_total = 0;
		bool open = false;
	};
	void set_combination(lock& Refobject);
	void turn_knob(lock& Refobject);
	void close_lock(lock& Refobject);
	void open_lock(lock& Refobject);
	void operate_the_lock(lock& Refobject);
}
#endif
