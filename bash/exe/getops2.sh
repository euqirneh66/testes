#!/bin/bash

#script 2

while getopts ab:cde OPCAO; do
	case "${OPCAO}" in
		a) recebi_a=1 ;;
		b) argumento_b="${OPTARG}" ;;
		c) recebi_c=1 ;;
		d) recebi_d=2 ;;
		e) recebi_e=1 ;;
	esac
done

echo "Valor OPTIND ao sair do getopts: $OPTIND"

echo "Argumentos antes de sair do grande shift: $*"

shift $((OPTIND-1))

echo "Argumentos que restaram apos shitf: $*"

exit 0
