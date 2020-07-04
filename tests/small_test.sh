rm MRndCPP
rm time.txt
rm test.txt

TESTS=(USE_MRND_WYHASH64_0 USE_MRND_WYHASH64M_0 USE_MRND_FIB_1 USE_MRND_FIB_2 USE_MRND_FIB_3 USE_MRND_FIB_4 USE_MRND_FIB_5 USE_MRND_FIB_6 USE_MRND_MLIN_0 USE_MRND_RANLUX_48 USE_MRND_MT19937_64 USE_MRND_LIN_1 USE_MRND_LIN_2 USE_MRND_LIN_3 USE_MRND_LIN_4 USE_MRND_LIN_5 USE_MRND_LIN_6)
#TESTS=(USE_MRND_LIN_1 USE_MRND_LIN_2 USE_MRND_LIN_3 USE_MRND_LIN_4 USE_MRND_LIN_5 USE_MRND_LIN_6)

for def in "${TESTS[@]}"
do
   header=$(echo $def | tr [A-Z] [a-z])
   header="../$header.h"
   echo  $def
   echo  $header

   c++ -std=c++14 -O3 -D$def -DMRND_TEST00_PROGRAM -I../vendor/ ../*.cpp  -o MRndCPP
   { time ./MRndCPP 12 > test.txt; } 2> time.txt
   echo "/* TEST00"                                                      >> $header
   echo "time ./MRndCPP 12 "                                             >> $header
   cat test.txt                                                          >> $header
   cat time.txt                                                          >> $header
   echo "*/"                                                             >> $header

   c++ -std=c++14 -O3 -D$def -DMRND_TEST01_PROGRAM -I../vendor/ ../*.cpp  -o MRndCPP
   { time ./MRndCPP | dieharder -g200 -a -k2 >  test.txt; } 2> time.txt
   echo "/* TEST01"                                                      >> $header
   echo "time ./MRndCPP | dieharder -g200 -a -k2 "                      >> $header
   cat test.txt                                                          >> $header
   cat time.txt                                                          >> $header
   echo "*/"                                                             >> $header

   { time ./MRndCPP | ./../../PractRand/RNG_test stdin -tlmax 18000s > test.txt; } 2> time.txt
   echo "/* TEST01"                                                      >> $header
   echo "time ./MRndCPP | RNG_test stdin -tlmax 18000s "                 >> $header
   cat test.txt                                                          >> $header
   cat time.txt                                                          >> $header
   echo "*/"                                                             >> $header
   
done

rm MRndCPP
rm time.txt
rm test.txt
