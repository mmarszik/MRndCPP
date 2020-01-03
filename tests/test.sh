rm MRndCPP
rm time.txt
rm test.txt

TESTS=(USE_RND_WYHASH64_0 USE_RND_WYHASH64M_0 USE_RND_FIB_1 USE_RND_FIB_2 USE_RND_FIB_3 USE_RND_FIB_4 USE_RND_FIB_5 USE_RND_FIB_6 USE_RND_MLIN_0 USE_RND_RANLUX_48 USE_RND_MT19937_64 USE_RND_LIN_1 USE_RND_LIN_2 USE_RND_LIN_3 USE_RND_LIN_4 USE_RND_LIN_5 USE_RND_LIN_6)

for def in "${TESTS[@]}"
do
   header=$(echo $def | tr [A-Z] [a-z])
   header="../$header.h"
   echo  $def
   echo  $header

   c++ -std=c++14 -O3 -D$def -DTEST00_PROGRAM -I../vendor/ ../*.cpp  -o MRndCPP
   { time ./MRndCPP 12 > test.txt; } 2> time.txt
   echo "/* TEST00"                                                      >> $header
   echo "time ./MRndCPP 12 "                                             >> $header
   cat test.txt                                                          >> $header
   cat time.txt                                                          >> $header
   echo "*/"                                                             >> $header

   c++ -std=c++14 -O3 -D$def -DTEST01_PROGRAM -I../vendor/ ../*.cpp  -o MRndCPP
   { time ./MRndCPP | dieharder -g200 -a -k2 >  test.txt; } 2> time.txt
   echo "/* TEST01"                                                      >> $header
   echo "time ./MRndCPP | dieharder -g200 -a -k2 "                       >> $header
   cat test.txt                                                          >> $header
   cat time.txt                                                          >> $header
   echo "*/"                                                             >> $header

   { time ./MRndCPP | ./../../PractRand/RNG_test stdin -tlmax 100s > test.txt; } 2> time.txt
   echo "/* TEST01"                                                      >> $header
   echo "time ./MRndCPP | RNG_test stdin -tlmax 100s "                 >> $header
   cat test.txt                                                          >> $header
   cat time.txt                                                          >> $header
   echo "*/"                                                             >> $header

   { time ./MRndCPP | ./../../PractRand/RNG_test stdin -tlmax 100s > test.txt; } 2> time.txt
   echo "/* TEST01"                                                      >> $header
   echo "time ./MRndCPP | RNG_test stdin -tlmax 100s "                 >> $header
   cat test.txt                                                          >> $header
   cat time.txt                                                          >> $header
   echo "*/"                                                             >> $header

   { time ./MRndCPP | ./../../PractRand/RNG_test stdin -tlmax 100s > test.txt; } 2> time.txt
   echo "/* TEST01"                                                      >> $header
   echo "time ./MRndCPP | RNG_test stdin -tlmax 100s "                 >> $header
   cat test.txt                                                          >> $header
   cat time.txt                                                          >> $header
   echo "*/"                                                             >> $header

   { time ./MRndCPP | ./../../PractRand/RNG_test stdin -tlmax 3600s > test.txt; } 2> time.txt
   echo "/* TEST01"                                                      >> $header
   echo "time ./MRndCPP | RNG_test stdin -tlmax 1000s "                >> $header
   cat test.txt                                                          >> $header
   cat time.txt                                                          >> $header
   echo "*/"                                                             >> $header
   
done

rm MRndCPP
rm time.txt
rm test.txt
