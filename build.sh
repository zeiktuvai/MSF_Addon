#!/bin/bash
date
hemtt build --no-bin

rm -r "$DEV_MOD_PATH"*
/bin/cp -rfp .hemttout/build/* "$DEV_MOD_PATH"

while getopts ":s" option; do   

    case $option in
        s)
            # copy to server
            ssh $ARMA_DEV_SRV 'powershell rm -recurse C:\Servers\arma3-dev\@MSF-DEV\*'
            scp -r .hemttout/build/* $ARMA_DEV_SRV:/C:/Servers/arma3-dev/@MSF-DEV
            exit;;        
    esac
done
