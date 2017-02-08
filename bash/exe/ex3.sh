#!/bin/bash
listar(){
echo "opcao 1 listar .c"
echo "opcao 2 listar .txt"

read op
cd ~/backup
if [ $op -eq 1 ]
 then
   ls -lha
else
  ls -l *.txt
fi

}

echo -n "Escolha 1 para listar"

read opcao

if [ $opcao -eq 1 ] 
 then
 listar
fi
