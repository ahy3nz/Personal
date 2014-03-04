#!/bin/bash

echo "Type exact name of dictionary file, then press enter: "
read dict
echo "Type exact name of grid file, then press enter: "
read grid
TOTAL_TIME=0
for ((i = 1; i <=5; ++i)); do
	RUNNING_TIME=`./a.out $dict $grid | tail -1`
	TOTAL_TIME=$(($TOTAL_TIME + $RUNNING_TIME))
done
AVERAGE_TIME=`expr $TOTAL_TIME / 5`
echo "$AVERAGE_TIME microseconds average time"
