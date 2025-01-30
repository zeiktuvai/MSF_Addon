#!/bin/bash
date
hemtt release

rm -r "$DEV_MOD_PATH"@MSF-Dev/*    
/bin/cp -rfp .hemttout/release/* "$DEV_MOD_PATH"@MSF-Dev/
mkdir -p ~/DEV_SHARE/release-msf
/bin/cp -rfp .hemttout/release/* ~/DEV_SHARE/release-msf/
# scp -r .hemttout/release/* $ARMA_DEV_SRV:/C:/Servers/@MSF
