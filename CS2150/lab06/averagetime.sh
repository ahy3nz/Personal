#!/bin/bash

#Print out request for dictionary
echo "Type exact name of dictionary file, then press enter: "
#Read in user input for dictionary
read dict
#Request grid file
echo "Type exact name of grid file, then press enter: "
#Read in grid file
read grid
#initialize total time variable
TOTAL_TIME=0

#execute code 5 times
for ((i = 1; i <=5; ++i)); do
	#find the running time of the program by getting the last line of output

	RUNNING_TIME=`./a.out $dict $grid | tail -1`
	#add the running time to the total running tmie
	TOTAL_TIME=$(($TOTAL_TIME + $RUNNING_TIME))
done
#calculate the average running time
AVERAGE_TIME=`expr $TOTAL_TIME / 5`
#print the average running time
echo "$AVERAGE_TIME microseconds average time"
