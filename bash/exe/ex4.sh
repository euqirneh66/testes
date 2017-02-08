#!/bin/bash

OPTIONS="opcao1 opcao2 opcao3 opcao4"

select opt in $OPTIONS; do
	if [ "$opt" = "opcao1" ]; then
  		echo "Voce escolheu a opcao 1"
                echo "--------"
		echo "Bye"
		echo "--------"
 		exit
	elif [ "$opt" = "opcao2" ]; then
  		echo "voce escolheu a opcao 2"
	elif [ "$opt" = "opcao3" ]; then
  		echo "voce escolheu a opcao 3"
	elif [ "$opt" = "opcao4" ]; then
  		echo "voce escolheu a opcao 4"
 	else
  		clear
  		echo "opcao invalida"
		echo $OPTIONS
 	fi
done
