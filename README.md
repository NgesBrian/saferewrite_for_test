# saferewrite_for_test
 inspired by a talk by Dr Daniel Bernstein, I am exploring Saferewrite to detect memory leaks and vulnerabilities  in open-source homomorphic encryption libraries such as SEAL and OpenFHE
 
  
EXPERIMENT 

change the analyze file from canalyze to analayze then run the following commands:

    	 chmod +t src/*
  	 chmod -t src/seal_load64
  	 chmod -t src/seal_sha3_512
  	 chmod -t src/seal_Store64
  	 chmod -t src/seal_blake2b
	./analyze


To work with C++ functions, rename the c++ppanalyze to analyze then run the following commands to set the c++ functions to run

chmod +t src/*
  	 chmod -t src/seal_u_exponentiate_uint
  	 chmod -t src/seal_u_exponentiate_uint_safe
  	 chmod -t src/seal_p_get_coeff_power
	chmod -t src/seal_p_get_plus
    	 chmod -t src/seal_ntt

 chmod -t src/openFHE_bgvrns_getCyclicOrder
  	 chmod -t src/openFHE_bigintdyn_add_bitVal
  	 chmod -t src/openFHE_ckksrns_ReduceRotation
chmod -t src/openFHE_ckksrns_SelectLayers
    	 chmod -t src/openFHE_discretegaussiangeneratorgeneric_SampleC
chmod -t src/openFHE_nbtheory2_ModInverse
    	 chmod -t src/openFHE_ubintdyn_nlz32
chmod -t src/openFHE_ubintdyn_nlz64
./analyze
  
