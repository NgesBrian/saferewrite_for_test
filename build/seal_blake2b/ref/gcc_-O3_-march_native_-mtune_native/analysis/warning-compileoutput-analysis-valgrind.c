analysis-valgrind.c: In function ‘main’:
analysis-valgrind.c:20:44: warning: ‘*alloc_out’ is used uninitialized [-Wuninitialized]
   20 |   alloc_z[0] = blake2(*alloc_in,*alloc_key,*alloc_out);
      |                                            ^~~~~~~~~~
analysis-valgrind.c:20:33: warning: ‘*alloc_key’ is used uninitialized [-Wuninitialized]
   20 |   alloc_z[0] = blake2(*alloc_in,*alloc_key,*alloc_out);
      |                                 ^~~~~~~~~~
analysis-valgrind.c:20:23: warning: ‘*alloc_in’ is used uninitialized [-Wuninitialized]
   20 |   alloc_z[0] = blake2(*alloc_in,*alloc_key,*alloc_out);
      |                       ^~~~~~~~~
