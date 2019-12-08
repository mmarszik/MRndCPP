d=$(date "+%F %T %Z")
r=$(uuidgen)
if [ "$1" == "" ]; then
s='TR'
else
s=$1
fi

function echo70()
{
    echo $1 | fold -s -w 65 | awk '{ print "/// " $0;}' | awk '{ printf "%s", $0; for( i=length($0) ; i<70 ; i++ ) { printf " "; } print "//"; }'
}

lic1="It is file containing source code of library of pseudo random number generator named MRndCPP."
lic2="The file is share on the open source licence, but unlike gpl, mit, bsd apache, l-gpl, etc, it is NOT standard and NOT liberary licence of the open source. By downloading and reading this file, you conclude a contract with me. Namely, if you understand that my source code can be improved (for example: speed up, better algorithms, better implementation, better parametrs, fixed bugs, etc), you need to present me everything in very detail. You can use this code only for NON comercial and you can NOT modify this header of file. Otherwise you need to the my special licence."
lic3="You can test how the generators pass the exam. The performence test in the file test_00.cpp. Test in the file test_01.cpp is prepared special to the external software like dieharder or PractRand. The shell file test.sh containing complete test of all generators in this library, but code of some headers from this project will be modified."

echo "////////////////////////////////////////////////////////////////////////"
echo70
echo70 "$lic1"
echo70
echo70 "$lic2"
echo70
echo70 "$lic3"
echo70
echo "////////////////////////////////////////////////////////////////////////"
echo70
echo70 "@created on $d"
echo70 "@author MMarszik (Mariusz Marszalkowski sqnett.com)"
echo70 "@email mmarszik@gmail.com"
echo70 "@package MRndCPP"
echo70 "@token $r"
echo70 "@brief: "
echo70 "@description: "
echo70
echo "////////////////////////////////////////////////////////////////////////"
