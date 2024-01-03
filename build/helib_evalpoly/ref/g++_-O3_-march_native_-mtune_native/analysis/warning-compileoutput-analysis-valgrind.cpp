analysis-valgrind.cpp: In function ‘int main(int, char**)’:
analysis-valgrind.cpp:16:11: warning: ‘*alloc_m’ is used uninitialized [-Wuninitialized]
   16 |   evalPoly(*alloc_i,*alloc_m);
      |   ~~~~~~~~^~~~~~~~~~~~~~~~~~~
analysis-valgrind.cpp:16:11: warning: ‘*alloc_i’ is used uninitialized [-Wuninitialized]
