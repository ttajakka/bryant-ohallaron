#!/bin/bash
rm minmax.txt

for j in {1..50000}
do
    ./stackcheck >> stackheads.txt
done
python3 findminmax.py >> minmax.txt

#for i in {1..2}
#do
#    echo "I'm in"
#    for j in {1..100}
#    do
#        ./stackcheck >> stackheads.txt
#    done
#    python3 findminmax.py >> minmax.txt
#    rm stackheads.txt
#    echo "I'm out"
#done
