#!/bin/bash

COMMAND='platformio run '
PLATFORMS=`grep '\[env:' platformio.ini | awk -F: '{ print $2 }' | sed -e 's/\\]//'`

for i in $PLATFORMS; do
  echo $i
  COMMAND="$COMMAND -e $i"
done

$COMMAND

for i in $PLATFORMS; do
  mkdir -p "private/build/$i"
  cp -v .pio/build/$i/firmware*.bin "private/build/$i"
done

