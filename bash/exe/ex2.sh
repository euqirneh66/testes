#!/bin/bash
echo "Insira A para calendario ou B para date"
read elemento

case $elemento in
"A") cal ;;
"B") date ;;
*) echo "Opcao invalida" ;;
esac
