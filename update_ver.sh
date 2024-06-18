VER="1.5"

find . -name 'version_V*' -delete
echo "MSF Release Version: "$VER >| version_V"$VER"
echo "Updated MSF version"
cat version_V"$VER"

find Publish/ -name 'version_V*' -delete
echo "MSF Release Version: "$VER >| Publish/version_V"$VER"
echo "Updated Publish Version:"
cat Publish/version_V"$VER"

sed -i "s\version =.*\version = $VER;\g" MSF/config.cpp
echo "MSF Config updated"
grep "version" MSF/config.cpp | sed -e 's/^\s*//' -e '/^$/d' 