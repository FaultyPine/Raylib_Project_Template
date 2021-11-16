if [ "$1" == "release" ] 
then
    ./scripts/build-linux.sh -r -q
elif [ "$1" == "clean" ]
then
    rm -r temp
    ./scripts/build-linux.sh -c
else
    ./scripts/build-linux.sh -d -r -q
fi
