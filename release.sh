hemtt release --no-bin
rm -r "$DEV_MOD_PATH"addons/*
rm -r "$DEV_MOD_PATH"keys/*
/bin/cp -rfp .hemttout/release/addons/* "$DEV_MOD_PATH"addons
/bin/cp -rfp .hemttout/release/keys/* "$DEV_MOD_PATH"keys