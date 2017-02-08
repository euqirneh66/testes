#!/bin/bash
if [ $# -lt 1 ]; then
	echo "faltou utilizar pelo menos um parametro"
	exit 1
fi

echo "Numero de argumentos : $#"

COUNT=0

for ARG in $*; do
	COUNT=`expr $COUNT + 1`
	echo "Argumento $COUNT: $ARG"
done
