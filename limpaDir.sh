#!/bin/bash
# deleta arquivos inúteis

read -p "deletar arquivos inúteis (apos ter instalado os patches com sucesso) [y/N]? " -n 1 -r
echo    
if [[ ! $REPLY =~ ^[Yy]$ ]]
then
    [[ "$0" = "$BASH_SOURCE" ]] && exit 1 || return 1
fi


rm -rf *.o
rm -rf *.orig
rm -rf *.rej
rm -rf config.h
sudo rm -rf dmenu
sudo rm -rf stest
rm -rf *.diff
