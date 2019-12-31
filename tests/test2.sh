
#g++ -std=c++14 -O3 -march=native  -fprofile-generate -I../vendor/ -DTEST03_PROGRAM -DUSE_RND_XOR2_0 -DUSE_RND_BUFF_1a -DTMRND_RND_BUFF_V1 ../*.cpp -o MRndCPP
#./MRndCPP
g++ -std=c++14 -O3 -march=native       -I../vendor/ -DTEST03_PROGRAM -DUSE_RND_XOR2_0 -DUSE_RND_BUFF_1a -DTMRND_RND_BUFF_V1 ../*.cpp -o MRndCPP
echo "--------------- 1"
time ./MRndCPP



#g++ -std=c++14 -O3 -march=native  -fprofile-generate -I../vendor/ -DTEST03_PROGRAM -DUSE_RND_XOR2_0 -DUSE_RND_BUFF_1a -DTMRND_RND_BUFF_V2 ../*.cpp -o MRndCPP
#./MRndCPP 
g++ -std=c++14 -O3 -march=native        -I../vendor/ -DTEST03_PROGRAM -DUSE_RND_XOR2_0 -DUSE_RND_BUFF_1a -DTMRND_RND_BUFF_V2 ../*.cpp -o MRndCPP
echo "--------------- 2"
time ./MRndCPP



#g++ -std=c++14 -O3 -march=native  -fprofile-generate -I../vendor/ -DTEST03_PROGRAM -DUSE_RND_XOR2_0 -DUSE_RND_BUFF_1a -DTMRND_RND_BUFF_V3 ../*.cpp -o MRndCPP
#./MRndCPP 
g++ -std=c++14 -O3 -march=native        -I../vendor/ -DTEST03_PROGRAM -DUSE_RND_XOR2_0 -DUSE_RND_BUFF_1a -DTMRND_RND_BUFF_V3 ../*.cpp -o MRndCPP
echo "--------------- 3"
time ./MRndCPP



#g++ -std=c++14 -O3 -march=native  -fprofile-generate -I../vendor/ -DTEST03_PROGRAM -DUSE_RND_XOR2_0 -DUSE_RND_BUFF_1a -DTMRND_RND_BUFF_V2 -DMX_USING_ARRAY_1 ../*.cpp -o MRndCPP
#./MRndCPP 
g++ -std=c++14 -O3 -march=native        -I../vendor/ -DTEST03_PROGRAM -DUSE_RND_XOR2_0 -DUSE_RND_BUFF_1a -DTMRND_RND_BUFF_V2 -DMX_USING_ARRAY_1 ../*.cpp -o MRndCPP
echo "--------------- 4"
time ./MRndCPP



#g++ -std=c++14 -O3 -march=native  -fprofile-generate -I../vendor/ -DTEST03_PROGRAM -DUSE_RND_XOR2_0 -DUSE_RND_BUFF_1a -DTMRND_RND_BUFF_V3 -DMX_USING_ARRAY_1 ../*.cpp -o MRndCPP
#./MRndCPP 
g++ -std=c++14 -O3 -march=native        -I../vendor/ -DTEST03_PROGRAM -DUSE_RND_XOR2_0 -DUSE_RND_BUFF_1a -DTMRND_RND_BUFF_V3 -DMX_USING_ARRAY_1 ../*.cpp -o MRndCPP
echo "--------------- 5"
time ./MRndCPP




#g++ -std=c++14 -O3 -march=native  -fprofile-generate -I../vendor/ -DTEST03_PROGRAM -DUSE_RND_XOR2_0 -DUSE_RND_BUFF_1a -DTMRND_RND_BUFF_V2 -DMX_USING_ARRAY_2 ../*.cpp -o MRndCPP
#./MRndCPP 
g++ -std=c++14 -O3 -march=native        -I../vendor/ -DTEST03_PROGRAM -DUSE_RND_XOR2_0 -DUSE_RND_BUFF_1a -DTMRND_RND_BUFF_V2 -DMX_USING_ARRAY_2 ../*.cpp -o MRndCPP
echo "--------------- 6"
time ./MRndCPP




#g++ -std=c++14 -O3 -march=native  -fprofile-generate -I../vendor/ -DTEST03_PROGRAM -DUSE_RND_XOR2_0 -DUSE_RND_BUFF_1a -DTMRND_RND_BUFF_V3 -DMX_USING_ARRAY_2 ../*.cpp -o MRndCPP
#./MRndCPP 
g++ -std=c++14 -O3 -march=native        -I../vendor/ -DTEST03_PROGRAM -DUSE_RND_XOR2_0 -DUSE_RND_BUFF_1a -DTMRND_RND_BUFF_V3 -DMX_USING_ARRAY_2 ../*.cpp -o MRndCPP
echo "--------------- 7"
time ./MRndCPP




#g++ -std=c++14 -O3 -march=native  -fprofile-generate -I../vendor/ -DTEST03_PROGRAM -DUSE_RND_XOR2_0 -DUSE_RND_BUFF_1a -DTMRND_RND_BUFF_V2 -DMX_USING_ARRAY_3 ../*.cpp -o MRndCPP
#./MRndCPP 
g++ -std=c++14 -O3 -march=native        -I../vendor/ -DTEST03_PROGRAM -DUSE_RND_XOR2_0 -DUSE_RND_BUFF_1a -DTMRND_RND_BUFF_V2 -DMX_USING_ARRAY_3 ../*.cpp -o MRndCPP
echo "--------------- 8"
time ./MRndCPP




#g++ -std=c++14 -O3 -march=native  -fprofile-generate -I../vendor/ -DTEST03_PROGRAM -DUSE_RND_XOR2_0 -DUSE_RND_BUFF_1a -DTMRND_RND_BUFF_V3 -DMX_USING_ARRAY_3 ../*.cpp -o MRndCPP
#./MRndCPP 
g++ -std=c++14 -O3 -march=native        -I../vendor/ -DTEST03_PROGRAM -DUSE_RND_XOR2_0 -DUSE_RND_BUFF_1a -DTMRND_RND_BUFF_V3 -DMX_USING_ARRAY_3 ../*.cpp -o MRndCPP
echo "--------------- 9"
time ./MRndCPP




#g++ -std=c++14 -O3 -march=native  -fprofile-generate -I../vendor/ -DTEST03_PROGRAM -DUSE_RND_XOR2_0 -DUSE_RND_BUFF_1a -DTMRND_RND_BUFF_V2 -DMX_USING_ARRAY_4 ../*.cpp -o MRndCPP
#./MRndCPP 
g++ -std=c++14 -O3 -march=native        -I../vendor/ -DTEST03_PROGRAM -DUSE_RND_XOR2_0 -DUSE_RND_BUFF_1a -DTMRND_RND_BUFF_V2 -DMX_USING_ARRAY_4 ../*.cpp -o MRndCPP
echo "--------------- 10"
time ./MRndCPP



#g++ -std=c++14 -O3 -march=native  -fprofile-generate -I../vendor/ -DTEST03_PROGRAM -DUSE_RND_XOR2_0 -DUSE_RND_BUFF_1a -DTMRND_RND_BUFF_V3 -DMX_USING_ARRAY_4 ../*.cpp -o MRndCPP
#./MRndCPP 
g++ -std=c++14 -O3 -march=native        -I../vendor/ -DTEST03_PROGRAM -DUSE_RND_XOR2_0 -DUSE_RND_BUFF_1a -DTMRND_RND_BUFF_V3 -DMX_USING_ARRAY_4 ../*.cpp -o MRndCPP
echo "--------------- 11"
time ./MRndCPP

rm MRndCPP