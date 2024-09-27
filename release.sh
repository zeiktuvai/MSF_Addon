#!/bin/bash
date
hemtt release --no-bin

currentPath=$(pwd)

if [[ ${currentPath} == *"Units"* ]]; then 
    rm -r "$DEV_MOD_PATH"@MSF-Units-Dev/*    
    /bin/cp -rfp .hemttout/release/* "$DEV_MOD_PATH"@MSF-Units-Dev/
    mkdir -p ~/DEV_SHARE/release-units
    /bin/cp -rfp .hemttout/release/* ~/DEV_SHARE/release-units/
    scp -r .hemttout/release/* $ARMA_DEV_SRV:/C:/Servers/@MSF-Units
else
    rm -r "$DEV_MOD_PATH"@MSF-Dev/*    
    /bin/cp -rfp .hemttout/release/* "$DEV_MOD_PATH"@MSF-Dev/
    mkdir -p ~/DEV_SHARE/release-msf
    /bin/cp -rfp .hemttout/release/* ~/DEV_SHARE/release-msf/
    scp -r .hemttout/release/* $ARMA_DEV_SRV:/C:/Servers/@MSF
fi

