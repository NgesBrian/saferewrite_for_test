analysis-execute.c: In function ‘main’:
analysis-execute.c:36:44: warning: ‘*alloc_out’ may be used uninitialized [-Wmaybe-uninitialized]
   36 |   alloc_z[0] = blake2(*alloc_in,*alloc_key,*alloc_out);
      |                                            ^~~~~~~~~~
