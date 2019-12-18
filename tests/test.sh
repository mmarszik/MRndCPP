rm MRndCPP
rm time.txt
rm test.txt

#TESTS=(USE_RND_SIM_LIN_00 USE_RND_SIM_LIN_01 USE_RND_SIM_LIN_02 USE_RND_SIM_LIN_04 USE_RND_SIM_LIN_05 USE_RND_SIM_LIN_06 USE_RND_FIB_0 USE_RND_FIB_0a USE_RND_FIB_1 USE_RND_FIB_1a USE_RND_FIB_2 USE_RND_FIB_3 USE_RND_FIB_2a USE_RND_FIB_3a USE_RND_SFIB_0 USE_RND_COMP_0 USE_RND_COMP_1 USE_RND_COMP_2 USE_RND_COMP_3 USE_RND_COMP_4 USE_RND_COMP_5 USE_RND_COMP_6 USE_RND_COMP_7 USE_RND_LIN_1 USE_RND_LIN_1a USE_RND_LIN_2 USE_RND_LIN_2a USE_RND_LIN_2b USE_RND_LIN_2c USE_RND_MLIN_0 USE_RND_RANLUX_48 USE_RND_MT19937_64 USE_RND_KNUTH_B USE_RND_SKIP_LIN_1 USE_RND_SKIP_LIN_2b USE_RND_XOR2_0 USE_RND_XOR3_0)
TESTS=(USE_RND_FIB_4 USE_RND_FIB_5 USE_RND_FIB_6 USE_RND_FIB_7 USE_RND_FIB_8 USE_RND_FIB_9 USE_RND_FIB_10 USE_RND_FIB_11 USE_RND_FIB_12 USE_RND_FIB_13 USE_RND_FIB_14 USE_RND_FIB_15 USE_RND_FIB_16 USE_RND_FIB_17 USE_RND_FIB_18 USE_RND_FIB_19 USE_RND_FIB_20)

for def in "${TESTS[@]}"
do
   header=$(echo $def | tr [A-Z] [a-z])
   header="../$header.h"
   echo  $def
   echo  $header

   c++ -std=c++14 -O3 -D$def -DTEST00_PROGRAM -I../vendor/MxCPP/ ../*.cpp ../vendor/MxCPP/mx_array.cpp -o MRndCPP
   { time ./MRndCPP > test.txt; } 2> time.txt
   echo "/* TEST00"                                                      >> $header
   echo "time ./MRndCPP "                                                >> $header
   cat test.txt                                                          >> $header
   cat time.txt                                                          >> $header
   echo "*/"                                                             >> $header

   c++ -std=c++14 -O3 -D$def -DTEST01_PROGRAM -I../vendor/MxCPP/ ../*.cpp ../vendor/MxCPP/mx_array.cpp -o MRndCPP
   { time ./MRndCPP | dieharder -g200 -a -k2 >  test.txt; } 2> time.txt   
   echo "/* TEST01"                                                      >> $header
   echo "time ./MRndCPP | dieharder -g200 -a -k2 "                       >> $header
   cat test.txt                                                          >> $header
   cat time.txt                                                          >> $header
   echo "*/"                                                             >> $header

   { time ./MRndCPP | ./../../PractRand/RNG_test stdin32 -tlmax 100s > test.txt; } 2> time.txt
   echo "/* TEST01"                                                      >> $header
   echo "time ./MRndCPP | RNG_test stdin32 -tlmax 100s "                 >> $header
   cat test.txt                                                          >> $header
   cat time.txt                                                          >> $header
   echo "*/"                                                             >> $header


   { time ./MRndCPP | ./../../PractRand/RNG_test stdin32 -tlmax 1000s > test.txt; } 2> time.txt
   echo "/* TEST01"                                                      >> $header
   echo "time ./MRndCPP | RNG_test stdin32 -tlmax 1000s "                >> $header
   cat test.txt                                                          >> $header
   cat time.txt                                                          >> $header
   echo "*/"                                                             >> $header
   
done

rm MRndCPP
rm time.txt
rm test.txt
