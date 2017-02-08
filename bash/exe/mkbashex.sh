#!/bin/bash
#criador de bash

echo "Digite o nome do arquivo"
read arquivo
`echo "#!/bin/bash" > $arquivo.sh`
chmod +x $arquivo.sh
vi $arquivo.sh
