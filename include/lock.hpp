#ifndef lock_hpp
#define lock_hpp

class lock {
public:
	 //CONSTRUCTORS
  lock(){ x = 0; y = 0; z = 0; }

  void turn_knob();
  void close_lock();
  void open_lock();
  void set_x(int a_x);
  void set_y(int b_y);
  void set_z(int c_z);
  int[] get_combination(); // return an array of combinations
  
private:
  int x, y, z;
};
#endif // lock_hpp