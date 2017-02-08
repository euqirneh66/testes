#!/bin/bash
if [ -z "$1" ]; then
	echo usage: $0 directory
	exit
fi
SRCD=$1
TGTD="./"
OF=home-$(date +%Y%m%d).tgz
tar -cZf $TGTD$OF $SRCD
