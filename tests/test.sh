#GENERATORS=(USE_MRND_WYHASH64_0 USE_MRND_WYHASH64M_0 USE_MRND_FIB_1 USE_MRND_FIB_2 USE_MRND_FIB_3 USE_MRND_FIB_4 USE_MRND_FIB_5 USE_MRND_FIB_6 USE_MRND_MLIN_0 USE_MRND_RANLUX_48 USE_MRND_MT19937_64 USE_MRND_LIN_1 USE_MRND_LIN_2 USE_MRND_LIN_3 USE_MRND_LIN_4 USE_MRND_LIN_5 USE_MRND_LIN_6)

GENERATORS=( "$@" )

test="test_$RANDOM$RANDOM$RANDOM$RANDOM$RANDOM$RANDOM$RANDOM.txt"
time="time_$RANDOM$RANDOM$RANDOM$RANDOM$RANDOM$RANDOM$RANDOM.txt"
prog="MRndCPP_$RANDOM$RANDOM$RANDOM$RANDOM$RANDOM$RANDOM$RANDOM"


for GENERATOR in "${GENERATORS[@]}"
do
   header=$(echo $GENERATOR | tr [A-Z] [a-z])
   header="../$header.h"
   echo  $GENERATOR
   echo  $header

   c++ -std=c++14 -O3 -mtune=native -march=native -D$GENERATOR -DMRND_TEST00_PROGRAM -I../vendor/ ../*.cpp  -o $prog
   { time ./$prog 14 > $test; } 2> $time
   echo "/* TEST00"                                                      >> $header
   echo "time ./MRndCPP 14 "                                             >> $header
   cat $test                                                             >> $header
   cat $time                                                             >> $header
   echo "*/"                                                             >> $header

   c++ -std=c++14 -O3 -mtune=native -march=native -D$GENERATOR -DMRND_TEST01_PROGRAM -I../vendor/ ../*.cpp  -o $prog
   { time ./$prog | dieharder -g200 -a -k2 >  $test; } 2> $time
   echo "/* TEST01"                                                      >> $header
   echo "time ./MRndCPP | dieharder -g200 -a -k2 "                       >> $header
   cat $test                                                             >> $header
   cat $time                                                             >> $header
   echo "*/"                                                             >> $header

   for i in {1..1}
      do
      { time ./$prog | ./../../PractRand/RNG_test stdin -singlethreaded -tlmax 360000s > $test; } 2> $time
      echo "/* TEST01"                                                      >> $header
      echo "time ./MRndCPP | RNG_test stdin -singlethreaded -tlmax 360000s "  >> $header
      cat $test                                                             >> $header
      cat $time                                                             >> $header
      echo "*/"                                                             >> $header   
      done
      
done

rm $prog
rm $time
rm $test


#nohup bash test.sh USE_MRND_WYHASH64_0 USE_MRND_FIB_1 USE_MRND_FIB_2 USE_MRND_FIB_3 &
#nohup bash test.sh USE_MRND_WYHASH64M_0 USE_MRND_FIB_4 USE_MRND_FIB_5 USE_MRND_FIB_6  &
#nohup bash test.sh USE_MRND_MLIN_0 USE_MRND_LIN_1 USE_MRND_LIN_2 USE_MRND_LIN_3  &
#nohup bash test.sh USE_MRND_MT19937_64 USE_MRND_LIN_4 USE_MRND_LIN_5 USE_MRND_LIN_6 USE_MRND_RANLUX_48 &
