#!/bin/bash

# This script compresses a "backup" directory into a .tar file and logs the operation

hour=`date +%X`
date=`date +%x`

echo "=============================================================" >> log.txt
echo -e "Backup execution - Date $date - Hour $hour" >> log.txt

echo "Start time: $hour" >> log.txt

echo "Compressed files: " >> log.txt
echo "" >> log.txt
tar -zcvf backup.tar backup >> log.txt
echo "" >> log.txt

echo "Backup directory: `pwd`" >> log.txt

echo "End time: `date +%X`" >> log.txt
echo "=============================================================" >> log.txt
