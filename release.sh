#!/bin/bash
date

hemtt release --no-bin
rm -r "$DEV_MOD_PATH"*
/bin/cp -rfp .hemttout/release/* "$DEV_MOD_PATH"