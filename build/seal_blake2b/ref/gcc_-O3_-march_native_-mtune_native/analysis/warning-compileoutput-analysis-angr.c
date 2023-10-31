analysis-angr.c: In function ‘main’:
analysis-angr.c:25:44: warning: ‘*alloc_out’ is used uninitialized [-Wuninitialized]
   25 |   alloc_z[0] = blake2(*alloc_in,*alloc_key,*alloc_out);
      |                                            ^~~~~~~~~~
