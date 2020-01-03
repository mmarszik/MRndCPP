g++ -std=c++14 -O3 -fprofile-generate -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0 -DTMRND_RND_XOR2_V1 -DXOR_SIZE=1687648 ../*.cpp -o MRnd
./MRnd
g++ -std=c++14 -O3 -fprofile-use -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0 -DTMRND_RND_XOR2_V1 -DXOR_SIZE=1687648 ../*.cpp -o MRnd
echo "--------------- 1"
time ./MRnd


g++ -std=c++14 -O3 -fprofile-generate -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0 -DTMRND_RND_XOR2_V1 -DXOR_SIZE=1687647 ../*.cpp -o MRnd
./MRnd
g++ -std=c++14 -O3 -fprofile-use -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0 -DTMRND_RND_XOR2_V1 -DXOR_SIZE=1687647 ../*.cpp -o MRnd
echo "--------------- 2"
time ./MRnd



g++ -std=c++14 -O3 -fprofile-generate -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0 -DTMRND_RND_XOR2_V2 -DXOR_SIZE=1687648 ../*.cpp -o MRnd
./MRnd
g++ -std=c++14 -O3 -fprofile-use      -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0 -DTMRND_RND_XOR2_V2 -DXOR_SIZE=1687648 ../*.cpp -o MRnd
echo "--------------- 3"
time ./MRnd

g++ -std=c++14 -O3 -fprofile-generate -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0 -DTMRND_RND_XOR2_V2 -DXOR_SIZE=1687647 -DMX_USING_ARRAY_1 ../*.cpp -o MRnd
./MRnd
g++ -std=c++14 -O3 -fprofile-use      -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0 -DTMRND_RND_XOR2_V2 -DXOR_SIZE=1687647 -DMX_USING_ARRAY_1 ../*.cpp -o MRnd
echo "--------------- 4"
time ./MRnd



g++ -std=c++14 -O3 -fprofile-generate -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0 -DTMRND_RND_XOR2_V2 -DXOR_SIZE=1687648 -DMX_USING_ARRAY_1 ../*.cpp -o MRnd
./MRnd
g++ -std=c++14 -O3 -fprofile-use      -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0 -DTMRND_RND_XOR2_V2 -DXOR_SIZE=1687648 -DMX_USING_ARRAY_1 ../*.cpp -o MRnd
echo "--------------- 5"
time ./MRnd

g++ -std=c++14 -O3 -fprofile-generate -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0 -DTMRND_RND_XOR2_V2 -DXOR_SIZE=1687647 -DMX_USING_ARRAY_1 ../*.cpp -o MRnd
./MRnd
g++ -std=c++14 -O3 -fprofile-use      -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0 -DTMRND_RND_XOR2_V2 -DXOR_SIZE=1687647 -DMX_USING_ARRAY_1 ../*.cpp -o MRnd
echo "--------------- 6"
time ./MRnd



g++ -std=c++14 -O3 -fprofile-generate -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0 -DTMRND_RND_XOR2_V2 -DXOR_SIZE=1687648 -DMX_USING_ARRAY_2 ../*.cpp -o MRnd
./MRnd
g++ -std=c++14 -O3 -fprofile-use      -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0 -DTMRND_RND_XOR2_V2 -DXOR_SIZE=1687648 -DMX_USING_ARRAY_2 ../*.cpp -o MRnd
echo "--------------- 7"
time ./MRnd

g++ -std=c++14 -O3 -fprofile-generate -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0 -DTMRND_RND_XOR2_V2 -DXOR_SIZE=1687647 -DMX_USING_ARRAY_2 ../*.cpp -o MRnd
./MRnd
g++ -std=c++14 -O3 -fprofile-use      -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0 -DTMRND_RND_XOR2_V2 -DXOR_SIZE=1687647 -DMX_USING_ARRAY_2 ../*.cpp -o MRnd
echo "--------------- 8"
time ./MRnd



g++ -std=c++14 -O3 -fprofile-generate -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0 -DTMRND_RND_XOR2_V2 -DXOR_SIZE=1687648 -DMX_USING_ARRAY_3 ../*.cpp -o MRnd
./MRnd
g++ -std=c++14 -O3 -fprofile-use      -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0 -DTMRND_RND_XOR2_V2 -DXOR_SIZE=1687648 -DMX_USING_ARRAY_3 ../*.cpp -o MRnd
echo "--------------- 9"
time ./MRnd

g++ -std=c++14 -O3 -fprofile-generate -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0 -DTMRND_RND_XOR2_V2 -DXOR_SIZE=1687647 -DMX_USING_ARRAY_3 ../*.cpp -o MRnd
./MRnd
g++ -std=c++14 -O3 -fprofile-use      -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0 -DTMRND_RND_XOR2_V2 -DXOR_SIZE=1687647 -DMX_USING_ARRAY_3 ../*.cpp -o MRnd
echo "--------------- 10"
time ./MRnd



g++ -std=c++14 -O3 -fprofile-generate -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0 -DTMRND_RND_XOR2_V2 -DXOR_SIZE=1687648 -DMX_USING_ARRAY_4 ../*.cpp -o MRnd
./MRnd
g++ -std=c++14 -O3 -fprofile-use      -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0 -DTMRND_RND_XOR2_V2 -DXOR_SIZE=1687648 -DMX_USING_ARRAY_4 ../*.cpp -o MRnd
echo "--------------- 11"
time ./MRnd

g++ -std=c++14 -O3 -fprofile-generate -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0 -DTMRND_RND_XOR2_V2 -DXOR_SIZE=1687647 -DMX_USING_ARRAY_4 ../*.cpp -o MRnd
./MRnd
g++ -std=c++14 -O3 -fprofile-use      -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0 -DTMRND_RND_XOR2_V2 -DXOR_SIZE=1687647 -DMX_USING_ARRAY_4 ../*.cpp -o MRnd
echo "--------------- 12"
time ./MRnd









g++ -std=c++14 -O3 -fprofile-generate -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0  -DXOR_SIZE=1687648 ../*.cpp -o MRnd
./MRnd
g++ -std=c++14 -O3 -fprofile-use      -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0  -DXOR_SIZE=1687648 ../*.cpp -o MRnd
echo "--------------- 13"
time ./MRnd

g++ -std=c++14 -O3 -fprofile-generate -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0  -DXOR_SIZE=1687647 -DMX_USING_ARRAY_1 ../*.cpp -o MRnd
./MRnd
g++ -std=c++14 -O3 -fprofile-use      -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0  -DXOR_SIZE=1687647 -DMX_USING_ARRAY_1 ../*.cpp -o MRnd
echo "--------------- 14"
time ./MRnd



g++ -std=c++14 -O3 -fprofile-generate -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0  -DXOR_SIZE=1687648 -DMX_USING_ARRAY_1 ../*.cpp -o MRnd
./MRnd
g++ -std=c++14 -O3 -fprofile-use      -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0  -DXOR_SIZE=1687648 -DMX_USING_ARRAY_1 ../*.cpp -o MRnd
echo "--------------- 15"
time ./MRnd

g++ -std=c++14 -O3 -fprofile-generate -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0  -DXOR_SIZE=1687647 -DMX_USING_ARRAY_1 ../*.cpp -o MRnd
./MRnd
g++ -std=c++14 -O3 -fprofile-use      -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0  -DXOR_SIZE=1687647 -DMX_USING_ARRAY_1 ../*.cpp -o MRnd
echo "--------------- 16"
time ./MRnd



g++ -std=c++14 -O3 -fprofile-generate -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0  -DXOR_SIZE=1687648 -DMX_USING_ARRAY_2 ../*.cpp -o MRnd
./MRnd
g++ -std=c++14 -O3 -fprofile-use      -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0  -DXOR_SIZE=1687648 -DMX_USING_ARRAY_2 ../*.cpp -o MRnd
echo "--------------- 17"
time ./MRnd

g++ -std=c++14 -O3 -fprofile-generate -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0  -DXOR_SIZE=1687647 -DMX_USING_ARRAY_2 ../*.cpp -o MRnd
./MRnd
g++ -std=c++14 -O3 -fprofile-use      -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0  -DXOR_SIZE=1687647 -DMX_USING_ARRAY_2 ../*.cpp -o MRnd
echo "--------------- 18"
time ./MRnd



g++ -std=c++14 -O3 -fprofile-generate -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0  -DXOR_SIZE=1687648 -DMX_USING_ARRAY_3 ../*.cpp -o MRnd
./MRnd
g++ -std=c++14 -O3 -fprofile-use      -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0  -DXOR_SIZE=1687648 -DMX_USING_ARRAY_3 ../*.cpp -o MRnd
echo "--------------- 19"
time ./MRnd

g++ -std=c++14 -O3 -fprofile-generate -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0  -DXOR_SIZE=1687647 -DMX_USING_ARRAY_3 ../*.cpp -o MRnd
./MRnd
g++ -std=c++14 -O3 -fprofile-use      -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0  -DXOR_SIZE=1687647 -DMX_USING_ARRAY_3 ../*.cpp -o MRnd
echo "--------------- 20"
time ./MRnd



g++ -std=c++14 -O3 -fprofile-generate -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0  -DXOR_SIZE=1687648 -DMX_USING_ARRAY_4 ../*.cpp -o MRnd
./MRnd
g++ -std=c++14 -O3 -fprofile-use      -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0  -DXOR_SIZE=1687648 -DMX_USING_ARRAY_4 ../*.cpp -o MRnd
echo "--------------- 21"
time ./MRnd

g++ -std=c++14 -O3 -fprofile-generate -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0  -DXOR_SIZE=1687647 -DMX_USING_ARRAY_4 ../*.cpp -o MRnd
./MRnd
g++ -std=c++14 -O3 -fprofile-use      -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0  -DXOR_SIZE=1687647 -DMX_USING_ARRAY_4 ../*.cpp -o MRnd
echo "--------------- 22"
time ./MRnd



