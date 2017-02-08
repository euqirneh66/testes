#!/bin/bash
echo "Digite A para ver a data ou \n B para ver o calendario"
read elemento
if [ $elemento = "A" ]
then
date
elif [ $elemento = "B" ]
then
cal
else
echo "Argumento invalido"
fi
