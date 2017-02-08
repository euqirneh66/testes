#!/bin/bash


while getopts ab:cde OPCAO; do
	case "${OPCAO}" in
		a) recebi_a=1 ;;
		b) argumento_b="${OPTARG}" ;;
		c) recebi_c=1 ;;
		d) recebi_d= 1;;
		e) recebi_e=1 ;;
	esac
done

echo "Valor de OPTIND ao sair do getopts :$OPTIND"

todos_args=( $@ )
n_args=${#todos_args[@]}

#argumentos sem opcoes
for indice in `seq $((OPTIND-1)) $((n_args-1))`; do
	echo "Argumento $indice: ${todos_args[$indice]}"
done

exit 0
