//byte number_rep_array[10] = {0000,0001,0010,0011,0100,0101,0110,0111,1000,1001};

byte number_rep_array[10] = {byte(0000),byte(0001),byte(0010),byte(0011),byte(0100),byte(0101),byte(0110),byte(00111),byte(1000),byte(1001)};
int rs_clock_pin = 10;
int rs_latch_pin = 11;
int rs_data_pin = 12;
String stored_time="";
void setup() {
  // SET UP CLOCK CODE

}

void loop() {
  /*
  string current_time = CLOCK.GETTIME()
  if(current_time != stored_time)
  {
    
  }
  */
}

void shiftOut(int bit, int value)
{
  
}

byte nymb_char_to_byte(char c)
{
  return number_rep_array[c-52];
}

