rm MRndCPP

versions=(TMRND_RND_XOR2_V3 TMRND_RND_XOR2_V1 TMRND_RND_XOR2_V2)
arrays=(MX_USING_ARRAY_1 MX_USING_ARRAY_2 MX_USING_ARRAY_3 MX_USING_ARRAY_4 MX_USING_ARRAY_5)


for version in "${versions[@]}"
do

for array in "${arrays[@]}"
do

echo "----------------"
echo $version
echo $array

g++ -std=c++14 -O3 -march=native -mtune=native -funroll-loops -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0 -D$version -D$array ../*.cpp -o MRndCPP
time ./MRndCPP 12
rm MRndCPP

g++ -std=c++14 -O3 -march=native -mtune=native  -funroll-loops -fprofile-generate -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0 -D$version -D$array ../*.cpp -o MRndCPP
./MRndCPP 1 >> tmp.txt
rm MRndCPP

g++ -std=c++14 -O3 -march=native -mtune=native  -funroll-loops -fprofile-use -I../vendor/ -DTEST00_PROGRAM -DUSE_RND_XOR2_0 -D$version -D$array ../*.cpp -o MRndCPP
time ./MRndCPP 12
rm MRndCPP

done
done

