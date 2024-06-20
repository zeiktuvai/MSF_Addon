    hemtt build --no-bin

    rm -r "$DEV_MOD_PATH"addons/*
    /bin/cp -rfp .hemttout/build/addons/* "$DEV_MOD_PATH"addons/
while getopts ":s" option; do   

    case $option in
        s)
            # copy to server
            ssh $ARMA_DEV_SRV 'powershell rm -recurse C:\Servers\arma3-dev\@MSF-DEV\*'
            scp -r .hemttout/build/* $ARMA_DEV_SRV:/C:/Servers/arma3-dev/@MSF-DEV
            exit;;        
    esac
done
