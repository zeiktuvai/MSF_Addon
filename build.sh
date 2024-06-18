BINARIZE="/home/zeiktuvai/games/SteamLibrary/steamapps/common/Arma 3 Tools/Binarize/binarize.exe"
CFG="/home/zeiktuvai/games/SteamLibrary/steamapps/common/Arma 3 Tools/CfgConvert/CfgConvert.exe"
SIGN="/home/zeiktuvai/games/SteamLibrary/steamapps/common/Arma 3 Tools/DSSignFile/DSSignFile.exe"
BANK="/home/zeiktuvai/games/SteamLibrary/steamapps/common/Arma 3 Tools/FileBank/FileBank.exe"
TOOLS="/home/zeiktuvai/games/SteamLibrary/steamapps/common/Arma 3 Tools"

BUILDER="/home/zeiktuvai/games/SteamLibrary/steamapps/common/Arma 3 Tools/AddonBuilder/AddonBuilder.exe"
WORKING_PATH=$(pwd)
echo "$WORKING_PATH"/MSF/ 

wine "$BUILDER" "$WORKING_PATH"/MSF "$WORKING_PATH"/Pub2 -prefix=msf -sign=/home/zeiktuvai/Nextcloud/Arma_Keys/MSF_TFY_ZeikTuvai.biprivatekey -toolsDirectory="$TOOLS"
# -binarize="$BINARIZE" -cfgconvert="$CFG" -dssignfile="$SIGN" -filebank="$BANK"