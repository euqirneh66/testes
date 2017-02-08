#!/bin/bash
#------------------------------------
# script para criacao de novos arquivos
#------------------------------------

OUTPUT="/tmp/nome.txt"

>$OUTPUT

dialog --title "Criar arquivo" \
	--inputbox "Entre com o nome do arquivo" 20 80 2> $OUTPUT

arquivo=$(<$OUTPUT)

verify=$?
if [ $verify -eq 0 ]; then
	echo `echo "#!/bin/bash" > $arquivo.sh; `
	chmod +x $arquivo.sh
	vim $arquivo.sh
fi


