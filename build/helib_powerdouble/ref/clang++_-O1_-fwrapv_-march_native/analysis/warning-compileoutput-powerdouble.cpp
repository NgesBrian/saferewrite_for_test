powerdouble.cpp:12:16: warning: taking the absolute value of unsigned type 'unsigned long' has no effect [-Wabsolute-value]
  long abs_n = std::labs(n);
               ^
powerdouble.cpp:12:16: note: remove the call to 'labs' since unsigned values cannot be negative
  long abs_n = std::labs(n);
               ^~~~~~~~~
powerdouble.cpp:12:8: warning: unused variable 'abs_n' [-Wunused-variable]
  long abs_n = std::labs(n);
       ^
2 warnings generated.
